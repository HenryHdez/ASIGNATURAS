function Seleccion=Elitista(fi,P0,Individuos,Orden)
    fi=zscore(fi)+3;
    Alta=fix(random('unif',1,Individuos,1,1));
    Media=Individuos-Alta;
    MA=[fi,P0];
    if Orden>0
        MA=sortrows(MA,1);
    else
        MA=sortrows(MA,-1);
    end
    L=size(MA);
    fi=MA(:,1);
    P0=MA(:,2:1:L(2)); 
    P_X=Torneo(fi(1:1:Alta),P0(1:1:Alta,:),Alta,Orden);
    P_X2=Torneo(fi(Alta:1:Alta+Media),P0(1:1:Alta+Media,:),Media,Orden);
    P=[P_X;P_X2];
    Seleccion=P;