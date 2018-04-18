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

#Definir lienzo vacío binario
imagen = Image.new('1', (LCD.LCDWIDTH, LCD.LCDHEIGHT))

#Cargar Fuente por defecto
fuente = ImageFont.load_default()

#Cargar Lienzo a la RAM para dibujar
dibujo = ImageDraw.Draw(imagen)
#Dibujar en la imagen de la RAM
#Dibujar Base
dibujo.rectangle((0,0,83,47), outline=255, fill=255)
x=0
y=0
#Multiples lineas
for i in range(10):
    x=x+1
    y=y+1
    dibujo.rectangle((0,0,83,47), outline=255, fill=255)
    dibujo.text((x,y), "digitales", font=fuente, fill=0)
    disp.image(imagen)
    disp.display()
    time.sleep(0.5)
    





