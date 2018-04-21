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

#Figuras Con punta
#Rectangulo
dibujo.rectangle((20,20,40,40), outline=0, fill=0)

#Linea
dibujo.line((20,20,40,40), 0, 10)

#Figuras Circulares
#Dibujar Arco
#Tamaño-inicio-Fin-Contorno
dibujo.arc((10,10,20,20),0,1000, fill=0)

#Dibujar Arco Relleno
#Tamaño-inicio-Fin-Contorno
dibujo.chord((20,20,30,30),0,200, outline=255, fill=0)

#Dibujar Arco que se cierra en forma de diagrama de pastel
#Tamaño-inicio-Fin-Contorno
dibujo.pieslice((30,30,40,40),0,500, outline=255, fill=0)


#Representar en la LCD
disp.image(imagen)
disp.display()



