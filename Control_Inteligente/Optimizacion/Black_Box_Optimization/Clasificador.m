%%%Programa para solucionar el problema de selección de vinos%%%
clc,clear all
%Contiene la informacion del archivo glass.data, para optimizarce en MATLAB
load('Variables.mat')
%Definición de la red neuronal, la idea es que ella se convierta en el
%fitness
Capas_Ocultas=20;
Variable=size(MA);
Variable=Variable(2);
net = perceptron;
net = configure(net,MA',y');
%Objetivo a optimizar 
%Cantidad de Individuos
pop=160;                                               
for i=1:1:pop
    pesos(i)=num2cell(random('unif',-1,1,size(net.iw{1,1})),[1 2]);
end
%Parámetros del algoritmo genético
fit=Eval_fitness(pesos,pop,net,MA',y);
pc=0.01;
pm=0.2;
%Se agrego un coeficiente de amortiguamiento, basado en ley de potencias.
stop=50;
Amor=20;
Eval=1;
%Bucle para evolucionar los pesos.
for i=1:stop
    %%Seleción
    Seleccion=Ruleta(Expectativa(fit,1),pop);
    %%Recombinaciones
    if(rand<pc)
        index=ceil(rand*(length(Seleccion)));
        aux=cell2mat(pesos(Seleccion(index)));
        new_ind=fliplr(aux);
        pesos(Seleccion(index))=num2cell(new_ind,[1 2]);
    end
    for j=1:length(Seleccion)
        Hijos(j)=pesos(Seleccion(j));
    end
    %%Mutación
    if(rand<pm)
        for j=1:length(Seleccion)
            aux=cell2mat(Hijos(j));
            aux=aux-(Amor*random('Normal',0,1,1,1));
            Hijos(j)=num2cell(aux,[1 2]);
        end
    end
    %Reemplazo generacional
    fit=Eval_fitness(pesos,pop,net,MA',y);
    fit2=Eval_fitness(Hijos,pop,net,MA',y);
    for j=1:length(Seleccion)
        if fit2(j)>fit(j)
            pesos(j)=Hijos(j);
        end
    end       
    %Coeficiente de Amortiguamiento para controlar las mutaciones
    Amor=exp(-1/Eval);
    if(Eval>20),Eval=2;end;
    %Almacenamiento de las caracteristicas para imprimirlas luego
    mejor(i)=max(fit);
    peor(i)=min(fit);
    media(i)=mean(fit);
    mediana(i)=median(fit);
    Eval=Eval+1;
end
plot(media,'y');
hold on
plot(mejor,'b');
plot(peor,'g');
plot(mediana,'r');
legend('Amarillo=media','Azul=Mejor','Verde=Peor','Rojo=Mediana');
hold off;
