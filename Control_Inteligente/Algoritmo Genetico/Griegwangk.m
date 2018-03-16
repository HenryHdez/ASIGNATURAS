function Griegwangk
%Función
L=10;
Texto='xj^2/4000';
Texto_2='cos(xj/sqrt(j))';
Aux_Texto=' ';
Aux_Texto_2=' ';
for z=1:L
        Aux_Texto=[Aux_Texto,'+','(',strrep(Texto,'j', num2str(z)),')',];
        Aux_Texto_2=[Aux_Texto_2,'*','(',strrep(Texto_2,'j', num2str(z)),')',];
        Var(z)=sym([strcat('x',num2str(z))]);
end
Aux_Texto=['1',Aux_Texto,'-',Aux_Texto_2(3:1:max(size(Aux_Texto_2)))];
f=sym(Aux_Texto);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Individuos=80;
N_Var=size(Var);
P0=random('unif',-600,600,Individuos,N_Var(2));
pc=0.2;
pm=0.05;
MA=P0;
Minimo=0;%Si es <= a 0 busca el maximo sino busca el minimo
for Corridas=1:10
    for Iteracion=1:Individuos
        %Selección
        for i=1:Individuos
            fi(i,:)=double(subs(f,Var,P0(i,:)));
        end
        P1=Ruleta(fi,P0,Individuos,Minimo);
        %Cruce
        for j=1:N_Var
            for i=1:2:(Individuos-1)
                    aux=Cruce(P1(i,j),P1(i+1,j),pc);
                    P1(i,j)=aux(3);
                    P1(i+1,j)=aux(4);  
            end
        end
        %Mutación
        for j=1:N_Var
            for i=1:2:(Individuos-1)
                aux=Mutacion(P1(i,j),P1(i+1,j),pm);
                P1(i,j)=aux(1);
                P1(i+1,j)=aux(2);
            end 
        end
        %Reemplazo generacional
        MA=[MA P0];
        P0=P1; 
        %Seleccion de mejor hijo
        if Minimo>0
            Peor(Iteracion)=max(fi);
            Mejor(Iteracion)=min(fi);
        else
            Peor(Iteracion)=min(fi);
            Mejor(Iteracion)=max(fi);
        end
        fit(Iteracion)=mean(fi);
    end
    Peor_Corrida(Corridas)=median(Peor);
    Mejor_Corrida(Corridas)=median(Mejor);
    fit_Corrida(Corridas)=median(fit);
end
plot(fit_Corrida,'r')
hold on;
plot(Peor_Corrida,'g')
hold on
plot(Mejor_Corrida,'b')
grid on
title('FITNESS');
xlabel('Corrida');
ylabel('Valor de la Mediana');
legend('Rojo=Media','Verde=Peor','Azul=Mejor');

  
function Suma=Sumatoria(Vector,desde,hasta)
    Suma=0;
    for i=desde:hasta
        Suma=Suma+Vector(i);
    end
    
function Cruzados=Cruce(Ma,Pa,Prob_Cruce)
    Aux=random('unif',0,1,1,1);
    Bin_Mama=dec2bin_decimal(Ma,5);
    Bin_Papa=dec2bin_decimal(Pa,5); 
    L1=strfind(Bin_Mama,'.');
    L2=strfind(Bin_Papa,'.');
    while(L1<L2)
        Bin_Mama=['0' Bin_Mama];
        L1=strfind(Bin_Mama,'.');
    end
    while(L1>L2)
        Bin_Papa=['0' Bin_Papa];
        L2=strfind(Bin_Papa,'.');
    end
    L1=max(size(Bin_Mama))-1;
    L2=max(size(Bin_Papa))-1; 
    Aux_Ma=Bin_Mama(1:1:L1);
    Aux_Pa=Bin_Papa(1:1:L2);
    while(L1<L2)
        Aux_Ma=[Aux_Ma '0'];
        L1=max(size(Aux_Ma));
    end
    while(L1>L2)
        Aux_Pa=[Aux_Pa '0'];
        L2=max(size(Aux_Pa));
    end
    L1=max(size(Bin_Mama));
    L2=max(size(Bin_Papa));
    Bin_Mama=[Aux_Ma Bin_Mama(L1)];
    Bin_Papa=[Aux_Pa Bin_Papa(L2)];
    L1=max(size(Bin_Mama));
    if(Aux<Prob_Cruce) 
        P=strfind(Bin_Mama,'.');
        P_Cruce_Entera=round(random('unif',1,P-1,1,1));
        P_Cruce_Decimal=round(random('unif',P+1,L1-1,1,1));
        Hija=[Bin_Mama(1:1:P_Cruce_Entera) Bin_Papa(P_Cruce_Entera+1:1:P-1) Bin_Mama(P:1:P_Cruce_Decimal) Bin_Papa(P_Cruce_Decimal+1:1:L1-1) Bin_Mama(L1)];
        Hijo=[Bin_Papa(1:1:P_Cruce_Entera) Bin_Mama(P_Cruce_Entera+1:1:P-1) Bin_Papa(P:1:P_Cruce_Decimal) Bin_Mama(P_Cruce_Decimal+1:1:L1-1) Bin_Papa(L1)]; 
    else
        Hija=Bin_Mama;
        Hijo=Bin_Papa;
    end
        P=strfind(Hija,'.');
        Mama_Double=[Bin_Mama(L1) num2str(bin2dec(Bin_Mama(1:1:P-1))) '.' num2str(bin2dec(Bin_Mama(P+1:1:L1-1)))];
        Papa_Double=[Bin_Papa(L1) num2str(bin2dec(Bin_Papa(1:1:P-1))) '.' num2str(bin2dec(Bin_Papa(P+1:1:L1-1)))];
        Hija_Double=[Hija(L1) num2str(bin2dec(Hija(1:1:P-1))) '.' num2str(bin2dec(Hija(P+1:1:L1-1)))];
        Hijo_Double=[Hijo(L1) num2str(bin2dec(Hijo(1:1:P-1))) '.' num2str(bin2dec(Hijo(P+1:1:L1-1)))];
        Cruzados=[str2double(Mama_Double) str2double(Papa_Double) str2double(Hija_Double) str2double(Hijo_Double)];

function Mutar=Mutacion(Ma,Pa,Radio_Mut)
    Aux=random('unif',0,1,1,1);
    Bin_Mama=dec2bin_decimal(Ma,5);
    Bin_Papa=dec2bin_decimal(Pa,5); 
    L1=strfind(Bin_Mama,'.');
    L2=strfind(Bin_Papa,'.');
    while(L1<L2)
        Bin_Mama=['0' Bin_Mama];
        L1=strfind(Bin_Mama,'.');
    end
    while(L1>L2)
        Bin_Papa=['0' Bin_Papa];
        L2=strfind(Bin_Papa,'.');
    end
    L1=max(size(Bin_Mama))-1;
    L2=max(size(Bin_Papa))-1; 
    Aux_Ma=Bin_Mama(1:1:L1);
    Aux_Pa=Bin_Papa(1:1:L2);
    while(L1<L2)
        Aux_Ma=[Aux_Ma '0'];
        L1=max(size(Aux_Ma));
    end
    while(L1>L2)
        Aux_Pa=[Aux_Pa '0'];
        L2=max(size(Aux_Pa));
    end
    L1=max(size(Bin_Mama));
    L2=max(size(Bin_Papa));
    Bin_Mama=[Aux_Ma Bin_Mama(L1)];
    Bin_Papa=[Aux_Pa Bin_Papa(L2)];
    L1=max(size(Bin_Mama));
    P=strfind(Bin_Mama,'.');
    if(Aux<Radio_Mut) 
        P_Mut_Entera=round(random('unif',1,P-1,1,1));
        P_Mut_Decimal=round(random('unif',P+1,L1-1,1,1));
        if(Bin_Mama(P_Mut_Entera)=='1')
            Bin_Mama(P_Mut_Entera)='0';
        else
            Bin_Mama(P_Mut_Entera)='1';
        end
        if(Bin_Mama(P_Mut_Decimal)=='1')
            Bin_Mama(P_Mut_Decimal)='0';
        else
            Bin_Mama(P_Mut_Decimal)='1';
        end
        if(Bin_Papa(P_Mut_Entera)=='1')
            Bin_Papa(P_Mut_Entera)='0';
        else
            Bin_Papa(P_Mut_Entera)='1';
        end
        if(Bin_Papa(P_Mut_Decimal)=='1')
            Bin_Papa(P_Mut_Decimal)='0';
        else
            Bin_Papa(P_Mut_Decimal)='1';
        end  
    end
    Mama_Double=[Bin_Mama(L1) num2str(bin2dec(Bin_Mama(1:1:P-1))) '.' num2str(bin2dec(Bin_Mama(P+1:1:L1-1)))];
    Papa_Double=[Bin_Papa(L1) num2str(bin2dec(Bin_Papa(1:1:P-1))) '.' num2str(bin2dec(Bin_Papa(P+1:1:L1-1)))];
    Mutar=[str2double(Mama_Double) str2double(Papa_Double)];

function Binario=dec2bin_decimal(A,Largo)
    C=floor(abs(A));
    D=abs(A)-C;
    D=D*(10^Largo);
    Entera=dec2bin(C);
    Decimal=dec2bin(D);
    Binario=[Entera '.' Decimal];
    if(A<0)
        Binario=[Binario '-'];
    else
        Binario=[Binario '+'];
    end