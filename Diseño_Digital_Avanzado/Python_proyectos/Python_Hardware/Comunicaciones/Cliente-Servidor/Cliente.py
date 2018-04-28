#Importar libreria
import socket
import sys
from Tkinter import *

#Función para conectarse al servidor
def enviar():
    #Se debe cambiar la palabra localhost por la ip del servidor
    #Tenga en cuenta que deben estar en el mismo segmento de red
    #localhost es cuando se ejecuta en un mismo equipo
    ip_nodo="localhost"
    #Funciones para buscar servidor disponible
    Socket_Cliente=socket.socket()
    Socket_Cliente.connect((ip_nodo,5868))
    msg="Mensaje a enviar"
    #Cerrar puerto
    Socket_Cliente.sendall(msg.encode('utf-8'))
    Socket_Cliente.close()
#Función para terminar el enlace
def Terminar():
    Socket_Cliente=socket.socket()
    Socket_Cliente.connect(("localhost",5868))
    msg="N"
    Socket_Cliente.sendall(msg.encode('utf-8'))
    Socket_Cliente.close()
    Aplicacion.destroy()
    
#Crear Aplicación
Aplicacion=Tk()
Aplicacion.title("Aplicación Cliente")
boton1=Button(Aplicacion,text="Enviar",command=enviar)
boton2=Button(Aplicacion,text="Salir",command=Terminar)
boton1.pack()
boton2.pack()
Aplicacion.mainloop()

    
