#include"stdio.h"
#include"conio.h"
main()
{
int fil,col,numero,i,a,b;
int A[3][3];
int B[3];
int C[3];
fil=0;
col=0;
a=0;
b=0;
numero=0;
printf("Ingrese Componentes de la Matriz");
while(fil<3 && col<3){
	printf(" \n Ingrese Numero fil=%i, col=%i ",fil,col);
	scanf("%i",& numero);
	A[fil][col]=numero;
	if(col==2 && fil==2){break;}
	col=col+1;
	if(col>2){fil=fil+1;col=0;}
	}
fil=0;
col=0;
for (fil=0;fil<3;fil++){
	for(col=0;col<3;col++){
		printf(" %i ",A[fil][col]);
	}
	printf(" \n ");
}
for (fil=0;fil<3;fil++){
	for(col=0;col<3;col++){
		a=a+A[fil][col];
	}
	B[fil]=a;
	a=0;
}

for (fil=0;fil<3;fil++){
	for(col=0;col<3;col++){
		b=b+A[col][fil];
	}
	C[fil]=b;
	b=0;
}
printf(" \n Vector de resultados suma filas %i %i %i",B[0],B[1],B[2]);
printf(" \n Vector de resultados suma Columnas %i %i %i",C[0],C[1],C[2]);
printf(" \n Enter para terminar  \n");
getch();
}

