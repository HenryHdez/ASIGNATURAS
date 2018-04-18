from Tkinter import *
import time
import Adafruit_CharLCD as LCD

#Definir los pines del GPIO
RS  = 27  
EN  = 22
D4  = 25
D5  = 24
D6  = 23
D7  = 18
LED = 4

#Parámetros para detectar si una tecla es pulsada
def Tecla(event):
    Texto=event.keysym
    lcd.message(Texto)
    etiqueta.config(text=Texto)

# Definir cantidad de Filas y Columnas
Columnas = 16
Filas    = 2
# Comando para Inicializar la LCD
lcd = LCD.Adafruit_CharLCD(RS,EN,D4,D5,D6,D7,
                           Columnas, Filas, LED)
# Imprimir un Mensaje
lcd.message('Primer Programa')
# Espere 5 Segundos
time.sleep(1.0)
# Limpiar LCD
lcd.clear()        
#Se Crea la aplicación vacia
Aplicacion=Tk()
#Se definen los elementos a usar
Aplicacion.title("Detección de Tecla")
Texto="Oprima Tecla"
etiqueta=Label(Aplicacion,text="Texto")
boton=Button(Aplicacion,text="OK¡¡")
#Se enlazan los elementos en la interfaz
etiqueta.pack()
boton.pack()
Aplicacion.bind('<KeyPress>',Tecla)
#Mainloop mantiene activa la aplicación
Aplicacion.mainloop()
