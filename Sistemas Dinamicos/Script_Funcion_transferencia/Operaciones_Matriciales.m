clc, clear all
syms s
k1=0.2;
k2=0.3;
k3=0.5;
k4=0.6;
b1=0.2;
m1=1;
m2=2;
u=1;
%La matriz A hallada a partir de las ecuaciones diferenciales
A=[0 1 0 0;(-(k1+k2+k3)/m1) -(b1/m1) (k2+k3)/m1 0; 0 0 0 1; (k2+k3)/m2 0 (-(k2+k3+k4)/m2) 0];
%Para hallar la función de transferencia hagan u=1
B=[0 1/m1 0 0]'*u;
%Recureden la matriz C es lo que yo "Quiero Observar del sistema" asi que
%solamente pongan en 1 lo que quieren observar del sistema
C=[0 0 1 0];
%La matriz D es la relacion entre la salida y la entrada o cuando se
%acoplan sistemas en lo que estamos analizando normalmente es igual a 0
D=[0]';
%Crea la matriz identidad con la misma cantidad de elementos de A
I=eye(size(A));
%Ahora se construye el termino s*I
I=s*I;
%Luego se suma s*I-A
I=I-A;
%Seguidamente se halla la matriz inversa [s*I-A]^-1
I_inv=inv(I);
%Ahora se realiza la multiplicación del primer término ([s*I-A]^-1)*B
I_1=I_inv*B;
%Por último se realiza el último producto para hallar la función de
%transferencia C*(([s*I-A]^-1)*B)
G=C*I_1;
%Nota Respeten el orden de las operaciones matriciales, si quieren observar
%un resultado quiten el ;
pretty(G)