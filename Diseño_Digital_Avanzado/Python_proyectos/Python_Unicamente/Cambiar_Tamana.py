#Asignar una función a los botones
import sys
from Tkinter import*

app=Tk()
#Tamano en pixeles
app.geometry("400x800")
app.title("Función en Python")

#Configurar la ventana principal
vp=Frame(app,background="yellow")
vp.grid(column=10, row=20)
vp.columnconfigure(0,weight=1)
vp.rowconfigure(0,weight=1)

#Establecer Valores por defecto
#Declarar etiqueta
#Con el comando Foreground cambian el color de la letra
Salida_Label="Ingrese dato"
etiqueta=Label(vp, text=Salida_Label, foreground="blue")
etiqueta.grid(column=1, row=1)
#Declarar Botón
#Con width y heigh cambian el ancho y alto de algo
boton=Button(vp, text="Pulse Aqui",width=2,heigh=3)
#Fija ubicación
boton.grid(column=3,row=2)
#Declarar Caja de Texto
#Con background cambian su color (debe estar su nombre en ingles)
Salida=" "
Nombre_de_la_Caja=Entry(vp, textvariable=Salida,background="red")
Nombre_de_la_Caja.grid(column=4,row=1)
#Bucle infinito de la aplicación
app.mainloop()
