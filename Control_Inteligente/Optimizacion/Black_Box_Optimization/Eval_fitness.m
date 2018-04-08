function fit=Eval_fitness(Pop,Ind,net,MA,y)
L=max(size(y));
fit=zeros(Ind,1);
for i=1:1:Ind
    net.IW(1,1)=Pop(i);
    simula=ceil(sim(net,MA));
    fit(i)=corr(simula',y);
    if(isnan(fit(i))),fit(i)=0;end;
%     for j=1:L
%         if(simula(j)==y(j))
%             fit(i)=fit(i)+1; 
%         else
%             fit(i)=fit(i)-1;
%         end
%     end
end
