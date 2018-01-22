#include"stdio.h"
#include"conio.h"


int main()
{ 
int conta,i,aux,a,b,c,d;
float peso [10];
float p;
i=0;
a=0;
b=0;
c=0;
d=0;
printf(" \n nota alumno 1: ");
scanf("%f",& peso[0]);
printf(" \n nota alumno 2: ");
scanf("%f",& peso[1]);
printf(" \n nota alumno 3: ");
scanf("%f",& peso[2]);
printf(" \n nota alumno 4: ");
scanf("%f",& peso[3]);
printf(" \n nota alumno 5: ");
scanf("%f",& peso[4]);
printf(" \n nota alumno 6: ");
scanf("%f",& peso[5]);
printf(" \n nota alumno 7: ");
scanf("%f",& peso[6]);
printf(" \n nota alumno 8: ");
scanf("%f",& peso[7]);
printf(" \n nota alumno 9: ");
scanf("%f",& peso[8]);
printf(" \n nota alumno 10: ");
scanf("%f",& peso[9]);

for(i=0;i<10;i++){
if(peso[i]<5.0){a=a+1;}
else{d=d+1;}
}
printf(" \n Reprobados= %i",a);
printf(" \n Aprobados= %i",d);
printf(" \n Enter para terminar  \n");
getch();
}



