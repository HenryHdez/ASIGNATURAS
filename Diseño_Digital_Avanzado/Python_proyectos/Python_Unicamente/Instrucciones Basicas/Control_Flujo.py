#Estructuras de control de Flujo en python
#Para leer desde el shell se usa esta linea
condicion=input("Digite un numero entero: ")
#Si condicional
if condicion==1:
    print("Se cumple")
else:
    print("No se cumple")
#No es nesesario poner end, sin embargo tenga cuidado
#Con las tabulaciones, ya que indican donde acaba una
#Estructura
#Else if
Selector=input("Digite un numero entero: ")
if (Selector==0):
    print("Selecciono 0")
elif (Selector==1):
    print("Selecciono 1")
elif (Selector==2):
    print("Seleciono 2")
else:
    print("Selecciono otra cosa")
#Switch en python no existe
#Estructura For Incremental
Iteraciones=input("Ingrese cantidad de Iteraciones ")
for i in range(0,Iteraciones):
    print(i)
#Estructura For Decremental
for i in range(-Iteraciones,0):
    print(i)
#Estructura While
contador=0
while contador<Iteraciones:
    print(contador)
    contador+=1
#Para romper algun bucle infinito pueden usar ctrl+c    
#Estructuras de comparación
#x != y     # x no es igual a y
#x > y      # x es mayor que y
#x < y      # x es menor que y
#x >= y     # x es mayor o igual que y
#x <= y     # x es menor o igual que y
#Comparaciones Lógicas
#and or not
a=input("Digite a: ")
b=input("Digite b: ")
if(a==1 and b==2):
    print("Cumple")
    
