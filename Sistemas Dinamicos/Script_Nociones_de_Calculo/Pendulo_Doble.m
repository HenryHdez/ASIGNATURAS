clc
clear all
syms x1(l1,teta1) y1(l1,teta1) x2(l2,teta2) y2(l2,teta2);
x1(l1,teta1)=l1*sin(teta1);
y1(l1,teta1)=-l1*cos(teta1);
x2(l2,teta2)=+(l2*sin(teta2));
y2(l2,teta2)=-(l2*cos(teta2));
%%Asignando Valores a teta1 y teta2
L1=1;
L2=1.5;
t1=random('Normal',0,1,100,1)*pi;
t2=random('Normal',0,1,100,1)*pi;
%%Implimiendo el valor
conta=1;
while(conta<100)
    X1=x1(L1,t1(conta));
    Y1=y1(L1,t1(conta));
    X2=X1+x2(L2,t2(conta));
    Y2=Y1+y2(L2,t2(conta));   
    plot([0 X1 X2],[0 Y1 Y2],'r');
    axis([-2 2 -2 2]);
    pause(0.1); %Tiempo de receso entre frames
    drawnow(); %Permite Dibujar la grafica apenas se ejecute
    conta=conta+1;
end