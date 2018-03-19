%Los comentarios en el codigo de Matlab se ingresan anteponiendo el signo
%porcentaje
%%Para Limpiar el comand Window use clc
clc
%%Para borrar el Workspace use Clear all
clear all
%%Las Variables en Matlab No tienen Tipo
entera=4;
decimal=0.1;
Palabra='Hola';
Caracter='v';
Vector_Fila=[0 1 2 3];
Vector_Columna=[4;5;6;7];
Matriz=[2 3.4 5 6;3 4 5 6];
%Cuando Se pone ; al final de la instrucción MATLAB NO muestra resultados
%en workspace
%%Operaciones Básicas en MATLAB
%%Suma
Resultado=entera+decimal;
%%Resta
Resultado=entera-decimal;
%%Multiplicacion
Resultado=entera*decimal;
%%Division
Resultado=entera/decimal;
%%Para mostrar en el comand Window use el comando disp
disp(Resultado)
%%Operaciones entre Matrices
%%Definimos Dos Matrices
A=[2 1;3 2]
B=[1 4;-1 5]
%%Suma
C=A+B
%%Resta
C=A-B
%%Multiplicación Matrices
C=A*B
%%División (Caso particular de multiplicacion de matrices)
C=A/B
%%Multiplicacion Componente a Componente
C=A.*B
%%Division componente a componente
C=A./B
%%Tamaño de un arreglo 
size(C)
%%Generar Matriz identidad
D=eye(3)
%%Generar Arreglo de unos
D=ones(2,3)
%%Generar Arreglo de Ceros
D=zeros(2,3)
%%Resolver un sistema de ecuaciones lineales usando Gauss Jordan
A=[2 3 4 3;4 5 6 3; 9 3 0 2];
D=rref(A)