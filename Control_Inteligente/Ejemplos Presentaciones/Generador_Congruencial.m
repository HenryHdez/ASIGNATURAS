m=1000;
a=51;
c=30;
x_n=100;
for i=1:10
    x_n_1=mod(((a*x_n)+c),m);
    x_n=x_n_1;
    disp(x_n);
end
