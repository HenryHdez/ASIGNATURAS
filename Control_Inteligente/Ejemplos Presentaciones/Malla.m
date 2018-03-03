%Generar Valores de X
X = 0:0.1:100;
%Generar Valores de Y
Y = X.^3;
%Generar Valores de Z
Z = exp(X).*cos(Y);
%Dibujar
plot3(X,Y,Z,'r','linewidth',3);
grid on
hold on
%Generar Inidividuo
X = 10;
Y = X.^3;
Z = exp(X).*cos(Y);
plot3(X,Y,Z,'ok','linewidth',3);

