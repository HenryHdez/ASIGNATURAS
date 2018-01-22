#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "edad.cpp"
#include "Multiplos.cpp"
#include "Multiplos2.cpp"

main(){
	int opcion=0;
	int Letra=0;
	Inicio:
	printf("Seleccione Opcion: \n");
	printf("1-Edad \n");
	printf("2-Multiplos \n");
	printf("3-Numero Multiplo \n");
	scanf("%d",&opcion);
	while(opcion<=0||opcion>3){
		printf("Valor Errado \n");
		scanf("%d",&opcion);
		}
	switch (opcion){
		case 1:
		printf("Selecciono Opcion 1 \n");
		Edad();
		break;
		case 2:
		printf("Selecciono Opcion 2 \n");
		Multiplos();
		break;
		case 3:
		printf("Selecciono Opcion 3 \n");
		Multiplos2();
		break;			
	}
	printf("Desea Volver? (1=Si, 0=No): ");
	scanf("%d",&Letra);
	while(Letra<0||Letra>1){
		printf("Valor Errado \n");
		scanf("%d",&Letra);
	}
	if(Letra==1){system("cls"); goto Inicio;}
	printf("Enter para terminar Ejecucion \n");
	getch();
}
