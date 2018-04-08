clc,clear all
%Defina el intervalo de temperatura 
x1=0:0.1:50;
%Defina el intervalo de sensación de calor
x2=0:0.1:4;
%Defina la salida 1
corte_inf=10;
corte_sup=40;
y1=smf(x1,[corte_inf,corte_sup]);
figure
plot(x1,y1)
%Defina la salida 2
corte_inf=2;
corte_sup=3;
y2=smf(x2,[corte_inf,corte_sup]);
figure
plot(x2,y2)
%Realice en producto cartesiano
for i=1:length(y1)
    for j=1:length(y2)
        MA(i,j)=min(y1(i),y2(j));
    end
end
%Definir malla con los intervalos
[X,Y]=meshgrid(x2,x1);
%Imprimir Malla
mesh(X,Y,MA)