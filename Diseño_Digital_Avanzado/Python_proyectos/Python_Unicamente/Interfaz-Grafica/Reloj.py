#Asignar una función a los botones
import sys
from Tkinter import*
import time

def Tick():
    Salida_Label=time.strftime("%H:%M:%S")
    etiqueta.config(text=Salida_Label)
    #Tiempo de Actualizacion en Milisegundos
    Tiempo_Actualizacion=1000        
    app.after(Tiempo_Actualizacion,Tick)
   
#Crear Interfaz
app=Tk()
app.title("Reloj")
vp=Frame(app)
vp.grid(column=10, row=20)
vp.columnconfigure(0,weight=1)
vp.rowconfigure(0,weight=1)

#Parametrizar Interfaz
Salida_Label="Hora"
etiqueta=Label(vp, text=Salida_Label)
etiqueta.grid(column=1, row=3)
Tick()
app.mainloop()
