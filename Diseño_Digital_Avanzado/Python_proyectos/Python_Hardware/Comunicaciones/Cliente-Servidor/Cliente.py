#Importar libreria
import socket
import sys
from Tkinter import *

def enviar():
    Socket_Cliente=socket.socket()
    Socket_Cliente.connect(("localhost",5868))
    msg="Mensaje a enviar"
    Socket_Cliente.sendall(msg.encode('utf-8'))
    Socket_Cliente.close()

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

    
