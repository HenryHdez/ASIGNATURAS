function Seleccion=USS(fi,P0,Individuos,Orden)
    N=random('unif',1,Individuos,1,1);
    Puntero=fix(N/Individuos);
    a=1;
    fi=zscore(fi)+3;
    MA=[fi,P0];
    if (Orden>0)
        MA=sortrows(MA,1);
    else
        MA=sortrows(MA,-1);
    end
    L=size(MA);
    fi=MA(:,1);
    P0=MA(:,2:1:L(2));
    for i=1:Individuos
        P(i,:)=P0(a,:);
        if a>Individuos
            a=a-Individuos;
        else
            a=a+Puntero;
        end
    end
    Seleccion=P;