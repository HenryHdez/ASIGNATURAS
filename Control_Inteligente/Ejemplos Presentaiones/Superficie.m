%Generar matriz de componentes
[X,Y] = meshgrid(-8:0.5:8); 
%Evaluar la Función
R = sqrt(X.^2 + Y.^2) + eps;
Z = sin(R)./R;
%Graficar
surf(X,Y,Z,'FaceColor','red')
grid on
%Generar matriz de componentes
[X1,Y1] = meshgrid(-0.5:0.5:0.5); 
%Evaluar la Función
R1 = sqrt(X1.^2 + Y1.^2) + eps;
Z1 = sin(R1)./R1;
%Graficar
hold on
surf(X1,Y1,Z1,'FaceColor','blue')
