#include"stdio.h"
#include"conio.h"
main()
{
int conta;
float numero,acu,media;
numero=0;
conta=0;
printf(" \n Ingrese lista de numeros para terminar ingrese numero menor a cero ");
while(numero>=0){
	printf(" \n Ingrese Numero ");
	scanf("%f",& numero);
	if(numero>=0){
	acu=acu+numero;
	conta=conta+1;}
}
media=acu/conta;
printf(" \n numero de elementos %i", conta);
printf(" \n La media es: %f", media);
printf(" \n Enter para terminar  \n");
getch();
return 0;
}
