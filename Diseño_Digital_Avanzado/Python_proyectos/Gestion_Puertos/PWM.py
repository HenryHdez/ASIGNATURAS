#Asignar una función a los botones
import sys
from Tkinter import*
import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)

#Declarar pines a usar y Frecuencia del PWM
led = 21
Valor_Maximo=100;
Frecuencia=200;
GPIO.setup(led, GPIO.OUT)
#Crear objeto PWM
Intensidad=GPIO.PWM(led,Frecuencia)
Intensidad.start(Valor_Maximo)

Ciclo=50
#Definir Funciones
def Aumentar():
    global Ciclo
    Ciclo=Ciclo+10
    Intensidad.ChangeDutyCycle(Ciclo)
    print(Ciclo)
def Disminuir():
    global Ciclo
    Ciclo=Ciclo-10
    Intensidad.ChangeDutyCycle(Ciclo)
    print(Ciclo)
    
#Crear Interfaz
app=Tk()
app.title("PWM")
vp=Frame(app)
vp.grid(column=10, row=20)
vp.columnconfigure(0,weight=1)
vp.rowconfigure(0,weight=1)

#Parametrizar Interfaz
boton=Button(vp, text="Aumentar",background="green", command=Aumentar)
boton.grid(column=1,row=2)
boton=Button(vp, text="Disminuir", background="red", command=Disminuir)
boton.grid(column=1,row=1)
app.mainloop()
