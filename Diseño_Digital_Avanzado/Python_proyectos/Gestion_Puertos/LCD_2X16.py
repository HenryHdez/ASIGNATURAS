#Ejemplo Manejo de LCD
#Importar Librerias
import time
import Adafruit_CharLCD as LCD

#Definir los pines del GPIO
RS  = 27  
EN  = 22
D4  = 25
D5  = 24
D6  = 23
D7  = 18
LED = 4

# Definir cantidad de Filas y Columnas
Columnas = 16
Filas    = 2
#Tambien se podría 20X4

# Comando para Inicializar la LCD
lcd = LCD.Adafruit_CharLCD(RS,EN,D4,D5,D6,D7,
                           Columnas, Filas, LED)

# Imprimir un Mensaje
lcd.message('Digitales\nAvanzado')

# Espere 5 Segundos
time.sleep(1.0)

# Limpiar LCD
lcd.clear()

# Espere 5 Segundos
time.sleep(5.0)

#Fijar posición de inicio del cursor
col=5
fil=1
lcd.set_cursor(col,fil)
lcd.message('letrero')

#Encender cursor
lcd.show_cursor(True)
time.sleep(1.0)

#Cursor intermitente
lcd.blink(True)
time.sleep(2.0)

#Desactivar cursor y Blink
lcd.show_cursor(False)
lcd.blink(False)

#Mover letras de derecha a izquierda o viceversa
lcd.clear()
msg = 'Mensaje'
lcd.message(msg)
for i in range(Columnas-len(msg)):
    time.sleep(0.5)
    lcd.move_right()
for i in range(Columnas-len(msg)):
    time.sleep(0.5)
    lcd.move_left()
