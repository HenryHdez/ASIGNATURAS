clc, clear all
%Ingrese el vector de informaci�n
x=random('unif',0,1,10,5);
%Calcule las medidas poblacionales
medias=mean(x);
desv=std(x);
%El mejor y el peor cambia en el caso
%de maximizaci�n o minimizaci�n
mejor=min(x);
peor=max(x);
%Grafique
errorbar(medias,desv,'r')
hold on
plot(medias,'--','linewidth',3)
plot(peor,'k','linewidth',3)
plot(mejor,'g','linewidth',3)
grid on
title('Presentacion de la informaci�n')
xlabel('Corrida')
ylabel('Valor')
