#include"stdio.h"
#include"conio.h"
main()
{
int i,num,cont,j;
printf(" \n lista de numeros primos de 2 hasta 1000  \n");
for(j=2;j<1000;j++){
num=j;
cont=0;
for(int i=1;i<=num;i++) { if(num%i==0) cont=cont+1; } 
if(cont==2){ printf(" \n %i",num);}}
printf(" \n Enter para terminar  \n");
getch();
return 0;
}
