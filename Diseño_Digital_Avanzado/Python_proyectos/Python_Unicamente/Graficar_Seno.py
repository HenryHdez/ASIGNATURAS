#Imprimir una gráfica usando python
#Librerias de Gráficos
import sys
from Tkinter import *
#Librerias de graficas de tendencia
import matplotlib.pyplot as plt
import numpy as np
import math
#Función Imprimir
def click():
    #Cerrar el grafico
    plt.close()
    #Crear rango de 0 a 10 con incrementos de 0.1
    x=np.arange(0,10,0.1)
    y1=[]
    y2=[]
    #Crear vector de valore de y
    for i in range(len(x)):
        y1.append(math.sin(x[i]))
        y2.append(math.cos(x[i]))
    plt.plot(x,y1,label='Seno',marker='*',color="black",markersize=15)
    plt.plot(x,y2,label='Coseno',color="blue",markersize=5)
    plt.legend()
    #Labels
    plt.xlabel("Eje X")
    plt.ylabel("Eje Y")
    #Activar Grilla
    plt.grid(True)
    #Titulo
    plt.title("Seno y Coseno")
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
