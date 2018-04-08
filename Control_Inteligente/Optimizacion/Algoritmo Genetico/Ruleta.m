function Seleccion=Ruleta(fi,P0,Individuos,Orden)
    fi=zscore(fi)+3;
    if (Orden>0)
        fi=1./fi;
        Prob=fi/sum(fi);
    else
        Prob=fi/sum(fi);
    end
    for i=1:Individuos
        x=random('unif',0,1,1,1);
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