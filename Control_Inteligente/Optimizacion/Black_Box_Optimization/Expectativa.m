function Prob=Expectativa(fi,Minimo)
    fi=zscore(fi)+3;
    if (Minimo==0)
        fi=1./fi;
        Prob=fi/sum(fi);
    else
        Prob=fi/sum(fi);
    end