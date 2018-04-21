import math
import time
#Impportar librerias de LCD Celular
import Adafruit_Nokia_LCD as LCD
import Adafruit_GPIO.SPI as SPI
#Librerias para Dibujar o escribir imagenes
from PIL import Image
from PIL import ImageFont
from PIL import ImageDraw

# Asignación de pines
DC = 23
RST = 24
SPI_PORT = 0
SPI_DEVICE = 0

#Configuración del driver y SPI
disp = LCD.PCD8544(DC, RST,
                   spi=SPI.SpiDev(SPI_PORT, SPI_DEVICE, max_speed_hz=4000000))

#Inicializar LCD.
disp.begin(contrast=30)

#Limpiar Display.
disp.clear()
disp.display()

#Leer Imagen
imagen = Image.open('Escudo_UD.png').convert('1')

#Mostrar Imagen
disp.image(imagen)
disp.display()

    





