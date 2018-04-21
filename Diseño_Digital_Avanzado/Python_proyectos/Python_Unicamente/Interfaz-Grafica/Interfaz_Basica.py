#Mi Primer Aplicación
from Tkinter import *
#Se Crea la aplicación vacia
Aplicacion=Tk()
#Se definen los elementos a usar
Aplicacion.title("Primer Aplicación")
etiqueta=Label(Aplicacion,text="Saludos...")
boton=Button(Aplicacion,text="OK¡¡")
#Se publica la información
etiqueta.pack()
boton.pack()
#Mainloop mantiene activa la aplicación
Aplicacion.mainloop()
