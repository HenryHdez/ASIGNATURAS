#include"stdio.h"
#include"conio.h"
main()
{
int conta;
float numero,acu,media;
numero=0;
conta=0;
printf(" \n Ingrese notas Definitiva de 3 alumnos rango de 0 a 5");
	printf(" \n Ingrese Numero ");
	scanf("%f",& numero);
	acu=acu+numero;
	printf(" \n Ingrese Numero ");
	scanf("%f",& numero);
	acu=acu+numero;
	printf(" \n Ingrese Numero ");
	scanf("%f",& numero);
	acu=acu+numero;
	media=acu/3;
	printf(" \n la nota promedio de la clase fue: %f", media);
	if(media<3.0){printf(" \n Hay que mejorar");}
	else{printf(" \n Muy bien ");}
	printf(" \n Enter para terminar  \n");
	getch();
return 0;
}
