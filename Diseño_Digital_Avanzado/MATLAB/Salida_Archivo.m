clc,clear all
n=0:1:40;
y=abs(sin(120*pi*(n/2000)));
y=y/max(y);
y=round(y*255);
plot(n,y,'--','linewidth',2);
hold on
stem(n,y,'linewidth',4);
grid on
title('Señal de 120 Hz Discretizada a 2000Hz');
ylabel('x[n]');
xlabel('n');
dlmwrite('Salida.txt',y)
