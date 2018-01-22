#include <stdio.h>
#include <conio.h>

int Multiplos(){
		int i=0,a=0,b=0,Numero=0;
	printf("Introduzca Numero: ");
	scanf("%d",&Numero);
	while(Numero<0 && Numero>100){
		printf("por favor ingrese numero mayor a 0 \n");
		scanf("%d",&Numero);
		}
	for(i=0;i<=100;i++){
		b=i;
		b=b%Numero;
		if(b==0){
			a=i;
			a=a%2;
			if(a==0){printf("Multiplo Par= %d \n",i);}}
		}
	printf("Enter para terminar Ejecucion \n");
	getch();
	return 0;
}




