#include"stdio.h"
#include"conio.h"
main()
{
int fil,col,numero,i,a,b,c,pos;
int A[3][3];
int B[3];
int C[3];
fil=0;
col=0;
a=0;
b=0;
c=0;
numero=0;
int Vector[60];
while(fil<60){
	printf(" \n Ingrese Numero %i ",fil);
	scanf("%i",& numero);
	Vector[fil]=numero;
	fil=fil+1;
	}
	
for (fil=0;fil<60;fil++){
	if(Vector[fil]<0){a=a+1;}
	else if(Vector[fil]==0){b=b+1;}
	else {c=c+1;}
}
printf(" \n Elementos Negativos= %i  \n",a);
printf(" \n Elementos Cero= %i  \n",b);
printf(" \n Elementos Positivos= %i  \n",c);
printf(" \n Enter para terminar  \n");
getch();
}

