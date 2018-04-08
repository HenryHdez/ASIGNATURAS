function sat=Saturador(x,lb,ub)
L=size(x);
for i=1:L(1)
    for j=1:L(2)
        if x(i,j)<=lb, x(i,j)=lb; 
        elseif x(i,j)>=ub, x(i,j)=ub; end
    end
end
sat=x;
