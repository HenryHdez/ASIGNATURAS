#include"stdio.h"
#include"conio.h"
main()
{
int fil,col,numero,i,c,d,pos;
float b,a,x,z;
int A[3][3];
int B[3];
int C[3];
fil=0;
col=0;
a=0.0;
b=0.0;
d=0;
c=0;
numero=0;
int Vector[100];
while(fil<100){
	printf(" \n Ingrese Numero %i ",fil);
	scanf("%i",& numero);
	Vector[fil]=numero;
	fil=fil+1;
	}
for (fil=0;fil<100;fil++){
	if(Vector[fil]<0){c=c+1;a=a+Vector[fil];}
	else{d=d+1;b=b+Vector[fil];}
	}
x=((float)a)/((float)c);
z=((float)b)/((float)d);
printf(" \n Media numeros Positivos= %f  \n",z);
printf(" \n Media numeros Negativos= %f  \n",x);
printf(" \n Enter para terminar  \n");
getch();
}

