#include <stdio.h>
#include <conio.h>

int Multiplos2(){
int i=0,a=0,b=0,Numero=0,Numero2=0;
printf("Introduzca Numero 1: ");
scanf("%d",&Numero);
printf("Introduzca Numero 2: ");
scanf("%d",&Numero2);
Numero%=Numero2;
if(Numero==0){printf("Si es Multiplo \n");}
else{printf("No es Multiplo \n");}
	printf("Enter para terminar Ejecucion \n");
	getch();
	return 0;
}

