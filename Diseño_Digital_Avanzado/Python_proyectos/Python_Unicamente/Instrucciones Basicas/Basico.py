"""Con esta funcion pueden borrar el shell de python"""
import subprocess as sp
sp.call('clear',shell=True)
"""Esto es un Comentario"""
"""Tipos de Variables en Python"""
Entera=1
Decimal=2.3
Caracter='a'
Cadena_Numeros=[1,2,3,4,5]
Cadena_Caracteres="Hola Mundo"
print(Entera)
print(Decimal)
print(Cadena_Caracteres)



"""Cadenas de Caracteres Anidadas"""
""" Los datos diferentes al String y caracter deben convertirse"""
""" Usando str"""
Anidar=Cadena_Caracteres +"="+str(Entera)+" "+str(Decimal)
Anidar=Anidar+Caracter
print(Anidar)


"""Operaciones Matematicas"""
Suma=2+3.4444
Resta=4-5
Multiplicacion=Suma*Resta
Division=Suma/Resta
print(Multiplicacion)
"""Cociente de una división siempre será entero"""
Cociente=Suma//Division
print(Cociente)
"""Residuo"""
Residuo=Cociente%2
print(Residuo)
"""Otras Operaciones"""
"""Potencia"""
print(pow(2,3))
"""Redondear"""
print(round(2.55))
"""valor absoluto"""
print(abs(-2.55))
"""Maximo"""
print(max([1,2,3]))
"""Minimo"""
print(min([1,2,3]))
"""Tambien Opera Números Complejos"""
a=1+4j
b=3+5j
c=a*b
print(c)
