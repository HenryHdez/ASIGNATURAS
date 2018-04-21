#Importar libreria
import socket
import sys
from Tkinter import *

def Servidor():
    global Mensaje
    #Definir el socket
    Socket_Servidor=socket.socket()
    #Puerto
    Socket_Servidor.bind(("localhost",5868))
    #Numero de Clientes que puede dejar conectar
    Socket_Servidor.listen(1)
    #Ip y puerto del cliente
    ip_Cliente="192.168.0.5"
    Puerto_Cliente="5868"
    Socket_Cliente,(ip_Cliente,Puerto_Cliente)=Socket_Servidor.accept()
    Mensaje=Socket_Cliente.recv(4096).decode('utf-8')
    #Cerrar Puertos
    Socket_Servidor.close()
    Socket_Cliente.close()
    etiqueta.config(text=str(Mensaje))
    Tiempo_Actualizacion=100       
    if(Mensaje=="N"):
        Aplicacion.destroy()
       
#Función para enviar datos
def Cliente():
    #Función para buscar Servidor disponible
    Socket_Cliente=socket.socket()
    Socket_Cliente.connect(("localhost",5868))
    msg="Mensaje a enviar"
    #Cerrar Puerto
    Socket_Cliente.sendall(msg.encode('utf-8'))
    Socket_Cliente.close()

#Funcion para terminar la comunicación
def Terminar():
    Socket_Cliente=socket.socket()
    Socket_Cliente.connect(("localhost",5868))
    msg="N"
    Socket_Cliente.sendall(msg.encode('utf-8'))
    Socket_Cliente.close()
    Aplicacion.destroy()
    
#Crear Aplicación
Aplicacion=Tk()
Aplicacion.title("Aplicación II")
boton1=Button(Aplicacion,text="Servidor",command=Servidor)
boton2=Button(Aplicacion,text="Cliente",command=Cliente)
boton3=Button(Aplicacion,text="Salir",command=Terminar)
Mensaje="Esperando"
etiqueta=Label(Aplicacion,text=Mensaje)
etiqueta.pack()
boton1.pack()
boton2.pack()
boton3.pack()
Aplicacion.mainloop()

    
