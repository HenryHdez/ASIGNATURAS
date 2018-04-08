clc,clear all
%Matriz de Regresión
Numero_datos = 100;
Numero_Variables = 2;
X = rand(Numero_datos,Numero_Variables);

%Vector de Salida (Ecuación de ejemplo u Objetivo y = 8*x1^2+5*x2^2)
%Se puede cambiar por un vector de valores
Y = 8*X(:,1).^2+5*X(:,2).^2; 
x1=X(:,1);
x2=X(:,1);
Resultado=6.627802.*(((x1).*(x1))+(x2))-1.248726;
figure
grid on
plot(Y)
hold on
plot(Resultado)