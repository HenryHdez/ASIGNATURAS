#include <stdio.h>
#include <conio.h>


int Edad(){
float year=0.0;
printf("Introduzca Edad: ");
scanf("%f",&year);
if(year<=10.0){printf("Niño \n");}
else if(year>10.0 && year<=18.0){printf("Adolecente \n");}
else if(year>18.0 && year<=60.0){printf("Adulto \n");}
else {printf("Adulto Mayor \n");}
printf("Enter para terminar Ejecucion \n");
getch();
return 0;
}
