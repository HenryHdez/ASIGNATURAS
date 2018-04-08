#Asignar una función a los botones
import sys
from Tkinter import*

#Para Interacturar con las entradas y salidas
#Se requiere de la libreria mostrada
#Librería para controlar GPIO
import RPi.GPIO as GPIO
#importar libreria de control de tiempo
import time
#Sirve para uar los pines de la placa y no del procesador
GPIO.setmode(GPIO.BCM)
#Apagar Warning
GPIO.setwarnings(False)

#Declarar pines a usar
led = 21
btn = 16

#Configurar el pin 21 (led) como salida
GPIO.setup(led, GPIO.OUT)
#Configurar el pin 16 como entrada Activa con 1
GPIO.setup(btn, GPIO.IN, GPIO.PUD_UP)

#Crear la clase Aplicación para integrarla con el timer
Tiempo_Actual=' '
def Tick():
    global Tiempo_Actual
    Tiempo=time.strftime("%H:%M:%S")
    if(Tiempo_Actual!=Tiempo):
        Tiempo_Actual=Tiempo
        #Leer entrada
        if GPIO.input(btn) == False:
            etiqueta.config(text="Activa")
        else:
            etiqueta.config(text="Inactiva")
    #Tiempo de Actualizacion en Milisegundos
    Tiempo_Actualizacion=1000        
    app.after(Tiempo_Actualizacion,Tick)

#Definir Funciones
def Encender():
    #Escribir la salida (Encender)
    GPIO.output(led,1)
def Apagar():
    #Escribir la salida (Apagar)
    GPIO.output(led,0)
    
#Crear Interfaz
app=Tk()
app.title("Encender un LED")
vp=Frame(app)
vp.grid(column=10, row=20)
vp.columnconfigure(0,weight=1)
vp.rowconfigure(0,weight=1)

#Parametrizar Interfaz
Salida_Label="Inactiva"
etiqueta=Label(vp, text=Salida_Label)
etiqueta.grid(column=1, row=3)
boton=Button(vp, text="Encender",background="green", command=Encender)
boton.grid(column=1,row=2)
boton=Button(vp, text="Apagar", background="red", command=Apagar)
boton.grid(column=1,row=1)
Tick()
app.mainloop()
