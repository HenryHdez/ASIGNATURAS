#Asignar una función a los botones
import RPi.GPIO as GPIO
from Tkinter import*
import time
#Libreria Serial
import serial
puerto=serial.Serial("/dev/ttyAMA0",baudrate=9600,timeout=0.5)
#Ver configuración del puerto
print(puerto)
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)

#Declarar pines a usar
led = 21

#Configurar el pin 21 (led) como salida
GPIO.setup(led, GPIO.OUT)

#Crear la clase Aplicación para integrarla con el timer
Tiempo_Actual=' '
def Tick():
    global puerto
    #Para leer
    Salida_Label=puerto.read()
    #Para enviar
    Texto="Texto"
    puerto.write(Texto)
    etiqueta.config(text=Salida_Label)       
    #Tiempo de Actualizacion en Milisegundos
    Tiempo_Actualizacion=1000        
    app.after(Tiempo_Actualizacion,Tick)

#Definir Funciones
def Encender():
    global puerto
    #Escribir la salida (Encender)
    puerto.write("Encendio")
    GPIO.output(led,1)
def Apagar():
    global puerto
    #Escribir la salida (Apagar)
    puerto.write("Apago")
    GPIO.output(led,0)
    
#Crear Interfaz
app=Tk()
app.title("Encender un LED")
vp=Frame(app)
vp.grid(column=10, row=20)
vp.columnconfigure(0,weight=1)
vp.rowconfigure(0,weight=1)

#Parametrizar Interfaz
Salida_Label="Estado"
etiqueta=Label(vp, text=Salida_Label)
etiqueta.grid(column=1, row=3)
boton=Button(vp, text="Encender",background="green", command=Encender)
boton.grid(column=1,row=2)
boton=Button(vp, text="Apagar", background="red", command=Apagar)
boton.grid(column=1,row=1)
Tick()
app.mainloop()
