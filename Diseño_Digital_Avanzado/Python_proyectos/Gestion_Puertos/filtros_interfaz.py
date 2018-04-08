# -*- coding: utf-8 -*-
"""
Created on Fri Mar  9 18:01:48 2018

@author: andersson
"""

from tkinter import *
import pyaudio
import scipy.io.wavfile as wavfile
import matplotlib.pylab as plt
import wave
from scipy.fftpack import fft
import numpy as np
#from tkFileDialog import *
from scipy.fftpack import fft
from PIL import Image, ImageTk

from scipy import signal

ventana=Tk()
ventana.geometry("1200x800+100+100")
ventana.title("FILTROS")


def periodo():
    

    #definir funcion saludar del boton
    def grabar():
            global  fs, data, w, h, filtrado
            periodo.destroy()
            periododemuestreo=entradaper.get() 
            tiempodegraba=entradatime.get()
            chunk=1024
            FORMAT = pyaudio.paInt16
            CHANNELS = 1
            fs = periododemuestreo
            tiempo = tiempodegraba
            samples = (fs/1024)*tiempo
            p = pyaudio.PyAudio()

            stream = p.open(format=FORMAT,channels=CHANNELS,rate =fs,input=True,frames_per_buffer=chunk)
            stream1 = p.open(format=FORMAT,channels=CHANNELS,rate =fs,output=True,frames_per_buffer=chunk)

            print ("*grabando")
            arreglo = []
            for i in range(0, samples):
                data = stream.read(chunk)
                arreglo.append(data)

            stream.stop_stream()
            stream.close()
            stream1.stop_stream()
            stream1.close()


            wf = wave.open('audio1.wav', 'wb')
            wf.setnchannels(CHANNELS)
            wf.setframerate(fs)
            wf.setsampwidth(p.get_sample_size(FORMAT))
            wf.writeframes(b''.join(arreglo))
            wf.close()
            print ("*fin de la grabacion")
            fs, data = wavfile.read("audio1.wav")
            print(data.size)
            a=len(data)
            t=np.linspace(0,(a-1)*1.0/fs,a)
            plt.figure(1).clf()
            plt.figure(1)
            plt.plot(t,data)
            plt.savefig("imagentiempo1.png")
            
            

    #definir funcion despedir del boton
    

    #creando la ventana
    periodo=Toplevel(ventana)
    periodo.geometry("400x200+450+200")
    periodo.focus_set()
    periodo.grab_set()
    periodo.transient(master=ventana)
    periodo.title("SELECCION PARAMETROS DE GRABACION")
    lblperiodo=Label(periodo,text="Ingrese periodo de muestreo",fg="black",font=("Agency FB",14) ).place(x=80,y=10)
    entradaper=IntVar()
    entradaper.set("16000")
    txtperiodo=Entry(periodo,textvariable=entradaper).place(x=90,y=40)
    
    lbltime=Label(periodo,text="Ingrese tiempo de grabacion",fg="black",font=("Agency FB",14) ).place(x=80,y=70)
    entradatime=IntVar()
    entradatime.set("3")
    txttime=Entry(periodo,textvariable=entradatime).place(x=90,y=100)
    btnper=Button(periodo,text="Aceptar",command=grabar,font=("Agency FB",14)).place(x=100,y=130)
    periodo.wait_window(periodo)
    
  

    print ("*fin de la grabacion")
    
    #plt.show()
    
def pintar_imagen():
    ancho=300
    alto=200
    img = Image.open('imagentiempo1.png', "rb")
    img.thumbnail((ancho,alto), Image.ANTIALIAS)
    imagen1 = ImageTk.PhotoImage(img)
    label1=Label(ventana, image=imagen1, width=ancho, height=alto).place(x=1, y=75)

    img2 = Image.open('imagenfreq.png', "rb")
    img2.thumbnail((ancho,alto), Image.ANTIALIAS)
    imagen2 = ImageTk.PhotoImage(img2)
    label2=Label(ventana, image=imagen2, width=ancho, height=alto).place(x=310, y=75)
    
    img3 = Image.open('imagenbode.png', "rb")
    img3.thumbnail((ancho,alto), Image.ANTIALIAS)
    imagen3 = ImageTk.PhotoImage(img3)
    label3=Label(ventana, image=imagen3, width=ancho, height=alto).place(x=620, y=75)
    
    img4 = Image.open('filtrado.png', "rb")
    img4.thumbnail((ancho,alto), Image.ANTIALIAS)
    imagen4 = ImageTk.PhotoImage(img4)
    label4=Label(ventana, image=imagen4, width=ancho, height=alto).place(x=620, y=280)
    
    img5 = Image.open('filtradoFFT.png', "rb")
    img5.thumbnail((ancho,alto), Image.ANTIALIAS)
    imagen5 = ImageTk.PhotoImage(img5)
    label5=Label(ventana, image=imagen5, width=ancho, height=alto).place(x=620, y=490)
    
    Image.show()
   

def t1():

    pintar_imagen()


def t2():
    global dataf
    
    plt.figure(1).clf()
    plt.figure(2)
    plt.plot(dataf)
    plt.show()
    

def f1():
    global data, fs
    N = len(data)

     # sample spacing
    T = 1.0 / fs
    
    x = np.linspace(0.0, N*T, N)
    
    yf = fft(data)
    xf = np.linspace(0.0, 1.0/(2.0*T), N/2)
    plt.figure().clf()
    plt.figure()
    plt.plot(xf, 2.0/N * np.abs(yf[0:N/2]))
    plt.grid()
    plt.savefig("imagenfreq.png")
    pintar_imagen()
    
    
def f2():
    global dataf, fs
    N = len(dataf)

     # sample spacing
    T = 1.0 / fs
    
    x = np.linspace(0.0, N*T, N)
    
    yf = fft(data)
    xf = np.linspace(0.0, 1.0/(2.0*T), N/2)
    plt.figure().clf()
    plt.figure()
    
    plt.plot(xf, 2.0/N * np.abs(yf[0:N/2]))
    plt.grid()
    plt.show()

def play1():
       
    rf1 = wave.open("audio1.wav", 'rb')
   # fs, rf1 = wavfile.read("audio1.wav")
    prof1 = rf1.getsampwidth()
    channels1 = rf1.getnchannels()
    rate1 = rf1.getframerate()
    audioN1 = pyaudio.PyAudio()
    stream2  = audioN1.open(format=audioN1.get_format_from_width(prof1), channels=channels1, rate=rate1, output=True)
    datos1 = rf1.readframes(1024)
    #rate1, data1 = wavfile.read(root.filename)
    
    while datos1 != '':
        stream2.write(datos1)
        datos1 = rf1.readframes(1024)

    rf1.close()
    

def play2():
    rf = wave.open('filtro.wav', 'rb')
    
    prof = rf.getsampwidth()
    channels = rf.getnchannels()
    rate = rf.getframerate()
    audioN = pyaudio.PyAudio()
    stream1  = audioN.open(format=audioN.get_format_from_width(prof), channels=channels, rate=rate, output=True)
    datos = rf.readframes(1024)
    
    
    while datos != '':
        stream1.write(datos)
        datos = rf.readframes(1024)
    
    rf.close()

def aplicar():
    global b, a, data, fs, filtrado
    filtrado=signal.lfilter(b, a, data)
    wavfile.write('filtro.wav', fs, filtrado)
    plt.figure(4).clf()
    plt.figure(4)
    plt.plot(filtrado)
    plt.savefig("filtrado.png")
    N = len(filtrado)
    T = 1.0 / fs
    x = np.linspace(0.0, N*T, N)
    yf = fft(filtrado)
    xf = np.linspace(0.0, 1.0/(2.0*T), N/2)
    plt.figure(4).clf()
    plt.figure(4)
    plt.plot(xf, 2.0/N * np.abs(yf[0:N/2]))
    plt.savefig("filtradoFFT.png")
    
    pintar_imagen()

    
       
def eventos(): 
    global b, a
    nyq = fs * 0.5
    s=selec.get()
    s1=selec1.get()
    if s==1 and s1==1:
        print ("Pasa Altos Butterworth")
        cutoff= highcut
        stopfreq = float(cutoff)
        cornerfreq = 0.4 * stopfreq # (?)
        ws = cornerfreq/nyq
        wp = stopfreq/nyq
        N1, wn =signal.buttord(wp, ws, orden, 40) # (?)
        b, a = signal.butter(N1, wn, btype='high')
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()
        
    elif s==1 and s1==2:
        print("Pasa Altos Chevichev I")
        cutoff= highcut
        rp=(riso*0.1)
        stopfreq = float(cutoff)
        cornerfreq = 0.4 * stopfreq # (?)
        ws = cornerfreq/nyq
        wp = stopfreq/nyq
        N1, wn =signal.buttord(wp, ws, orden, 40) # (?)
        b, a = signal.cheby1(N1, rp, wn, btype='highpass') #N es el numero de orden, rp=el rizo maximo permitido, Wn= frecuencias de corte y stop
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()

    elif s==1 and s1==3:
        print("Pasa Altos Chevichev II")
        cutoff= highcut
        rp=riso*5
        stopfreq = float(cutoff)
        cornerfreq = 0.4 * stopfreq # (?)
        ws = cornerfreq/nyq
        wp = stopfreq/nyq
        N1, wn =signal.buttord(wp, ws, orden, 40) # (?)
        b, a = signal.cheby2(N1, rp, wn, btype='highpass') #N es el numero de orden, rp=el rizo maximo permitido, Wn= frecuencias de corte y stop
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()
        
    elif s==1 and s1==4:
        print("Pasa Altos Eliptico")
        cutoff= highcut
        rp=riso*0.1
        rse=rs*5
        stopfreq = float(cutoff)
        cornerfreq = 0.4 * stopfreq # (?)
        ws = cornerfreq/nyq
        wp = stopfreq/nyq
        N1, wn =signal.buttord(wp, ws, orden, 40) # (?)
        b, a = signal.ellip(N1, rp, rse, wn, btype='highpass') #N es el numero de orden, rp=el rizo maximo permitido, Wn= frecuencias de corte y stop
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()
        
    if s==2 and s1==1:
        print (" Pasa bajo Butterworth")
        cutoff= lowcut
        stopfreq = float(cutoff)
        cornerfreq = 0.7 * stopfreq # (?)
        ws = cornerfreq/nyq
        wp = stopfreq/nyq
        N1, wn =signal.buttord(wp, ws, orden, 40) # (?)
        b, a = signal.butter(N1, wn, btype='lowpass')
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()
        
    elif s==2 and s1==2:
        print(" Pasa bajo Chevichev I")
        cutoff= lowcut
        rp=(riso*0.1)
        stopfreq = float(cutoff)
        cornerfreq = 0.7 * stopfreq # (?)
        ws = cornerfreq/nyq
        wp = stopfreq/nyq
        N1, wn =signal.buttord(ws, wp, orden, 40) # (?)
        b, a = signal.cheby1(N1, rp, wn, btype='lowpass') #N es el numero de orden, rp=el rizo maximo permitido, Wn= frecuencias de corte y stop
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()

    elif s==2 and s1==3:
        print("Pasa bajo Chevichev II")
        cutoff= lowcut
        rp=(riso*5)
        stopfreq = float(cutoff)
        cornerfreq = 0.7 * stopfreq # (?)
        ws = cornerfreq/nyq
        wp = stopfreq/nyq
        N1, wn =signal.buttord(ws, wp, orden, 40) # (?)
        b, a = signal.cheby2(N1, rp, wn, btype='lowpass') #N es el numero de orden, rp=el rizo maximo permitido, Wn= frecuencias de corte y stop
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()
        
    elif s==2 and s1==4:
        print("Pasa bajo Eliptico")
        cutoff= lowcut
        rp=(riso*0.1)
        rse=rs*5
        stopfreq = float(cutoff)
        cornerfreq = 0.7 * stopfreq # (?)
        ws = cornerfreq/nyq
        wp = stopfreq/nyq
        N1, wn =signal.buttord(ws, wp, orden, 40) # (?)
        b, a = signal.ellip(N1, rp, rse, wn, btype='lowpass') #N es el numero de orden, rp=el rizo maximo permitido, Wn= frecuencias de corte y stop
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()
           
    
        
    if s==3 and s1==1:
        print (" Pasa Banda Butterworth")
        low = lowcut / nyq
        high = highcut / nyq
        b, a = signal.butter(orden, [low, high], btype='band')
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()
        
    elif s==3 and s1==2:
        print(" Pasa Banda Chevichev I")
        low = lowcut / nyq
        high = highcut / nyq
        rp=(riso*0.1)
        N1= orden
        b, a = signal.cheby1(N1, rp, [low, high], btype='bandpass') #N es el numero de orden, rp=el rizo maximo permitido, Wn= frecuencias de corte y stop
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()
        
    elif s==3 and s1==3:
        print("Pasa Banda Chevichev II")
        low = lowcut / nyq
        high = highcut / nyq
        rp=(riso*5)
        N1= orden
        b, a = signal.cheby2(N1, rp, [low, high], btype='bandpass') #N es el numero de orden, rp=el rizo maximo permitido, Wn= frecuencias de corte y stop
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()
        
    elif s==3 and s1==4:
        print("Pasa Banda Eliptico")
        low = lowcut / nyq
        high = highcut / nyq
        rp=(riso*0.1)
        rse=rs*5
        N1= orden
        b, a = signal.ellip(N1, rp, rse, [low, high], btype='bandpass') #N es el numero de orden, rp=el rizo maximo permitido, Wn= frecuencias de corte y stop
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()
        
        
        
    if s==4 and s1==1:
        print (" Rechazabanda Butterworth")
        low = lowcut / nyq
        high = highcut / nyq
        b, a = signal.butter(orden, [low, high], btype='bandstop')
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()
        
    elif s==4 and s1==2:
        print(" Rechazabanda Chevichev I")
        low = lowcut / nyq
        high = highcut / nyq
        rp=(riso*0.1)
        N1= orden
        b, a = signal.cheby1(N1, rp, [low, high], btype='bandstop') #N es el numero de orden, rp=el rizo maximo permitido, Wn= frecuencias de corte y stop
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()
        
    elif s==4 and s1==3:
        print("Rechazabanda Chevichev II")
        low = lowcut / nyq
        high = highcut / nyq
        rp=(riso*5)
        N1= orden
        b, a = signal.cheby2(N1, rp, [low, high], btype='bandstop') #N es el numero de orden, rp=el rizo maximo permitido, Wn= frecuencias de corte y stop
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()        
  
    elif s==4 and s1==4:
        print("Rechazabanda Eliptico")
        low = lowcut / nyq
        high = highcut / nyq
        rp=(riso*0.1)
        rse=rs*5
        N1= orden
        b, a = signal.ellip(N1, rp, rse, [low, high], btype='bandstop') #N es el numero de orden, rp=el rizo maximo permitido, Wn= frecuencias de corte y stop
        w,h = signal.freqz(b,a)
        plt.figure(3).clf()
        plt.figure(3)
        plt.plot(w, abs(h))
        plt.grid()
        plt.savefig("imagenbode.png")
        pintar_imagen()
     

        
         
def LC(event):    
    global lowcut, highcut, orden, fs, riso, rs
    lowcut= Throttle.get()
    print(lowcut)
    eventos()
        
        
def HC(event):    
    global lowcut, highcut, orden, fs, riso, rs
    highcut= Throttle1.get()
    print(highcut)
    eventos()

   

def Ord(event): 
    global lowcut, highcut, orden, fs, riso, rs
    orden= Throttle2.get()
    print(orden)
    eventos()




def Riso(event): 
    global lowcut, highcut, orden, fs, riso, rs
    riso= Throttle3.get()
    print(riso)
    eventos()

    
def rs(event): 
    global lowcut, highcut, orden, fs, riso, rs
    nyq = fs * 0.5
    rs= Throttle4.get()
    print(rs)
    eventos()
    

Throttle = Scale(ventana,label="LowCut",orient=VERTICAL,length=350, width=25,from_=1,to=8000,tickinterval=1, command=LC,bg='#f0f0ff')
Throttle.set(0)
Throttle.pack()
Throttle.place(x=20,y=320)

Throttle1 = Scale(ventana,label="Highcut",orient=VERTICAL,length=350, width=25,from_=1,to=8000,tickinterval=1, command=HC,bg='#f0f0ff')
Throttle1.set(0)
Throttle1.pack()
Throttle1.place(x=160,y=320)
  

Throttle2 = Scale(ventana,label="Orden",orient=VERTICAL,length=350, width=25,from_=1,to=20,tickinterval=1, command=Ord,bg='#f0f0ff')
Throttle2.set(0)
Throttle2.pack()
Throttle2.place(x=310,y=320)     



Throttle3 = Scale(ventana,label="Riso",orient=VERTICAL,length=350, width=25,from_=0,to=10,tickinterval=1, command=Riso,bg='#f0f0ff')
Throttle3.set(0)
Throttle3.pack()
Throttle3.place(x=450,y=320)  


Throttle4 = Scale(ventana,label="Rs-Ell",orient=VERTICAL,length=350, width=25,from_=0,to=10,tickinterval=1, command=rs,bg='#f0f0ff')
Throttle4.set(0)
Throttle4.pack()
Throttle4.place(x=1000,y=320) 
#sldbarra=Scale(ventana,label="Lowcut",orient=VERTICAL,length=350,width=20,from_=0,to=8000,tickinterval=10,variable=valor0,bg='#f0f0ff').place(x=10,y=130)




selec=IntVar()

rd1=Radiobutton(ventana,text="Pasa Alto",
                     value=1,variable=selec,bg='#f0f0ff').place(x=10,y=10)
rd2=Radiobutton(ventana,text="Pasa Bajo",
                     value=2,variable=selec,bg='#f0f0ff').place(x=10,y=25)
rd3=Radiobutton(ventana,text="Pasa Banda",
                     value=3,variable=selec,bg='#f0f0ff').place(x=10,y=40)
rd4=Radiobutton(ventana,text="Rechaza Banda",
                     value=4,variable=selec,bg='#f0f0ff').place(x=10,y=55)

selec1=IntVar()
rd5=Radiobutton(ventana,text="Butterworth",value=1,variable=selec1,bg='#f0f0ff').place(x=150,y=10)
rd6=Radiobutton(ventana,text="Chebyshev I",value=2,variable=selec1,bg='#f0f0ff').place(x=150,y=25)
rd7=Radiobutton(ventana,text="Chebyshev II",value=3,variable=selec1,bg='#f0f0ff').place(x=150,y=40)
rd8=Radiobutton(ventana,text="Eliptico",value=4,variable=selec1,bg='#f0f0ff').place(x=150,y=55)


btnplay1=Button(ventana,text="Play1",command=play1,height=1,activebackground=('green'),width=4,font=("Agency FB",12)).place(x=1000,y=1)
btnapply=Button(ventana,text="Aplicar",command=aplicar,height=1,activebackground=('green'),width=5,font=("Agency FB",12)).place(x=1000,y=35)

btnp2=Button(ventana,text="play2",command=play2,height=1,activebackground=('green'),width=4,font=("Agency FB",12)).place(x=1000,y=70)

barramenu=Menu(ventana)

#paso 2 crear los menus

mnuarchivo=Menu(barramenu)

mnugrafi=Menu(barramenu)

mnutiempo=Menu(mnugrafi)
mnufrec=Menu(mnugrafi)

#paso 3 crear los comandos de los menus

mnuarchivo.add_command(label="Grabar",command=periodo)

mnuarchivo.add_separator()
mnuarchivo.add_command(label="Salir",command=ventana.destroy)

#####


mnutiempo.add_command(label="1",command=t1)




#paso 4 agergar los menus a la barra de menus
barramenu.add_cascade(label="Archivo",menu=mnuarchivo)

barramenu.add_cascade(label="Graficas",menu=mnugrafi)

mnugrafi.add_cascade(label="Tiempo",menu=mnutiempo)

ventana.config(menu=barramenu, bg='#f0f0ff')



ventana.mainloop()
