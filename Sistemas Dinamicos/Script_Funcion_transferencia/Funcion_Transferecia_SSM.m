%%%%%%%Para convertir una función de transferecia a espacio de estados
%%%%%%%realice la siguiente operación
%%%%Valores iniciales
L=2;
R=3;
C=1/5;
%Ingrese los coeficientes como si fueran un vector
num=[1];
den=[L*C R*C 1];
%%La función de transferencia es tf
G=tf(num,den)
%%Ahora para obtener un espacio de estados a partir de los coeficientes de
%%la función de transferencia
[A,B,C,D]=tf2ss(num,den)
%Ahora para obtener la funcion de transferencia en tiempo continuo a partir
%de las matrices de estado realice lo siguiente
k1=0.2;
k2=0.3;
k3=0.5;
k4=0.6;
b1=0.2;
m1=1;
m2=2;
u=1;
%La matriz A hallada a partir de las ecuaciones diferenciales
A=[0 1 0 0;(-(k1+k2+k3)/m1) -(b1/m1) (k2+k3)/m1 0; 0 0 0 1; (k2+k3)/m2 0 (-(k2+k3+k4)/m2) 0]
%Para hallar la función de transferencia hagan u=1
B=[0 1/m1 0 0]'*u
%Recureden la matriz C es lo que yo "Quiero Observar del sistema" asi que
%solamente pongan en 1 lo que quieren observar del sistema
C=[1 0 0 0]
%La matriz D es la relacion entre la salida y la entrada o cuando se
%acoplan sistemas en lo que estamos analizando normalmente es igual a 0
D=[0]'
%Comando para Observar el espacio de estados
F=ss(A,B,C,D)
%Convertir el espacio de estados a funcion de transferencia.
[num,den]=ss2tf(A,B,C,D)