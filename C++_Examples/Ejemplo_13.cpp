#include"stdio.h"
#include"conio.h"
main()
{
int a,opcion,i,j;
a=0;
printf(" \n Ingrese Metodo ");
printf(" \n 1 Repetir ");
printf(" \n 2 Mientrar ");
printf(" \n 3 Desde ");
scanf("%i",& opcion);
if(opcion==1){
for(i=1;i<=100;i++){a=a+i;}
printf(" \n Resultado= %i ",a);
}
if(opcion==2){
i=1;
while(i<=100){
a=a+i;
i=i+1;
}
printf(" \n Resultado= %i ",a);
}
if(opcion==3){
printf(" \n Ingrese punto de partida ");
scanf("%i",& j);
for(i=j;i<=100;i++){a=a+i;}
printf(" \n Resultado= %i ",a);
}
printf(" \n Enter para terminar  \n");
getch();
}
