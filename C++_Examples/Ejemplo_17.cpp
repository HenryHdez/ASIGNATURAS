#include"stdio.h"
#include"conio.h"
#include "math.h"
main()
{
	int a,b,i;
	float acu;
	acu=1;
	printf(" \n Programa para calcular X^n ");
	printf(" \n Ingrese numero X ");
	scanf("%i",& a);
	printf(" \n Ingrese numero N ");
	scanf("%i",& b);
	while(b<0){
	printf(" \n Ingrese numero N ");
	scanf("%i",& b);		
	}
	acu=pow(a,b);
	printf(" \n Resultado= %f ",acu);
	printf(" \n Enter para terminar  \n");
	getch();
}
