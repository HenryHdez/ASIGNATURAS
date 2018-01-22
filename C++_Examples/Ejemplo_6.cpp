#include"stdio.h"
#include"conio.h"
#include"math.h"
main()
{
int a,b;
float precio,descuento,total;
printf(" \n ingrese numero de dias : "); 
scanf("%i",& a);
printf(" \n ingrese distancia: "); 
scanf("%i",& b);
if((a>=7)&&(b>=800)){
precio=b*2.5;descuento=precio*0.3;total=precio-descuento;
printf(" \n Total a pagar=: %f, Precio Neto= %f, Descuento=%f ",total,precio,descuento);
}
else{precio=b*2.5;printf(" \n Total a pagar=: %f",precio);}
printf(" \n Enter para terminar  \n");
getch();
}

