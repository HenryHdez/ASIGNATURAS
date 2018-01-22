#include"stdio.h"
#include"conio.h"
main()
{
int fil,col,i;
float numero;
float A[5][10]= {
{5.0,5.1, 5.6, 6, 1.2, 1.4, 1.8, 1.9, 1, 2},
{1.4, 2.1, 8.6, 6, 1.2, 1.6, 1.8, 4.9, 8, 10},
{3.3, 2.3, 1.6, 6, 5.2, 1.6, 1.8, 3.9, 2, 11},
{8.4, 2.4, 2.6, 6, 7.2, 1.6, 1.8, 2.9, 5, 12},
{9.4, 2.5, 3.6, 6, 8.2, 1.6, 1.8, 3.4, 1, 13},
};
fil=0;
col=0;
numero=0.0;
printf("Matriz dada \n");
for (fil=0;fil<5;fil++){
	for(col=0;col<10;col++){
		printf(" %f ",A[fil][col]);
	}
	printf(" \n ");
}
printf("Ingrese T(k)\n");
scanf("%f",& numero);
printf("Matriz dividida \n");
for (fil=0;fil<5;fil++){
	for(col=0;col<10;col++){
		A[fil][col]=A[fil][col]/numero;
		printf(" %f ",A[fil][col]);
	}
	printf(" \n ");
}
printf(" \n Enter para terminar  \n");
getch();
}

