#Importar e iniciar libreria
import pygame
import time
pygame.init()
pygame.joystick.init()
#Obtener cantidad de Mandos en la RPI
Cantidad_Joystick_RPI=pygame.joystick.get_count()
print("Cantidad de Mandos: "+str(Cantidad_Joystick_RPI))

for i in range(Cantidad_Joystick_RPI):
    #Leer caracteristicas de cada mando disponible
    Mando=pygame.joystick.Joystick(0)
    Mando.init()
    #Obtener nombre del periferico
    Nombre=Mando.get_name()
    print("Nombre Periferico: "+str(Nombre))
    #Leer numero de ejes
    ejes=Mando.get_numaxes()
    print("Cantidad de Ejes: "+str(ejes))
    #Leer numero de botones    
    botones=Mando.get_numbuttons()
    print("Cantidad de Botones: "+str(botones))
    #Leer estado de los botones y ejes
    print ("Para terminar pulse ctrl + c") 
    while (True):
        #Lee el estado del Mando
        pygame.event.pump()
        #Leer Ejes
        for k in range(ejes):
            E=Mando.get_axis(k)
            print("Posición del Eje"+str(k)+": "+str(E))
        #Leer Botones
        for k in range(botones):
            E=Mando.get_button(k)
            print("Estado_Boton "+str(k)+" : "+str(E))
        time.sleep(1.0)
    
