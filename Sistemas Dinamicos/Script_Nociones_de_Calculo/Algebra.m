clc; %Limpiar Pantalla
clear all; %Eliminar Variables del WorkSpace
syms a b c; %Definir variable Simbolica
syms f(t) s(x,y) M(j,i); %Definir funciones de cuantos nesecite argumentos
%Ejemplos de Aplicaci�n
%%Definir la formula
f(t) = t^2;
%%Evaluando la Funci�n
disp(f(5));
%%Ahora con mas de una variable
s(x,y)=x+y;
%%Evaluando la funci�n
disp(s(2,3));
%%Las funciones pueden ser expresadas en arreglos matriciales o vectoriales
M(j,i)=[i,j^2;j*i,i+j];
%%Mostrar Matriz
disp(M(3,2))
%%Otra forma de evaluar la funci�n
S = (a^2-a*b-a*c+b^2-b*c+c^2)^(1/2);
%%Una forma de simplificar un polinomio
S=simplify(S);
disp(S)
%%Una forma de mostrar la ecuaci�n de una manera agradable
pretty(1/S);
%%Ahora una forma de solucionar polinomios usando el comando solve
syms q
f=q^2-q+6;
solve(f) %%Solve obtiene las raices del polinomio 
%%Para realizar una integral Indefinida se usa la siguiente estructura
syms f(x);
f(x)=x^2;
rta=int(f,x);
pretty(rta)
%%Para una funci�n de mas de una variable
syms f(x,y,z);
f(x)=x^2+y,z^3;
rta=int(f,z);
pretty(rta)
%%Si es una integral doble, triple o la que sea, sugiero ingresarla de la siguiente forma
syms f(x,y,z);
f(x)=x^2+y,z^3;
rta=int(int(f,z),y); %Se resolvera primeramente la integral mas interna y luego la externa
pretty(rta)
%%Si es una integral definida hagalo de la siguiente forma
syms f(x,y,z);
f(x)=x^2+y,z^3;
lo=0;%%Limite inferior
lh=10;%%Limite Superior
rta=int(f,z,lo,lh);
pretty(rta)
%%Los limites de la integral definida tambi�n pueden ser variables
%%simbolicas
syms f(x,y,z) lo lh;
f(x)=x^2+y,z^3;
rta=int(f,z,lo,lh);
pretty(rta)
%%Para derivar una funci�n se sigue la estructura mostrada a continuaci�n
syms f(x);
f(x)=x^2;
rta=diff(f,x);
pretty(rta)
%%Para derivar una funci�n de mas de dos variables 
syms f(x,y,z);
f(x)=x^2+y,z^3;
rta=diff(f,x);%Donde el segundo termino es el cual voy a derivar
pretty(rta)
%%Para derivar con respecto a una coordenada seria
syms f(x,y,z);
f(x)=x^2+y,z^3;
c=0;%%Limite inferior
rta=int(f,z,c);
pretty(rta)