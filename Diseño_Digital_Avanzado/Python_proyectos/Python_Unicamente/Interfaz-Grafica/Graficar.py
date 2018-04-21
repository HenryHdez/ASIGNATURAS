#Imprimir una gráfica usando python
#Librerias de Gráficos
import sys
from Tkinter import *
#Librerias de graficas de tendencia
import matplotlib.pyplot as plt
import numpy as np
#Función Imprimir
def click():
    lista=[1,2,3,4,5]
    plt.plot(lista)
    #Labels
    plt.xlabel("Eje X")
    plt.ylabel("Eje Y")
    #Activar Grilla
    plt.grid(True)
    #Titulo
    plt.title("Primer Grafico")
    plt.show()
    
#Crear Interface
app=Tk()
app.geometry("600x600")
app.title("Función en Python")
vp=Frame(app)
vp.grid(column=10, row=20)
vp.columnconfigure(0,weight=1)
vp.rowconfigure(0,weight=1)

#Crear Botón
boton=Button(vp, text="Pulse Aqui",command=click)
boton.grid(column=3,row=2)
app.mainloop()

