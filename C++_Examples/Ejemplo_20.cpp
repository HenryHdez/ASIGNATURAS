#include"stdio.h"
#include"conio.h"

main()
{
	int a,b,c;
	printf(" \n Ingrese numero A ");
	scanf("%i",& a);
	printf(" \n Ingrese numero B ");
	scanf("%i",& b);
	c=a;
	a=b;
	b=c;
	printf(" \n Valores A=%i, B=%i",a,b);
	printf(" \n Enter para terminar  \n");
	getch();
}
