#include"stdio.h"
#include"conio.h"


int main()
{ 
float a;
printf(" \n Ingrese angulo: ");
scanf("%f",& a);
if(a==90.0){printf(" \n Es recto ");}
else if (a<90){printf(" \n Es agudo ");}
else {printf(" \n Es Obtuso ");}
printf(" \n Enter para terminar  \n");
getch();
}






