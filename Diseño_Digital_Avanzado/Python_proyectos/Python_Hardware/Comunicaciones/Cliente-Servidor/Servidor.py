#Importar Libreria Socket
import socket
import sys
from Tkinter import *

#Parámetros para conectar dos dispositivos
def conectar():
    global Mensaje
    #Definir el socket
    Socket_Servidor=socket.socket()
    #Puerto
    Socket_Servidor.bind(("localhost",5868))
    #Numero de Clientes que puede dejar conectar
    Socket_Servidor.listen(1)
    #Ip y puerto del cliente
    ip_Cliente="192.168.0.6"
    Puerto_Cliente="5868"
    Socket_Cliente,(ip_Cliente,Puerto_Cliente)=Socket_Servidor.accept()
    Mensaje=Socket_Cliente.recv(4096).decode('utf-8')
    #Cerrar Puertos
    Socket_Servidor.close()
    Socket_Cliente.close()

def recibir():
    #Función para mostrar la información que llega
    global Mensaje
    conectar()
    etiqueta.config(text=str(Mensaje))
    Tiempo_Actualizacion=100       
    if(Mensaje!="N"):
        Aplicacion.after(Tiempo_Actualizacion,recibir)
    else:
        Aplicacion.destroy()
    
#Crear Aplicación
Aplicacion=Tk()
Aplicacion.title("Aplicación Servidor")
Mensaje="Esperando Conexión"
etiqueta=Label(Aplicacion,text=Mensaje)
etiqueta.pack()
recibir()
Aplicacion.mainloop()
