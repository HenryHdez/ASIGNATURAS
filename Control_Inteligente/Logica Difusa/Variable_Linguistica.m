%Sencacion de Calor
x=0:0.1:60;
Frio=sigmf(x,[-1 15]);
Ambiente=gaussmf(x,[2,25]);
Caliente=sigmf(x,[60 30]);
plot(x,Frio,'linewidth',4);hold on;plot(x,Ambiente,'linewidth',4);plot(x,Caliente,'linewidth',4);
legend('Frio','Ambiente','Caliente')