#include"stdio.h"
#include"conio.h"
main()
{
int fil,col,numero,i,a,pos;
float b;
int A[3][3];
int B[3];
int C[3];
fil=0;
col=0;
a=0;
b=0.0;
numero=0;
printf("Ingrese Tamano del Vector ");
scanf("%i",& pos);
int Vector[pos];
while(fil<pos){
	printf(" \n Ingrese Numero %i ",fil);
	scanf("%i",& numero);
	Vector[fil]=numero;
	fil=fil+1;
	}
	
for (fil=0;fil<pos;fil++){
	a=a+Vector[fil];
}
b=((float)a)/((float)pos);
printf(" \n Sumatoria= %i  \n",a);
printf(" \n Media= %f  \n",b);
printf(" \n Enter para terminar  \n");
getch();
}

