#include"stdio.h"
#include"conio.h"
main()
{
double numero,i;
	numero=0;
	printf(" \n Ingrese numero entre 100 y 100000");
	printf(" \n Ingrese Numero ");
	scanf("%lf",& numero);
	while(numero<99.0 || numero>99999.0){
	printf(" \n Ingrese numero entre 100 y 100000");
	printf(" \n Ingrese Numero ");
	scanf("%lf",& numero);
	}
	for(int i=numero;i>0;i--){
		numero*=i;
	}
	printf(" \n factorial= %lf", numero);
	printf(" \n Enter para terminar  \n");
	getch();
	return 0;
}
