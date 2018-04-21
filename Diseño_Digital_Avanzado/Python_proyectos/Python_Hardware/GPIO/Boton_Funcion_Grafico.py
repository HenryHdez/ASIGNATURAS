#Asignar una función a los botones
import sys
from Tkinter import*
#Para Interacturar con las entradas y salidas
#Se requiere de la libreria mostrada
#Librería para controlar GPIO
import RPi.GPIO as GPIO

#Sirve para uar los pines de la placa y no del procesador
GPIO.setmode(GPIO.BCM)
#Apagar Warning
GPIO.setwarnings(False)

#Declarar pines a usar
led = 21

#Configurar el pin 21 (led) como salida
GPIO.setup(led, GPIO.OUT)

#Definir Funciones
def Encender():
    etiqueta.config(text="Encendido")
    #Escribir la salida (Encender)
    GPIO.output(led,1)
def Apagar():
    etiqueta.config(text="Apagado")
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
Salida_Label="Apagado"
etiqueta=Label(vp, text=Salida_Label)
etiqueta.grid(column=1, row=3)
boton=Button(vp, text="Encender",background="green", command=Encender)
boton.grid(column=1,row=2)
boton=Button(vp, text="Apagar", background="red", command=Apagar)
boton.grid(column=1,row=1)
app.mainloop()
