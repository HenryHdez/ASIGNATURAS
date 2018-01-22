#include"stdio.h"
#include"conio.h"


int main()
{ 
int a,b,c;
printf(" \n Ingrese numero a: ");
scanf("%i",& a);
printf(" \n Ingrese numero b: ");
scanf("%i",& b);
c=a%b;
if(c==0){printf(" \n b es divisor de a: ");}
else{printf(" \n b no es divisor de a: ");}
printf(" \n Enter para terminar  \n");
getch();
}






