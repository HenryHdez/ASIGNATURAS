#Listas
#Las listas son un caso particular de anidación
Nombre=["Ana","Michael","Pepito"]
#Se pueden publicar de la siguiente forma:
print(Nombre)
#o usando un arreglo
for i in range(0,len(Nombre)):
    print(Nombre[i])
#Sin embargo, las matrices son un caso particular
#de lista y se pueden formar de la siguiente
#forma
matriz=[]
Numero_Filas=5
Numero_Columnas=10
for i in range(Numero_Filas):
    matriz.append([])
    for j in range(Numero_Columnas):
        matriz[i].append("Dato")
print(matriz)
