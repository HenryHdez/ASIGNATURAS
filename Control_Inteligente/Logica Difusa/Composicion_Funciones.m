clc,clear all, close all
%Defina el Universo
x=0:0.01:1;
y=0:0.01:5;
%Defina la salida 1
corte_inf=15;
corte_sup=0.5;
A=sigmf(x,[corte_inf, corte_sup]);
figure, plot(x,A), legend('Conjunto A')
%Defina la salida 2
corte_inf=-3;
corte_sup=2.5;
B=sigmf(y,[corte_inf, corte_sup]);
figure, plot(y,B), legend('Conjunto B')
%Realice en producto cartesiano
for i=1:length(A)
    for j=1:length(B)
        R(i,j)=min(A(i),B(j));
    end
end
%Definir malla con los intervalos
[X,Y]=meshgrid(x,y);
%Imprimir Malla
figure, mesh(X,Y,R')
%Para hallar la composicion se realiza
Ap=gaussmf(x,[0.04 0.3]);
for j=1:length(B)
    for i=1:length(A)
        Salida(i)=min(Ap(i),R(i,j));
    end
    Bp(j)=max(Salida);
end
figure, plot(x,Ap),legend('A negado');
figure, plot(y,Bp),legend('B negado');

