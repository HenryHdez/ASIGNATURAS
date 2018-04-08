function Algoritmo
clc
format short e;
global initial_flag;
tic %Inicio de cronometro
warning('off');
%Especificaciones del Problema
func_num = 1;
D=1000;
lb = -100.0;
ub = 100.0;
initial_flag = 0;
%Esta es una variante del algoritmo CMA_ES
for Veces=1:1                                   %Corridas
    Individuos=50;                              %Cantidad de Individuos de la Poblacion
    Minimo=0;                                   %Selector para minimizar o maximizar
    prob_mutacion=0.1;                          %Probabilidad de que mute el cromosoma
    Radio_Mut=0.1;                              %Que tan grande es la mutacion
    prob_cruce=0.6;                             %Probabilidad de que se crucen los cromosomas
    P0=random('unif',lb,ub,D,Individuos);       %Poblacion Inicial   
    conta=1;                                    %Contador de Ciclos
    xmean = rand(D,1);                          %Valor estimado para iniciar la busqueda
    sigma = 0.5;                                %Radio de la desviacion estandar para el avance de la busqueda
    B = eye(D,D);                               %B define el sistema de coordenadas (Matriz identidad D*D para ubicar el espacio de busqueda)
    MD = ones(D,1);                             %MD define la escala del espacio de busqueda
    lambda = 4+floor(3*log(D));                 %Numero de Descendencias
    mu = lambda/2;                              %Puntos de Recombinacion
    weights = log(mu+1/2)-log(1:mu)';           %Matriz de Pesos
    mu = floor(mu);                             %Ayuda a la evolucion de la media del espacio de busqueda
    weights = weights/sum(weights);             %Normaliza la matriz de pesos
    mueff=sum(weights)^2/sum(weights.^2);       %Matriz de Varianza de pesos
    cs = (mueff+2) / (D+mueff+5);               %Constante para el control de la Evolucion de Sigma
    cc = (4 + mueff/D) / (D+4 + 2*mueff/D);     %Tiempo de Control de la contante sigma
    damps = 1 + 2*max(0, sqrt((mueff-1)/(D+1))-1) + cs; %Constante de amortiguacion para sigma
    pc = zeros(D,1); ps = zeros(D,1);           %Control de evolucion sobre sigma
    invsqrtC = B * diag(MD.^-1) * B';
    chiN=D^0.5*(1-1/(4*D)+1/(21*D^2));          %Formula para normalizacion de pesos
    Amor_C=1;
    benchmark_func(P0,func_num);
    for i=1:125000                              %Condicion de Terminacion
         for kw=1:lambda
             P0(:,kw) = xmean + sigma * B * (MD .* randn(D,1));  %Mutacion de la poblacion segun orientada por la media 
             P0=Saturador(P0,lb,ub);                             %Saturador para prevenir salidas del espacio de busqueda
             fitness(kw) = benchmark_func(P0(:,kw),func_num);    %Fitness
             Amor_C=Amor_C+1;
         end
         [fitness, index] = sort(fitness);                       %Lista descendiente para indicar que se va a buscar el minimo
         xold=xmean;                                             %Almacenamiento temporal de la media del espacio de busqueda
         xmean = P0(:,index(1:mu)) * weights;                    %Nueva media segun la poblacion actual
         % Actualizacion de caminos en el espacio de busqueda
         ps = (1-cs) * ps ... 
         + sqrt(cs*(2-cs)*mueff) * invsqrtC * (xmean-xold) / sigma; 
         hsig = sum(ps.^2)/(1-(1-cs)^(2*Amor_C/lambda))/D < 2 + 4/(D+1);
         pc = (1-cc) * pc ...
         + hsig * sqrt(cc*(2-cc)*mueff) * (xmean-xold) / sigma; 
         % Variacion de sigma que es el paso de busqueda dentro del espacio
         sigma = sigma * exp((cs/damps)*(norm(ps)/chiN - 1));     
         %Aplicacion de Ruleta para la evaluacion de la poblacion generada
         Expec=Expectativa(fitness,Minimo);
         Padre=Ruleta(Expec',lambda); 
         %Cruce de la poblacion de punto simple
         if (rand<prob_cruce)
             Hijo=Cruce(Padre);
             P_Padre=Matriz_2(Hijo,P0);
         else
             P_Padre=Matriz_2(Padre,P0); 
         end
         %Aplicacion de la mutacion en un gen del cromosoma
         if (rand<prob_mutacion+0.1)
             pos=ceil(rand*length(P_Padre(1,:)));   
             Valor=P_Padre(pos,:)*random('Normal',0,Radio_Mut,1,1);
             if Valor>ub, Valor=ub;end
             if Valor<lb, Valor=lb;end
             P_Padre(pos,:)=Valor;
             P_Padre(pos,:)=~P_Padre(pos,:);
         end  
         %Reemplazo generacional
         P0=P_Padre;
         %Almacenamiento temporal del estado del algoritmo
         mejor(conta)=min(fitness);
         peor(conta)=max(fitness);
         Media(conta)=mean(fitness);
         Mediana(conta)=median(fitness);
         Desv_s(conta)=std(fitness);
         fit(conta,:)=fitness;
         pobla(conta,:)=median(P0);
         pobla_var(conta,:)=var(P0);
         pobla_std(conta,:)=std(P0);
         disp(mejor(conta));
         conta=conta+1;
     end
     worst(Veces)=max(peor);   
     best(Veces)=min(mejor); 
     mean_1(Veces)=mean(Media); 
     median_1(Veces)=median(Mediana); 
     std_1(Veces)=std(Desv_s); 
end
toc%fin de cronometro
      
function Prob=Expectativa(fi,Minimo)
    fi=zscore(fi)+3;
    if (Minimo==0)
        fi=1./fi;
        Prob=fi/sum(fi);
    else
        Prob=fi/sum(fi);
    end
    
