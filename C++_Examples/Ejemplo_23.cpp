#include"stdio.h"
#include"conio.h"
main()
{
int r,j,i;
int A[10];
for(i=0;i<10;i++){
	A[i]=0;
}
i=0;
r=1;
j=2;
A[r]=j;
A[j]=i;
A[i+j]=i+j;
r=A[i]+A[j];
A[3]=5;
j=A[i]-A[j];
printf(" \n Valor de r=%i y j=%i",r,j);
printf(" \n Enter para terminar  \n");
getch();
}
