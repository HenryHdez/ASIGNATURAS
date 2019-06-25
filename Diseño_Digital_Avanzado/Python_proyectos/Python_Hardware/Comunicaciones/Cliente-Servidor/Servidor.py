#Importar Libreria Socket
import socket
import sys
from Tkinter import *

#Parámetros para conectar dos dispositivos
def conectar():
    global Mensaje
    #Cambie la palabra localhost por la ip del dispositivo servidor
    #Tenga en cuenta que deben estar en el mismo segmento de red
    #localhost es cuando se ejecuta en un mismo equipo
    ip_nodo="localhost"
    #Definir el socket
    Socket_Servidor=socket.socket()
    #Puerto
    Socket_Servidor.bind((ip_nodo,5868))
    #Numero de Clientes que puede dejar conectar
    Socket_Servidor.listen(1)
    #El servidor siempre espera a que se conecte un cliente
    #Asi que se quedara atrapado en esta linea de codigo si no
    #detecta conexión alguna
    #Ip y puerto del cliente (El puerto es cualquier número de 4 digitos)
    ip_Cliente="192.168.0.6"
    Puerto_Cliente="5868"
    Socket_Cliente,(ip_Cliente,Puerto_Cliente)=Socket_Servidor.accept()
    #Indicar el numero de bits maximo que puede leer (4096 en este caso).
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