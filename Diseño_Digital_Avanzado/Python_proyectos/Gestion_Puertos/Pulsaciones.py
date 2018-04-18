#Mi Primer Aplicación
from Tkinter import *

#Parámetros para detectar si una tecla es pulsada
def Tecla(event):
    Texto=event.keysym
    etiqueta.config(text=Texto)

        
#Se Crea la aplicación vacia
Aplicacion=Tk()
#Se definen los elementos a usar
Aplicacion.title("Detección de Tecla")
Texto="Oprima Tecla"
etiqueta=Label(Aplicacion,text="Texto")
boton=Button(Aplicacion,text="OK¡¡")
#Se publica la información
etiqueta.pack()
boton.pack()
Aplicacion.bind('<KeyPress>',Tecla)
#Mainloop mantiene activa la aplicación
Aplicacion.mainloop()
