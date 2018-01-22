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
printf(" \n Peso alumno en kg: ");
scanf("%f",& peso[0]);
printf(" \n Peso alumno en kg: ");
scanf("%f",& peso[1]);
printf(" \n Peso alumno en kg: ");
scanf("%f",& peso[2]);
printf(" \n Peso alumno en kg: ");
scanf("%f",& peso[3]);
printf(" \n Peso alumno en kg: ");
scanf("%f",& peso[4]);
printf(" \n Peso alumno en kg: ");
scanf("%f",& peso[5]);
printf(" \n Peso alumno en kg: ");
scanf("%f",& peso[6]);
printf(" \n Peso alumno en kg: ");
scanf("%f",& peso[7]);
printf(" \n Peso alumno en kg: ");
scanf("%f",& peso[8]);
printf(" \n Peso alumno en kg: ");
scanf("%f",& peso[9]);

for(i=0;i<10;i++){
if(peso[i]<40.0){a=a+1;}
else if(peso[i]>40.0 && peso[i]<=50.0){b=b+1;}
else if(peso[i]>50.0 && peso[i]<=60.0){c=c+1;}
else{d=d+1;}
}
printf(" \n alumnos peso menor a 40kg= %i",a);
printf(" \n alumnos peso mayor a 40kg y menor a 50kg= %i",b);
printf(" \n alumnos peso mayor a 50kg y menor a 60kg= %i",c);
printf(" \n alumnos peso mayor a 60kg= %i",d);
printf(" \n Enter para terminar  \n");
getch();
}



