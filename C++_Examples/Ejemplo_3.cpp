#include"stdio.h"
#include"conio.h"
main()
{
int a,b,c,aux; 
aux=0;
printf(" \n ingrese los tres numeros enteros : "); 
printf(" \n Primero: ");  
scanf("%i",& a); 
printf(" \n Segundo: ");  
scanf("%i",& b);
printf(" \n Tercero: ");  
scanf("%i",& c);
if(a<b) 
{ 
aux=a; 
a=b; 
b=aux; 
} 
if(a<c) 
{ 
aux=a; 
a=c; 
c=aux; 
} 

if(b<c) 
{ 
aux=b; 
b=c; 
c=aux; 

} 
printf(" \n los numeros ordenados son : ");
printf(" \n Primero=%i, Central=%i, Tercero=%i ",a,b,c); 
printf(" \n Enter para terminar  \n");
getch();
}
