#Nombre de la función y parámetros a usar dentro
#Declarar Variables
a=1

#Funcion con parámetros de entrada
def NombreFuncion(Variable_Entrada):
    #Funcion Particular
    global a
    #Lo que hay que hacer
    a=a*2
    
#Funcion sin parámetros de entrada
def NombreFuncion2():
    #Variable Global
    global a
    #Lo que hay que hacer
    a=a*4

#Llamando a la función sin parámetros de entrada
NombreFuncion2()
print(a)
#Llamando a la función con parámetros de entrada
NombreFuncion(3)
print(a)

