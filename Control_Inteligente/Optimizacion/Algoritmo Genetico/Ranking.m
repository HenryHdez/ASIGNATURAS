function Seleccion=Ranking(fi,P0,Individuos,Orden)
    fi=zscore(fi)+3;
    MA=[fi,P0];
    MA=sortrows(MA,-1);
    L=size(MA);
    fi=MA(:,1);
    P0=MA(:,2:1:L(2));
    if (Orden>0)
        fi=1./fi;
        Prob=fi/sum(fi);
    else
        Prob=fi/sum(fi);
    end
    for i=1:Individuos
        x=gprnd(0.4,0.3,0.1);
        if x>=0.99
            x=0.99;
        end
        a=0;
        for j=1:Individuos
            a=Prob(j)+a;
            if x<a
                P(i,:)=P0(j,:);
                break;
            end  
        end
    end
    Seleccion=P;