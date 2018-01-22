#include"stdio.h"
#include"conio.h"
main()
{
int op, acu,i,x,y,p;
char nom [50];
printf(" \n Ingrese Angulo ");
scanf("%i",& op);
if (op!=90) {printf(" \n El angulo no es un Angulo Recto \n");}
else {printf(" \n El angulo es un Angulo Recto \n");}
printf(" \n Ingrese Temperatura ");
scanf("%i",& op);
if (op>100) {printf(" \n Por encima del punto de ebullicion del agua \n");}
else {printf(" \n Temperatura menor o igual a 100 grados \n");}
printf(" \n Ingrese Numero ");
scanf("%i",& op);
acu=0;
if (op>=0) {for(i=0;i<op;i++){acu=acu+i;}printf("\n Numero de Positivos %i \n",acu);}
else{op=op*(-1);for(i=0;i<op;i++){acu=acu+i;}acu=acu*-1;printf("\n Numero de Negativos %i \n",acu);}
x=0;
y=0;
printf(" \n Ingrese X ");
scanf("%i",& x);
printf(" \n Ingrese Y ");
scanf("%i",& y);
if ((y<=x)&&(x<=20)) {
printf(" \n Ingrese P ");
scanf("%i",& p);
printf("\n X=%i Y=%i P=%i \n",x,y,p);
}
else{printf("\n X=%i Y=%i P=No se asigna valor \n",x,y);}
printf(" \n Ingrese Distancia ");
scanf("%i",& x);
if ((x<=35)&&(x>=20)) {
printf(" \n Ingrese tiempo ");
scanf("%i",& y);
printf("\n distancia=%i tiempo=%i \n",x,y);
}
else{printf("\n distancia=%i tiempo=No se asigna valor \n",x);}
printf(" \n Enter para terminar  \n");
getch();
}
