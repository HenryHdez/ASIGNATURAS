function Seleccion=Torneo(fi,P0,Individuos,Orden)
    fi=zscore(fi)+3;
    %Primer Par
    for ind=1:Individuos
        for i=1:2
            pos=fix(random('unif',1,Individuos,1,1));
            A(i,:)=fi(pos,:);
            B(i,:)=P0(pos,:);
        end
        %Segundo Par
        for i=1:2
            pos=fix(random('unif',1,Individuos,1,1));
            C(i,:)=fi(pos,:);
            D(i,:)=P0(pos,:);
        end    
        %Semifinal
        for i=1:2
            r=random('unif',0,1,1,1);
            if i==1
                aux_fi=A;
            else
                aux_fi=C;
            end
            if (Orden>0)
                aux_fi=1./aux_fi;
                Prob=aux_fi/sum(aux_fi);
            else
                Prob=aux_fi/sum(aux_fi);
            end    
            if i==1
                if(r<Prob(1))
                    E(1,:)=A(1,:);
                    F(1,:)=B(1,:);
                else
                    E(1,:)=A(2,:);
                    F(1,:)=B(2,:);
                end
            else
                if(r<Prob(1))
                    E(2,:)=C(1,:);
                    F(2,:)=D(1,:);
                else
                    E(2,:)=C(2,:);
                    F(2,:)=D(2,:);
                end            
            end
        end     
        %Final
        Aux_Seleccion=Ruleta(E,F,2,Orden);
        P(ind,:)=Aux_Seleccion(1,:);
    end
    Seleccion=P;