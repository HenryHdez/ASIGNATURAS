%%%Graficar Funciones
clc
clear all
%%Crear un vector de tiempo
x=-2:0.01:2;
%%%Reemplazar en la función
f=(1-(abs(x)-1).^(2)).^(1/2);
g=acos(1-abs(x))-(pi);
%%Imprime en coordenadas rectangulares
figure %%Permite crear una nueva Grafica
plot(x,f,'*r',x,g,'r')
%%Rotular Ejes y titulo
xlabel('Equis')
ylabel('Ye')
title('titulos')
%%Crear una nueva función
theta = 0:0.01:2*pi;
rho = 1 - sin(theta)
figure %%Permite crear una nueva Grafica
polar(theta,rho,'--r') 