#include"stdio.h"
#include"conio.h"
main()
{
int fil,col,numero,i,a;
int A[4][4];
fil=0;
col=0;
a=0;
numero=0;
printf("Ingrese Componentes de la Matriz");
while(fil<4 && col<4){
	printf(" \n Ingrese Numero fil=%i, col=%i ",fil,col);
	scanf("%i",& numero);
	A[fil][col]=numero;
	if(col==3 && fil==3){break;}
	col=col+1;
	if(col>3){fil=fil+1;col=0;}
	}
fil=0;
col=0;
for (fil=0;fil<4;fil++){
	for(col=0;col<4;col++){
		printf(" %i ",A[fil][col]);
		if(A[fil][col]>=0){a=a+1;}
	}
	printf(" \n ");
}
printf(" \n Numero Enteros Positivos= %i",a);
printf(" \n Enter para terminar  \n");
getch();
}

