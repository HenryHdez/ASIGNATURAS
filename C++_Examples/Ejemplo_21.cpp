#include"stdio.h"
#include"conio.h"

main()
{
	int a,b,c;
	printf(" \n Ingrese numero A ");
	scanf("%i",& a);
	printf(" \n Ingrese numero B ");
	scanf("%i",& b);
	if(a>b){printf(" \n Mayor= %i",a);}
	else if(a<b){printf(" \n Mayor= %i",b);}
	else{printf(" \n Iguales");}
	printf(" \n Enter para terminar  \n");
	getch();
}
