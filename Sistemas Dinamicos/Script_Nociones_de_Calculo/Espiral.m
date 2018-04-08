%%%Limpiar Variables
clc
clear all
%%%Definir tiempo inicial
t=0:0.1:10000;
%%%Estimar la función
a=1;
b=2;
r=a+b*t;
teta=log(r./a)./log(b);
x=a*b.*teta.*cos(teta);
y=a*b.*teta.*sin(teta);
%%%Imprimir la función
%%%Cambiar formato
f='o-k';
%%%Fijar ejes
axis([-100 100 -90 90])
%Encender la Grilla
grid on
for i=1:30:length(x);
    %Dejar o eliminar rastro
    hold on 
    plot([0,x(i)],[0,y(i)],f);
    %Dibujar Ahora
    drawnow();
    pause(0.01);
end
%%%Titulos
xlabel('X')
ylabel('Y')
title('Grafica')
legend('Espiral')

