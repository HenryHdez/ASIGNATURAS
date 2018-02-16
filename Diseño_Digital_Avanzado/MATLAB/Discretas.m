clc,clear all
figure
subplot(3,1,1)
n=0:1:40;
y=abs(sin(120*pi*(n/20)));
plot(n,y,'--','linewidth',2);
hold on
stem(n,y,'linewidth',4);
grid on
title('Señal de 120 Hz Discretizada a 20Hz');
ylabel('x[n]');
xlabel('n');

subplot(3,1,2)
n=0:1:40;
y=abs(sin(120*pi*(n/500)));
plot(n,y,'--','linewidth',2);
hold on
stem(n,y,'linewidth',4);
grid on
title('Señal de 120 Hz Discretizada a 500Hz');
ylabel('x[n]');
xlabel('n');

subplot(3,1,3)
n=0:1:40;
y=abs(sin(100*pi*(n/2000)));
plot(n,y,'--','linewidth',2);
hold on
stem(n,y,'linewidth',4);
grid on
title('Señal de 120 Hz Discretizada a 2000Hz');
ylabel('x[n]');
xlabel('n');