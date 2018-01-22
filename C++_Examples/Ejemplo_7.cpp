#include <stdio.h>
#include"stdio.h"
#include"conio.h"
#define TRUE 1
#define FALSE 0

//Prototipo de funciones
int correcta_fecha(int,int,int);
int bisiesto(int); 

//Función principal
int main()
{ 
	//Variables
	int dia, mes, anio;
	printf("Ingrese fecha con el siguiente formato:(dd-mm-aaaa)");
	scanf("%d-%d-%d",&dia,&mes,&anio);
	//Verificamos que sea correcta
	if (!correcta_fecha(dia,mes,anio))
	{
		printf("\nLa fecha no es correcta.");
	}
	else
	{
		printf("\nLa fecha tiene el formato correcto.");
	}
	getchar();
	printf(" \n Enter para terminar  \n");
	getch();
	return 0;
	
} 

//Función
int correcta_fecha(int dia,int mes,int anio)
{ 
	int dias;
	switch (mes)
	{
		//Para los meses
		case 4:
		case 6:
		case 9:
		case 11:
      		dias=30;
    	     	break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		     dias=31;
       		break;
		case 2:
	     	if (bisiesto(anio))
	      	{
		     	dias=29;
        		}
	     	else
		     {
       			dias=28;
	     	}
		     break;
		default: return FALSE;
	}
	//Para saber cual es el día siguiente
	if (dia<=dias)
	{
		if (dia<dias)
		dia++;
		else
		{
			dia=1;
			if (mes==12)
			{
				mes=1;
				anio++;
			}
			else
			mes++;
		}
		printf("\nEl proximo dia sera:%d-%d-%d.",dia,mes,anio);
		return TRUE;

	}
	else
	return FALSE;
	printf(" \n Enter para terminar  \n");
	getch();
} 

/* 
Un ano es bisiesto cuando es multiplo de 4 
pero no de 100 o multiplo de 400. 
*/
int bisiesto(int anio)
{ 
	if ((anio%4==0 && anio%100!=0) || (anio%400==0)) return TRUE;
		printf(" \n Enter para terminar  \n");
	getch();
	return FALSE;
}

