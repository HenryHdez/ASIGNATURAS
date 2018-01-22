#include <cstdlib>  // en estas lineas se declaran las librerias necesarias
#include <iostream> 
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std; 

int main() 
{
  cout<<"Este es un juego de picas y fijas con 6 digitos suerte!! \nEscribe un numero de 6 digitos diferentes \n";
     
   int adivina, a, b ,c , d ,e ,f ,g,q,h,j,k,l,m;  // se declaran las variables como enteras a usar
   int numero, u ,v ,w ,x ,y ,z;       // se declaran las variables como enteras a usar
   srand((unsigned)time(NULL));

   	 
   f = rand ()%9+1; // se toma f como un numero aleatorio
   e = rand ()%9+1;  // se toma a g como un numero aleatorio
   if(e==f)          // se pregunta si e es igual a f, esto con el fin de hacer que los digitos sean diferentes
   {
   	if(e==9)
   	{
   		e=e-1;
   	}
   	e = f+1;
   }
   
   d = rand ()%9+1;  //se toma a d como un numero aleatorio

   if((d==f)||(d==e)) // se pregunta si d es igual a f o a e
   {
    if(d==9)          // se pregunta si d es igual a 9, ya que si lo es no se va a poder sumarle en ese caso hay que restar
   {
   	d=d-2;            
   }
   
   if(d==1)           // en el caso de que d sea igual a 1 hay que sumarle ya que no sera posible restarle
   {
   	d=d+3;
   }
   	if(d==f)         // se verifica si d es igual a f
   	{
   		d=d-1;
   	}
   	if(d==e)         // se verifica si d es igual a e
   	{
   		d=d-2;
   		
   	}
   }
   c = rand ()%9+1; // se toma a c como un numero aleatorio
   if((c==f)||(c==e)||(c==d))
   {
   	if(c==9)
   	{
   		c=c-3;
   	}
   	if(c==1)
   	{
   		c=c+3;
   	}
   	if(c==d)
   	{
   		c=c-3;
   	}
   	if(c==e)
   	{
   		c=c-2;
   	}
   	if(c==f)
   	{
   		c=c-1;
   	}
   }
   b = rand ()%9+1;
   if ((b==f)||(b==e)||(b==d)||(b==c))
   {
   	if(b==9)
   	{
   		b=b-4;
   	}
   	if(b==1)
   	{
   		b=b+4;
   	}
   	if(b==c)
   	{
   		b=b-4;
   	}
   	if(b==d)
   	{
   		b=b-3;
   	}
   	if(b==e)
   	{
   		b=b-2;
   	}
   	if(b==f)
   	{
   		b=b-1;
   	}
   }
   a = rand ()%9+1;
   if((a==f)||(a==e)||(a==d)||(a==c)||(c==b))
   {
   	if(a==9)
   	{
   		a=a-5;
   	}
   	if(a==1)
   	{
   		a==a+5;
   	}
   	if(a==b)
   	{
   		a=a-5;
   	}
   	if(a==c)
   	{
   		a=a-4;
   	}
   	if(a==d)
   	{
   		a=a-3;
   	}
   	if(a==e)
   	{
   		a=a-2;
   	}
   	if(a==f)
   	{
   		a=a-1;
   	}
   }
   
   if((a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(a!=f)&&(b!=c)&&(b!=d)&&(b!=e)&&(b!=f)
      &&(c!=d)&&(c!=e)&&(c!=f)&&(d!=e)&&(d!=f)&&(e!=f))
   {
   	q=1;
   	cout<<"numero aleatorio generado con exito \n";
   }
   else
   {
   	q=0;
   	cout<<"el numero no se ha generado, intentalo de nuevo \n";
    return(numero);
   }


    
   h=e*10;
   j=d*100;
   k=c*1000;
   l=b*10000;
   m=a*100000;
    
   numero = h+j+k+l+m+f;
   if (numero<100000)
   {
   	numero=numero+100000;
   }
   //cout<<numero<<"\n";
   
   
   for(int i=1; i<=100 ; i=i+1) 
  {
   
   cin>>adivina;
   if((adivina<100000)||(adivina>999999))
   {
   	cout<<"ingresaste un numero que no contiene 6 digitos intentalo nuevamente!!! \n";
   }
   z=adivina%10;
   y=(adivina/10)%10;
   x=(adivina/100)%10;
   w=(adivina/1000)%10;
   v=(adivina/10000)%10;
   u=(adivina/100000)%10;
   //cout<<"numero "<<numero<<"\n"; 
   
    cout<<"intento numero :"<<i<<"\n";
   
   //a b c d e f
   //u v w x y z
   
   // en estos condicionales verificamos si existe una fija
   
   if ((a==u)&&(b!=v)&&(c!=w)&&(d!=x)&&(e!=y)&&(f!=z))
   {
   	cout<<"Tienes una fija \n";
   }
   if ((a!=u)&&(b==v)&&(c!=w)&&(d!=x)&&(e!=y)&&(f!=z))
   {
   	cout<<"Tienes una fija \n";
   }   
   if ((a!=u)&&(b!=v)&&(c==w)&&(d!=x)&&(e!=y)&&(f!=z))
   {
   	cout<<"Tienes una fija \n";
   }
   if ((a!=u)&&(b!=v)&&(c!=w)&&(d==x)&&(e!=y)&&(f!=z))
   {
   	cout<<"Tienes una fija \n";
   }
   if ((a!=u)&&(b!=v)&&(c!=w)&&(d!=x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes una fija \n";
   }
   if ((a!=u)&&(b!=v)&&(c!=w)&&(d!=x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes una fija \n";
   }
   
   // en estos condicionales verificamos si existen dos fijas
   
   if ((a==u)&&(b==v)&&(c!=w)&&(d!=x)&&(e!=y)&&(f!=z))
   {
   	cout<<"Tienes dos fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c==w)&&(d!=x)&&(e!=y)&&(f!=z))
   {
   	cout<<"Tienes dos fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c!=w)&&(d==x)&&(e!=y)&&(f!=z))
   {
   	cout<<"Tienes dos fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c!=w)&&(d!=x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes dos fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c!=w)&&(d!=x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes dos fijas \n";
   }
   if ((a!=u)&&(b==v)&&(c==w)&&(d!=x)&&(e!=y)&&(f!=z))
   {
   	cout<<"Tienes dos fijas \n";
   }
   if ((a!=u)&&(b==v)&&(c!=w)&&(d==x)&&(e!=y)&&(f!=z))
   {
   	cout<<"Tienes dos fijas \n";
   }
   if ((a!=u)&&(b==v)&&(c!=w)&&(d!=x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes dos fijas \n";
   }
   if ((a!=u)&&(b==v)&&(c!=w)&&(d!=x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes dos fijas \n";
   }
   if ((a!=u)&&(b!=v)&&(c==w)&&(d==x)&&(e!=y)&&(f!=z))
   {
   	cout<<"Tienes dos fijas \n";
   }
   if ((a!=u)&&(b!=v)&&(c==w)&&(d!=x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes dos fijas \n";
   }
   if ((a!=u)&&(b!=v)&&(c==w)&&(d!=x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes dos fijas \n";
   }
   
   if ((a!=u)&&(b!=v)&&(c!=w)&&(d==x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes dos fijas \n";
   }
   if ((a!=u)&&(b!=v)&&(c!=w)&&(d==x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes dos fijas \n";
   }
   if ((a!=u)&&(b!=v)&&(c!=w)&&(d!=x)&&(e==y)&&(f==z))
   {
   	cout<<"Tienes dos fijas \n";
   }
   
   // en estos condicionales verificamos si existen tres fijas
   
   
   if ((a==u)&&(b==v)&&(c==w)&&(d!=x)&&(e!=y)&&(f!=z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a==u)&&(b==v)&&(c!=w)&&(d==x)&&(e!=y)&&(f!=z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a==u)&&(b==v)&&(c!=w)&&(d!=x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a==u)&&(b==v)&&(c!=w)&&(d!=x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c==w)&&(d==x)&&(e!=y)&&(f!=z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c==w)&&(d!=x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c==w)&&(d!=x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c!=w)&&(d==x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c!=w)&&(d==x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c!=w)&&(d!=x)&&(e==y)&&(f==z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a!=u)&&(b==v)&&(c==w)&&(d==x)&&(e!=y)&&(f!=z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a!=u)&&(b==v)&&(c==w)&&(d!=x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a!=u)&&(b==v)&&(c==w)&&(d!=x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a!=u)&&(b==v)&&(c!=w)&&(d==x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a!=u)&&(b==v)&&(c!=w)&&(d==x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a!=u)&&(b!=v)&&(c==w)&&(d==x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a!=u)&&(b!=v)&&(c==w)&&(d!=x)&&(e==y)&&(f==z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   if ((a!=u)&&(b!=v)&&(c!=w)&&(d==x)&&(e==y)&&(f==z))
   {
   	cout<<"Tienes tres fijas \n";
   }
   
   //en estos condicionales se verificara si hay cuatro fijas
   
   
   if ((a==u)&&(b==v)&&(c==w)&&(d==x)&&(e!=y)&&(f!=z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a==u)&&(b==v)&&(c==w)&&(d!=x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a==u)&&(b==v)&&(c==w)&&(d!=x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a==u)&&(b==v)&&(c!=w)&&(d==x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a==u)&&(b==v)&&(c!=w)&&(d==x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a==u)&&(b==v)&&(c!=w)&&(d!=x)&&(e==y)&&(f==z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c==w)&&(d==x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c==w)&&(d==x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c!=w)&&(d==x)&&(e==y)&&(f==z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c==w)&&(d==x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c==w)&&(d==x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c==w)&&(d!=x)&&(e==y)&&(f==z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c!=w)&&(d==x)&&(e==y)&&(f==z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a!=u)&&(b==v)&&(c==w)&&(d==x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a!=u)&&(b==v)&&(c==w)&&(d==x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a!=u)&&(b==v)&&(c!=w)&&(d==x)&&(e==y)&&(f==z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   if ((a!=u)&&(b!=v)&&(c==w)&&(d==x)&&(e==y)&&(f==z))
   {
   	cout<<"Tienes cuatro fijas \n";
   }
   
   //En estos condicionales verificamos si hay 5 fijas
   
   if ((a==u)&&(b==v)&&(c==w)&&(d==x)&&(e==y)&&(f!=z))
   {
   	cout<<"Tienes cinco fijas \n";
   }
   if ((a==u)&&(b==v)&&(c==w)&&(d==x)&&(e!=y)&&(f==z))
   {
   	cout<<"Tienes cinco fijas \n";
   }
   if ((a==u)&&(b==v)&&(c==w)&&(d!=x)&&(e==y)&&(f==z))
   {
   	cout<<"Tienes cinco fijas \n";
   }
   if ((a==u)&&(b==v)&&(c!=w)&&(d==x)&&(e==y)&&(f==z))
   {
   	cout<<"Tienes cinco fijas \n";
   }
   if ((a==u)&&(b!=v)&&(c==w)&&(d==x)&&(e==y)&&(f==z))
   {
   	cout<<"Tienes cinco fijas \n";
   }
   if ((a!=u)&&(b==v)&&(c==w)&&(d==x)&&(e==y)&&(f==z))
   {
   	cout<<"Tienes cinco fijas \n";
   }
   
   // En este condicional se verifica si hay 6 fijas
   
   if ((a==u)&&(b==v)&&(c==w)&&(d==x)&&(e==y)&&(f==z))
   {
   	cout<<"Tienes seis fijas \n";
   	// en estos condicionales se verifica la cantidad de intentos para verificar cuantos hizo y hacer la publicacion respectiva
     if (i<=5)
   	{
   		cout<<"Acertaste en solo "<<i<< "  intentos excelente \n";
   	}
   	if ((i>5)&&(i<=10))
   	{
   		cout<<"Acertaste en "<<i<< "  intentos Aceptable \n";
   	}
   	if ((i>10)&&(i<=15))
   	{
   		cout<<"Acertaste en "<<i<< "  intentos tuviste un rendimiento bajo \n";
   	}
   	
   	if (i>15)
   	{
   		cout<<"Acertaste en "<<i<< " intentos Debes practicar mas \n";
   	}
   }
   
   // En estos condicionales verificaremos si hay 1 pica
   
   //a b c d e f
   //u v w x y z
   
   // verificamos la pica en a
   if(((a==v)&&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
    &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
    &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
    &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)
    &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||
	  ((a==w)&&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z)
	&&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
	&&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)
	&&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z) 
	&&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||
	 ((a==x)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z)
	&&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z)
	&&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
	&&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)
	&&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||
	 ((a==y)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z)
	&&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z)
	&&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z)
	&&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)
	&&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||
	 ((a==z)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)
	&&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)
	&&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)
	&&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)
	&&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)))
   {
     cout<<"tienes una pica \n";
   }
   
   // verificamos la pica en b
   //a b c d e f
   //u v w x y z
   
   if(((b==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z)
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
	 &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
	 &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)
	 &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||
	  ((b==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z)
	 &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
	 &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)
	 &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)
	 &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||
      ((b==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z)
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z)
	 &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
	 &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)
	 &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||
	  ((b==y)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z)
	 &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z)
	 &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z)
	 &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)
	 &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||
	  ((b==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y)
	 &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)
	 &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)
	 &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)
	 &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)))
   {
     cout<<"tienes una pica \n";
   }
   
   // verificamos la pica en c
   //a b c d e f
   //u v w x y z
   
   if(((c==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z)
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
	 &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
	 &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)
	 &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||
	  ((c==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z)
	 &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
	 &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
	 &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)
	 &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||
	  ((c==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z)
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z)
	 &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
	 &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)
	 &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||
	 ((c==y)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z)
	 &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z)
	 &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z)
	 &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)
	 &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||
	 ((c==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y)
	 &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)
	 &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)
	 &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)
	 &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y))) 
	 {
	   cout<<"tienes una pica \n";	
	 } 
   // verificamos la pica en d
   //a b c d e f
   //u v w x y z	
   if(((d==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z)  
	 &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
	 &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
	 &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)
	 &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||
	  ((d==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z)
	 &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
	 &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
	 &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)
	 &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) || 
	  ((d==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z)
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z)
	 &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
	 &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)
	 &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||
	  ((d==y)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z)
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z)
	 &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z)
	 &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)
	 &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||
	  ((d==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y)
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)
	 &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)
	 &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)
	 &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)))
	 {
	   cout<<"tienes una pica \n";	
	 } 
   // verificamos la pica en e
   //a b c d e f
   //u v w x y z

	if(((e==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z)  
	 &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
	 &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
	 &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
	 &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||
      ((e==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z)  
	 &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
	 &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
	 &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
	 &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) || 
      ((e==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z)  
	 &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z)
	 &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
	 &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)
	 &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||
      ((e==x)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z)  
	 &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z)
	 &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z)
	 &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
	 &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||
      ((e==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=x)  
	 &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y)&&(b!=x)
	 &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y)&&(c!=x)
	 &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)&&(d!=x)
	 &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)&&(f!=x))) 
	 {
	   cout<<"tienes una pica \n";	
	 }    
   // verificamos la pica en f
   //a b c d e f
   //u v w x y z   
   if(((f==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z)  
	 &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
	 &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
	 &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
	 &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)) ||
      ((f==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z)  
	 &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
	 &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
	 &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
	 &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)) ||   
      ((f==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z)  
	 &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z)
	 &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
	 &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)
	 &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)) ||   
      ((f==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z)  
	 &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z)
	 &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z)
	 &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
	 &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)) ||
      ((f==y)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z)  
	 &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z)
	 &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z)
	 &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z)
	 &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)))
	 {
	   cout<<"tienes una pica \n";	
	 }    
   
   // Ahora revisamos si existen dos picas
   //a b c d e f
   //u v w x y z
   // revisamos picas con a y b
 if(((a==v)&&(b==u)&&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)   
   &&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z) 
   &&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)
   &&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||
    ((a==w)&&(b==u)&&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
   &&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z) 
   &&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)
   &&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||
    ((a==x)&&(b==u)&&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z)
   &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z) 
   &&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)
   &&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||
    ((a==y)&&(b==u)&&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z)
   &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z) 
   &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)
   &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||
    ((a==z)&&(b==u)&&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)
   &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y) 
   &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)
   &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||
    ((a==v)&&(b==w)&&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z)
   &&(d!=u)&&(d!=x)&&(d!=y)&&(d!=z) 
   &&(e!=u)&&(e!=x)&&(e!=y)&&(e!=z)
   &&(f!=u)&&(f!=x)&&(f!=y)&&(f!=z)) ||
    ((a==x)&&(b==w)&&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z)
   &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z) 
   &&(e!=u)&&(e!=v)&&(e!=y)&&(e!=z)
   &&(f!=u)&&(f!=v)&&(f!=y)&&(f!=z)) ||
    ((a==y)&&(b==w)&&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z)
   &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=z) 
   &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)
   &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=z)) ||
    ((a==z)&&(b==w)&&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)
   &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y) 
   &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)
   &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||
    ((a==v)&&(b==x)&&(c!=u)&&(c!=w)&&(c!=y)&&(c!=z)
   &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z) 
   &&(e!=u)&&(e!=w)&&(e!=y)&&(e!=z)
   &&(f!=u)&&(f!=w)&&(f!=y)&&(f!=z)) ||
    ((a==w)&&(b==x)&&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z)
   &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z) 
   &&(e!=u)&&(e!=v)&&(e!=y)&&(e!=z)
   &&(f!=u)&&(f!=v)&&(f!=y)&&(f!=z)) ||
    ((a==y)&&(b==x)&&(c!=u)&&(c!=v)&&(c!=w)&&(c!=z)
   &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=z) 
   &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=z)
   &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=z)) ||
    ((a==z)&&(b==x)&&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y)
   &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y) 
   &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)
   &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)) ||
    ((a==v)&&(b==y)&&(c!=u)&&(c!=w)&&(c!=x)&&(c!=z)
   &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=z) 
   &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=z)
   &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=z)) ||
    ((a==w)&&(b==y)&&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z)
   &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=z) 
   &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)
   &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=z)) ||
    ((a==x)&&(b==y)&&(c!=u)&&(c!=v)&&(c!=w)&&(c!=z)
   &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=z) 
   &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=z)
   &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=z)) ||
    ((a==z)&&(b==y)&&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x)
   &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x) 
   &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)
   &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)) ||
    ((a==v)&&(b==z)&&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y)
   &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y) 
   &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)
   &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||
    ((a==w)&&(b==z)&&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)
   &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y) 
   &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)
   &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||
    ((a==x)&&(b==z)&&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y)
   &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y) 
   &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)
   &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)) ||
    ((a==y)&&(b==z)&&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x)
   &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x) 
   &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)
   &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)))
   {
   	 cout<<"tienes dos picas \n";
   }
   
   //a b c d e f
   //u v w x y z
   // revisamos picas con a y c

   if(((a==v)&&(c==u)&&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z) 
     &&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z) 
     &&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||
      ((a==w)&&(c==u)&&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z) 
     &&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z) 
     &&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||
      ((a==x)&&(c==u)&&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z) 
     &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z) 
     &&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(c==u)&&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z) 
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z) 
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||
      ((a==z)&&(c==u)&&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y) 
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y) 
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||
      ((a==w)&&(c==v)&&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z) 
     &&(d!=u)&&(d!=x)&&(d!=y)&&(d!=z) 
     &&(e!=u)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=x)&&(f!=y)&&(f!=z)) ||
      ((a==x)&&(c==v)&&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z) 
     &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z) 
     &&(e!=u)&&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(c==v)&&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z) 
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=z) 
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=z)) ||
      ((a==z)&&(c==v)&&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y) 
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y) 
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||	  
      ((a==v)&&(c==x)&&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z) 
     &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z) 
     &&(e!=u)&&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=y)&&(f!=z)) ||  
      ((a==w)&&(c==x)&&(b!=u)&&(b!=v)&&(b!=y)&&(b!=z) 
     &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z) 
     &&(e!=u)&&(e!=v)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(c==x)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=z) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=z) 
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=z)) ||   
      ((a==z)&&(c==x)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y) 
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)) ||   
      ((a==v)&&(c==y)&&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z) 
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=z) 
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=z)) ||   
      ((a==w)&&(c==y)&&(b!=u)&&(b!=v)&&(b!=x)&&(b!=z) 
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=z) 
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=z)) ||    
      ((a==x)&&(c==y)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=z) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=z) 
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=z)) ||    
      ((a==z)&&(c==y)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x) 
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)) ||          
      ((a==v)&&(c==z)&&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y) 
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y) 
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||       
      ((a==w)&&(c==z)&&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y) 
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y) 
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||          
      ((a==x)&&(c==z)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y) 
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)) ||             
      ((a==y)&&(c==z)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x) 
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)))
   {
   	 cout<<"tienes dos picas \n";
   }   
   
   //a b c d e f
   //u v w x y z
   // revisamos picas con a y d
   
   if(((a==v)&&(d==u)&&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z) 
     &&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||   
      ((a==w)&&(d==u)&&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z) 
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||
      ((a==x)&&(d==u)&&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z) 
     &&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z) 
     &&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(d==u)&&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z) 
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||   
      ((a==z)&&(d==u)&&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y) 
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||   
      ((a==w)&&(d==v)&&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(e!=u)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=x)&&(f!=y)&&(f!=z)) ||   
      ((a==x)&&(d==v)&&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=w)&&(c!=y)&&(c!=z) 
     &&(e!=u)&&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=y)&&(f!=z)) ||   
      ((a==y)&&(d==v)&&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=z) 
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=z)) ||   
      ((a==z)&&(d==v)&&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y) 
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||   
      ((a==v)&&(d==w)&&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(e!=u)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=x)&&(f!=y)&&(f!=z)) ||   
      ((a==x)&&(d==w)&&(b!=u)&&(b!=v)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z) 
     &&(e!=u)&&(e!=v)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=y)&&(f!=z)) ||   
      ((a==y)&&(d==w)&&(b!=u)&&(b!=v)&&(b!=x)&&(b!=z) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z) 
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=z)) ||   
      ((a==z)&&(d==w)&&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y) 
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||   
      ((a==v)&&(d==y)&&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=z) 
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=z)) ||   
      ((a==w)&&(d==y)&&(b!=u)&&(b!=v)&&(b!=x)&&(b!=z) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z) 
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=z)) ||   
      ((a==x)&&(d==y)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=z) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=z) 
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=z)) ||   
      ((a==z)&&(d==y)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x) 
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)) ||   
      ((a==v)&&(d==z)&&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y) 
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||   
      ((a==w)&&(d==z)&&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y) 
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||   
      ((a==x)&&(d==z)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y) 
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)) ||   
      ((a==y)&&(d==z)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x) 
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)))
   {
   	 cout<<"tienes dos picas \n";
   }      
   //a b c d e f
   //u v w x y z
   // revisamos picas con a y e
   
   if(((a==v)&&(e==u)&&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z) 
     &&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) || 
      ((a==w)&&(e==u)&&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z) 
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||    
      ((a==x)&&(e==u)&&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z) 
     &&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z) 
     &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||    
      ((a==y)&&(e==u)&&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z) 
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||    
      ((a==z)&&(e==u)&&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y) 
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||    
      ((a==w)&&(e==v)&&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(d!=u)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=x)&&(f!=y)&&(f!=z)) ||    
      ((a==x)&&(e==v)&&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=w)&&(c!=y)&&(c!=z) 
     &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=w)&&(f!=y)&&(f!=z)) ||    
      ((a==y)&&(e==v)&&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=z) 
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=z)) ||    
      ((a==z)&&(e==v)&&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y) 
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||    
      ((a==v)&&(e==w)&&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(d!=u)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=x)&&(f!=y)&&(f!=z)) ||    
      ((a==x)&&(e==w)&&(b!=u)&&(b!=v)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z) 
     &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=v)&&(f!=y)&&(f!=z)) ||    
      ((a==y)&&(e==w)&&(b!=u)&&(b!=v)&&(b!=x)&&(b!=z) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z) 
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=z)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=z)) ||    
      ((a==z)&&(e==w)&&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y) 
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||    
      ((a==v)&&(e==x)&&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=w)&&(c!=y)&&(c!=z) 
     &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=w)&&(f!=y)&&(f!=z)) ||    
      ((a==w)&&(e==x)&&(b!=u)&&(b!=v)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z) 
     &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=v)&&(f!=y)&&(f!=z)) ||       
      ((a==y)&&(e==x)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=z) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=z) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=z)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=z)) ||       
      ((a==z)&&(e==x)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)) ||       
      ((a==v)&&(e==z)&&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y) 
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||       
      ((a==w)&&(e==z)&&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y) 
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||          
      ((a==x)&&(e==z)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)) ||          
      ((a==y)&&(e==z)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)))          
   {
   	 cout<<"tienes dos picas \n";
   }         
   //a b c d e f
   //u v w x y z
   // revisamos picas con a y f   
   
   if(((a==v)&&(f==u)&&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z) 
     &&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)) ||    
      ((a==w)&&(f==u)&&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z) 
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)) || 
      ((a==x)&&(f==u)&&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z) 
     &&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z) 
     &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)) || 
      ((a==y)&&(f==u)&&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z) 
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)) || 
      ((a==z)&&(f==u)&&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y) 
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)) || 
      ((a==w)&&(f==v)&&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(d!=u)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=x)&&(e!=y)&&(e!=z)) || 
      ((a==x)&&(f==v)&&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=w)&&(c!=y)&&(c!=z) 
     &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=w)&&(e!=y)&&(e!=z)) || 
      ((a==y)&&(f==v)&&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=z) 
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=z)) || 
      ((a==z)&&(f==v)&&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y) 
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)) || 
      ((a==v)&&(f==w)&&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(d!=u)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=x)&&(e!=y)&&(e!=z)) || 
      ((a==x)&&(f==w)&&(b!=u)&&(b!=v)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z) 
     &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=y)&&(e!=z)) || 
      ((a==y)&&(f==w)&&(b!=u)&&(b!=v)&&(b!=x)&&(b!=z) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z) 
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)) || 
      ((a==z)&&(f==w)&&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y) 
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)) || 
      ((a==v)&&(f==x)&&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=w)&&(c!=y)&&(c!=z) 
     &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=w)&&(e!=y)&&(e!=z)) || 
      ((a==w)&&(f==x)&&(b!=u)&&(b!=v)&&(b!=y)&&(b!=z) 
     &&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z) 
     &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=y)&&(e!=z)) || 
      ((a==y)&&(f==x)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=z) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=z) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=z)) || 
      ((a==z)&&(f==x)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)) || 
      ((a==v)&&(f==y)&&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=z) 
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=z)) ||   
      ((a==w)&&(f==y)&&(b!=u)&&(b!=v)&&(b!=x)&&(b!=z) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z) 
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)) ||   
      ((a==x)&&(f==y)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=z) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=z) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=z)) ||   
      ((a==z)&&(f==y)&&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)))   
   {
   	 cout<<"tienes dos picas \n";
   }     
   
   //a b c d e f
   //u v w x y z
   // revisamos picas con b y c   
   
   if(((b==w)&&(c==u)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||      
      ((b==x)&&(c==u)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||         
      ((b==y)&&(c==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||         
      ((b==z)&&(c==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||         
      ((b==u)&&(c==v)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||       
      ((b==w)&&(c==v)&&(a!=u)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(d!=u)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=x)&&(f!=y)&&(f!=z)) ||          
      ((b==x)&&(c==v)&&(a!=u)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=y)&&(f!=z)) ||          
      ((b==y)&&(c==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=z)) ||          
      ((b==z)&&(c==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||          
      ((b==u)&&(c==x)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||           
      ((b==w)&&(c==x)&&(a!=u)&&(a!=v)&&(a!=y)&&(a!=z) 
     &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=y)&&(f!=z)) ||           
      ((b==y)&&(c==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=z) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=z)) ||           
      ((b==z)&&(c==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y) 
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)) ||           	 
	  ((b==u)&&(c==y)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z)    
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) || 
      ((b==w)&&(c==y)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=z)    
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=z)) || 
      ((b==x)&&(c==y)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=z)    
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=z)) ||    
      ((b==z)&&(c==y)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x)    
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)) ||       
      ((b==u)&&(c==z)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y)    
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||       
      ((b==w)&&(c==z)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y)    
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||       
      ((b==x)&&(c==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y)    
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)) ||       
      ((b==y)&&(c==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x)    
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)))   
   {
   	 cout<<"tienes dos picas \n";
   }     

   //a b c d e f
   //u v w x y z
   // revisamos picas con b y d   

   if(((b==w)&&(d==u)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
      ((b==x)&&(d==u)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||     
      ((b==y)&&(d==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||     
      ((b==z)&&(d==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||    
	  ((b==u)&&(d==v)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||      
      ((b==w)&&(d==v)&&(a!=u)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(e!=u)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
      ((b==x)&&(d==v)&&(a!=u)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(c!=u)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(e!=u)&&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=y)&&(f!=z)) ||     
      ((b==y)&&(d==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=z)) ||     
      ((b==z)&&(d==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||     
      ((b==u)&&(d==w)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
      ((b==x)&&(d==w)&&(a!=u)&&(a!=v)&&(a!=y)&&(a!=z) 
     &&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z)
     &&(e!=u)&&(e!=v)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=y)&&(f!=z)) ||     
      ((b==y)&&(d==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=z) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=z)) ||     
      ((b==z)&&(d==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||     
      ((b==u)&&(d==y)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||     
      ((b==w)&&(d==y)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=z) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=z)) ||     
      ((b==x)&&(d==y)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=z) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=z)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=z)) ||     
      ((b==z)&&(d==y)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)) ||     
      ((b==u)&&(d==z)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||     
      ((b==w)&&(d==z)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||     
      ((b==x)&&(d==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)) ||     
      ((b==y)&&(d==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)))
   {
   	 cout<<"tienes dos picas \n";
   }     

   //a b c d e f
   //u v w x y z
   // revisamos picas con b y e   

   if(((b==w)&&(e==u)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
      ((b==x)&&(e==u)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||    
      ((b==y)&&(e==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||    
      ((b==z)&&(e==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||    
      ((b==u)&&(e==v)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||    
      ((b==w)&&(e==v)&&(a!=u)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(d!=u)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=x)&&(f!=y)&&(f!=z)) ||    
      ((b==x)&&(e==v)&&(a!=u)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(c!=u)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=w)&&(f!=y)&&(f!=z)) ||    
      ((b==y)&&(e==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=z)) ||    
      ((b==z)&&(e==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||    
      ((b==u)&&(e==w)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||    
      ((b==x)&&(e==w)&&(a!=u)&&(a!=v)&&(a!=y)&&(a!=z) 
     &&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z)
     &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=v)&&(f!=y)&&(f!=z)) ||    
      ((b==y)&&(e==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=z) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z)
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=z)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=z)) ||    
      ((b==z)&&(e==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||    
      ((b==u)&&(e==x)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||    
      ((b==w)&&(e==x)&&(a!=u)&&(a!=v)&&(a!=y)&&(a!=z) 
     &&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z)
     &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=v)&&(f!=y)&&(f!=z)) ||    
      ((b==y)&&(e==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=z) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=z)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=z)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=z)) ||    
      ((b==z)&&(e==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)) ||    
      ((b==u)&&(e==z)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||    
      ((b==w)&&(e==z)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||    
      ((b==x)&&(e==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)) ||    
      ((b==y)&&(e==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)))    
   {
   	 cout<<"tienes dos picas \n";
   }     

   //a b c d e f
   //u v w x y z
   // revisamos picas con b y f   

   if(((b==w)&&(f==u)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)) ||     
      ((b==x)&&(f==u)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)) ||     
      ((b==y)&&(f==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)) ||     
      ((b==z)&&(f==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)) ||     
      ((b==u)&&(f==v)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)) ||     
      ((b==w)&&(f==v)&&(a!=u)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(d!=u)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=x)&&(e!=y)&&(e!=z)) ||     
      ((b==x)&&(f==v)&&(a!=u)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(c!=u)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=w)&&(e!=y)&&(e!=z)) ||     
      ((b==y)&&(f==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=z)) ||     
      ((b==z)&&(f==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)) ||     
      ((b==u)&&(f==w)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)) ||     
      ((b==x)&&(f==w)&&(a!=u)&&(a!=v)&&(a!=y)&&(a!=z) 
     &&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z)
     &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=y)&&(e!=z)) ||     
      ((b==y)&&(f==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=z) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z)
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)) ||     
      ((b==z)&&(f==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)) ||     
      ((b==u)&&(f==x)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)) ||     
      ((b==w)&&(f==x)&&(a!=u)&&(a!=v)&&(a!=y)&&(a!=z) 
     &&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z)
     &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=y)&&(e!=z)) ||     
      ((b==y)&&(f==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=z) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=z)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=z)) ||     
      ((b==z)&&(f==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)) ||     
      ((b==u)&&(f==y)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)) ||     
      ((b==w)&&(f==y)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=z) 
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z)
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)) ||     
      ((b==x)&&(f==y)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=z) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=z)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=z)) ||     
      ((b==z)&&(f==y)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x) 
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)))
   {
   	 cout<<"tienes dos picas \n";
   }   
   
   //a b c d e f
   //u v w x y z
   // revisamos picas con c y d
   if(((c==v)&&(d==u)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
   	  ((c==x)&&(d==u)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||     
   	  ((c==y)&&(d==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||     
   	  ((c==z)&&(d==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||     
   	  ((c==u)&&(d==v)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
   	  ((c==x)&&(d==v)&&(a!=u)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(e!=u)&&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=y)&&(f!=z)) ||     
   	  ((c==y)&&(d==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=z)) ||     
   	  ((c==z)&&(d==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||     
   	  ((c==u)&&(d==w)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
   	  ((c==v)&&(d==w)&&(a!=u)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(e!=u)&&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
   	  ((c==x)&&(d==w)&&(a!=u)&&(a!=v)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=y)&&(b!=z)
     &&(e!=u)&&(e!=v)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=y)&&(f!=z)) ||     
   	  ((c==y)&&(d==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=z)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=z)) ||     
   	  ((c==z)&&(d==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||     
   	  ((c==u)&&(d==y)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||     
   	  ((c==v)&&(d==y)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=z)) ||     
   	  ((c==x)&&(d==y)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=z)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=z)) ||     
 	  ((c==z)&&(d==y)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)) ||     
 	  ((c==u)&&(d==z)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||     
 	  ((c==v)&&(d==z)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||     
 	  ((c==x)&&(d==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)) ||     
 	  ((c==y)&&(d==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x))) 
   {
   	 cout<<"tienes dos picas \n";
   }       
     	      
   //a b c d e f
   //u v w x y z
   // revisamos picas con c y e
   if(((c==v)&&(e==u)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
      ((c==x)&&(e==u)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||     
      ((c==y)&&(e==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||     
      ((c==z)&&(e==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||     
      ((c==u)&&(e==v)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
      ((c==x)&&(e==v)&&(a!=u)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=w)&&(f!=y)&&(f!=z)) ||     
      ((c==y)&&(e==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=z)) ||     
      ((c==z)&&(e==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||     
      ((c==u)&&(e==w)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
      ((c==v)&&(e==w)&&(a!=u)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(d!=u)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
      ((c==x)&&(e==w)&&(a!=u)&&(a!=v)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=y)&&(b!=z)
     &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=v)&&(f!=y)&&(f!=z)) ||     
      ((c==y)&&(e==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=z)
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=z)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=z)) ||     
      ((c==z)&&(e==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y)
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||     
      ((c==u)&&(e==x)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||     
      ((c==v)&&(e==x)&&(a!=u)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=w)&&(f!=y)&&(f!=z)) ||     
      ((c==y)&&(e==x)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=z)) ||     
      ((c==z)&&(e==x)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||     
      ((c==u)&&(e==z)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||     
      ((c==v)&&(e==z)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||     
      ((c==x)&&(e==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)) ||     
      ((c==y)&&(e==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=x)))     

   {
   	 cout<<"tienes dos picas \n";
   }       
     	      
   //a b c d e f
   //u v w x y z
   // revisamos picas con c y f

   if(((c==v)&&(f==u)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)) ||     
      ((c==x)&&(f==u)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)) ||     
      ((c==y)&&(f==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)) ||     
      ((c==z)&&(f==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)) ||     
      ((c==u)&&(f==v)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)) ||     
      ((c==x)&&(f==v)&&(a!=u)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=w)&&(e!=y)&&(e!=z)) ||     
      ((c==y)&&(f==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=z)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=z)) ||     
      ((c==z)&&(f==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)) ||     
      ((c==u)&&(f==w)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)) ||     
      ((c==v)&&(f==w)&&(a!=u)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(d!=u)&&(d!=x)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=x)&&(e!=y)&&(e!=z)) ||     
      ((c==x)&&(f==w)&&(a!=u)&&(a!=v)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=y)&&(b!=z)
     &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=y)&&(e!=z)) ||     
      ((c==y)&&(f==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=z)
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)) ||     
      ((c==z)&&(f==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y)
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)) ||     
      ((c==u)&&(f==x)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)) ||     
      ((c==v)&&(f==x)&&(a!=u)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z)
     &&(e!=u)&&(e!=w)&&(e!=y)&&(e!=z)) ||     
      ((c==y)&&(f==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=z)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=z)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=z)) ||     
      ((c==z)&&(f==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)) ||     
      ((c==u)&&(f==z)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)) ||     
      ((c==v)&&(f==z)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)) ||     
      ((c==x)&&(f==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)) ||     
      ((c==y)&&(f==z)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=x)))     

   {
   	 cout<<"tienes dos picas \n";
   }       
     	      
   //a b c d e f
   //u v w x y z
   // revisamos picas con d y e

   if(((d==v)&&(e==u)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
      ((d==w)&&(e==u)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
      ((d==y)&&(e==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=z)) ||     
      ((d==z)&&(e==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||     
      ((d==u)&&(e==v)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(f!=w)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
      ((d==w)&&(e==v)&&(a!=u)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(f!=u)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
      ((d==y)&&(e==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=z)) ||         
      ((d==z)&&(e==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||     
      ((d==u)&&(e==w)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(f!=v)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
      ((d==v)&&(e==w)&&(a!=u)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(f!=u)&&(f!=x)&&(f!=y)&&(f!=z)) ||     
      ((d==y)&&(e==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=z)
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=z)) ||     
      ((d==z)&&(e==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y)
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||     
      ((d==u)&&(e==x)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(f!=v)&&(f!=w)&&(f!=y)&&(f!=z)) ||     
      ((d==v)&&(e==x)&&(a!=u)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(c!=u)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(f!=u)&&(f!=w)&&(f!=y)&&(f!=z)) ||     
      ((d==w)&&(e==x)&&(a!=u)&&(a!=v)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=y)&&(b!=z)
     &&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z)
     &&(f!=u)&&(f!=v)&&(f!=y)&&(f!=z)) ||     
      ((d==y)&&(e==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=z)
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=z)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=z)) ||     
      ((d==z)&&(e==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y)
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y)
     &&(f!=u)&&(f!=v)&&(f!=w)&&(f!=y)) ||     
      ((d==u)&&(e==z)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(f!=v)&&(f!=w)&&(f!=x)&&(f!=y)) ||     
      ((d==v)&&(e==z)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(f!=u)&&(f!=w)&&(f!=x)&&(f!=y)) ||     
      ((d==w)&&(e==z)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y)
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=y)) ||     
      ((d==y)&&(e==z)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=w) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=w)
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=w)
     &&(f!=u)&&(f!=v)&&(f!=x)&&(f!=w)) )

   {
   	 cout<<"tienes dos picas \n";
   }       
     	      
   //a b c d e f
   //u v w x y z
   // revisamos picas con d y f

   if(((d==v)&&(f==u)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)) ||     
      ((d==w)&&(f==u)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)) ||     
      ((d==y)&&(f==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)) ||     
      ((d==z)&&(f==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=y)) ||     
      ((d==u)&&(f==v)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(e!=w)&&(e!=x)&&(e!=y)&&(e!=z)) ||     
      ((d==w)&&(f==v)&&(a!=u)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(e!=u)&&(e!=x)&&(e!=y)&&(e!=z)) ||     
      ((d==y)&&(f==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=z)) ||     
      ((d==z)&&(f==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=y)) ||     
      ((d==u)&&(f==w)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(e!=v)&&(e!=x)&&(e!=y)&&(e!=z)) ||     
      ((d==v)&&(f==w)&&(a!=u)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(e!=u)&&(e!=x)&&(e!=y)&&(e!=z)) ||     
      ((d==y)&&(f==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=z)
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)) ||     
      ((d==z)&&(f==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y)
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y)) ||     
      ((d==u)&&(f==x)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(e!=v)&&(e!=w)&&(e!=y)&&(e!=z)) ||     
      ((d==v)&&(f==x)&&(a!=u)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(c!=u)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(e!=u)&&(e!=w)&&(e!=y)&&(e!=z)) ||     
      ((d==w)&&(f==x)&&(a!=u)&&(a!=v)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=y)&&(b!=z)
     &&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z)
     &&(e!=u)&&(e!=v)&&(e!=y)&&(e!=z)) ||     
	  ((d==y)&&(f==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=z)
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=z)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=z)) ||     
	  ((d==z)&&(f==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y)
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y)
     &&(e!=u)&&(e!=v)&&(e!=w)&&(e!=y)) ||     
	  ((d==u)&&(f==y)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(e!=v)&&(e!=w)&&(e!=x)&&(e!=z)) ||     
	  ((d==v)&&(f==y)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(e!=u)&&(e!=w)&&(e!=x)&&(e!=z)) ||     
	  ((d==w)&&(f==y)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=z)
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=z)) ||     
	  ((d==z)&&(f==y)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y)
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)
     &&(e!=u)&&(e!=v)&&(e!=x)&&(e!=y))) 

   {
   	 cout<<"tienes dos picas \n";
   }       
     	      
   //a b c d e f
   //u v w x y z
   // revisamos picas con e y f

   if(((e==v)&&(f==u)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)) ||     
      ((e==w)&&(f==u)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)) || 
      ((e==x)&&(f==u)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)) || 
      ((e==z)&&(f==u)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=y)) || 
      ((e==u)&&(f==v)&&(a!=w)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=w)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=w)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(d!=w)&&(d!=x)&&(d!=y)&&(d!=z)) || 
      ((e==w)&&(f==v)&&(a!=u)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(d!=u)&&(d!=x)&&(d!=y)&&(d!=z)) || 
      ((e==x)&&(f==v)&&(a!=u)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(c!=u)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z)) || 
      ((e==z)&&(f==v)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=y)
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=y)
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=y)) || 
      ((e==u)&&(f==w)&&(a!=v)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=v)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(d!=v)&&(d!=x)&&(d!=y)&&(d!=z)) || 
      ((e==v)&&(f==w)&&(a!=u)&&(a!=x)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=x)&&(b!=y)&&(b!=z)
     &&(c!=u)&&(c!=x)&&(c!=y)&&(c!=z)
     &&(d!=u)&&(d!=x)&&(d!=y)&&(d!=z)) || 
      ((e==x)&&(f==w)&&(a!=u)&&(a!=v)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=y)&&(b!=z)
     &&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z)
     &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z)) || 
      ((e==z)&&(f==w)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=y) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=y)
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=y)
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=y)) || 
      ((e==u)&&(f==x)&&(a!=v)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(c!=v)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(d!=v)&&(d!=w)&&(d!=y)&&(d!=z)) || 
      ((e==v)&&(f==x)&&(a!=u)&&(a!=w)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=y)&&(b!=z)
     &&(c!=u)&&(c!=w)&&(c!=y)&&(c!=z)
     &&(d!=u)&&(d!=w)&&(d!=y)&&(d!=z)) || 
      ((e==w)&&(f==x)&&(a!=u)&&(a!=v)&&(a!=y)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=y)&&(b!=z)
     &&(c!=u)&&(c!=v)&&(c!=y)&&(c!=z)
     &&(d!=u)&&(d!=v)&&(d!=y)&&(d!=z)) || 
      ((e==z)&&(f==x)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=y) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=y)
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=y)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=y)) || 
      ((e==u)&&(f==y)&&(a!=v)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=v)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(c!=v)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(d!=v)&&(d!=w)&&(d!=x)&&(d!=z)) ||
      ((e==v)&&(f==y)&&(a!=u)&&(a!=w)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=w)&&(b!=x)&&(b!=z)
     &&(c!=u)&&(c!=w)&&(c!=x)&&(c!=z)
     &&(d!=u)&&(d!=w)&&(d!=x)&&(d!=z)) ||
      ((e==w)&&(f==y)&&(a!=u)&&(a!=v)&&(a!=x)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=x)&&(b!=z)
     &&(c!=u)&&(c!=v)&&(c!=x)&&(c!=z)
     &&(d!=u)&&(d!=v)&&(d!=x)&&(d!=z)) ||
      ((e==x)&&(f==y)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=z) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=z)
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=z)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=z)) ||
      ((e==z)&&(f==y)&&(a!=u)&&(a!=v)&&(a!=w)&&(a!=x) 
     &&(b!=u)&&(b!=v)&&(b!=w)&&(b!=x)
     &&(c!=u)&&(c!=v)&&(c!=w)&&(c!=x)
     &&(d!=u)&&(d!=v)&&(d!=w)&&(d!=x)) )

   {
   	 cout<<"tienes dos picas \n";
   }       

   // Ahora verificaremos si existen 3 picas
   //a b c d e f
   //u v w x y z
  
   // verificamos picas con a b y c

   if(((a==v)&&(b==u)&&(c==x)&&(d!=w)&&(d!=y)&&(d!=z) 
     &&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=w)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(b==u)&&(c==x)&&(d!=v)&&(d!=w)&&(d!=z) 
     &&(e!=v)&&(e!=w)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=z)) ||
      ((a==z)&&(b==u)&&(c==x)&&(d!=v)&&(d!=w)&&(d!=y) 
     &&(e!=v)&&(e!=w)&&(e!=y)
     &&(f!=v)&&(f!=w)&&(f!=y)) ||

      ((a==v)&&(b==w)&&(c==x)&&(d!=u)&&(d!=y)&&(d!=z) 
     &&(e!=u)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(b==w)&&(c==x)&&(d!=u)&&(d!=v)&&(d!=z) 
     &&(e!=u)&&(e!=v)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=z)) ||
      ((a==z)&&(b==w)&&(c==x)&&(d!=u)&&(d!=v)&&(d!=y) 
     &&(e!=u)&&(e!=v)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=y)) ||

      ((a==v)&&(b==y)&&(c==x)&&(d!=u)&&(d!=w)&&(d!=z) 
     &&(e!=u)&&(e!=w)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=z)) ||
      ((a==w)&&(b==y)&&(c==x)&&(d!=u)&&(d!=v)&&(d!=z) 
     &&(e!=u)&&(e!=v)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=z)) ||
      ((a==z)&&(b==y)&&(c==x)&&(d!=u)&&(d!=v)&&(d!=w) 
     &&(e!=u)&&(e!=v)&&(e!=w)
     &&(f!=u)&&(f!=v)&&(f!=w)) ||
  
      ((a==v)&&(b==z)&&(c==x)&&(d!=u)&&(d!=w)&&(d!=y) 
     &&(e!=u)&&(e!=w)&&(e!=y)
     &&(f!=u)&&(f!=w)&&(f!=y)) ||
      ((a==w)&&(b==z)&&(c==x)&&(d!=u)&&(d!=v)&&(d!=y) 
     &&(e!=u)&&(e!=v)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=y)) ||
      ((a==y)&&(b==z)&&(c==x)&&(d!=u)&&(d!=v)&&(d!=w) 
     &&(e!=u)&&(e!=v)&&(e!=w)
     &&(f!=u)&&(f!=v)&&(f!=w)) ||
  
      ((a==v)&&(b==w)&&(c==u)&&(d!=x)&&(d!=y)&&(d!=z) 
     &&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=x)&&(f!=y)&&(f!=z)) ||
      ((a==x)&&(b==w)&&(c==u)&&(d!=v)&&(d!=y)&&(d!=z) 
     &&(e!=v)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(b==w)&&(c==u)&&(d!=v)&&(d!=x)&&(d!=z) 
     &&(e!=v)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=x)&&(f!=z)) ||
      ((a==z)&&(b==w)&&(c==u)&&(d!=v)&&(d!=x)&&(d!=y) 
     &&(e!=v)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=x)&&(f!=y)) ||

  
      ((a==v)&&(b==w)&&(c==u)&&(d!=x)&&(d!=y)&&(d!=z) 
     &&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=x)&&(f!=y)&&(f!=z)) ||
      ((a==x)&&(b==w)&&(c==u)&&(d!=v)&&(d!=y)&&(d!=z) 
     &&(e!=v)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(b==w)&&(c==u)&&(d!=v)&&(d!=x)&&(d!=z) 
     &&(e!=v)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=x)&&(f!=z)) ||
      ((a==z)&&(b==w)&&(c==u)&&(d!=v)&&(d!=x)&&(d!=y) 
     &&(e!=v)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=x)&&(f!=y)) ||
  
      ((a==v)&&(b==x)&&(c==u)&&(d!=w)&&(d!=y)&&(d!=z) 
     &&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=w)&&(f!=y)&&(f!=z)) ||
      ((a==w)&&(b==x)&&(c==u)&&(d!=v)&&(d!=y)&&(d!=z) 
     &&(e!=v)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(b==x)&&(c==u)&&(d!=v)&&(d!=w)&&(d!=z) 
     &&(e!=v)&&(e!=w)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=z)) ||
      ((a==z)&&(b==x)&&(c==u)&&(d!=v)&&(d!=w)&&(d!=y) 
     &&(e!=v)&&(e!=w)&&(e!=y)
     &&(f!=v)&&(f!=w)&&(f!=y)) ||

      ((a==v)&&(b==y)&&(c==u)&&(d!=w)&&(d!=x)&&(d!=z) 
     &&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=w)&&(f!=x)&&(f!=z)) ||
      ((a==w)&&(b==y)&&(c==u)&&(d!=v)&&(d!=x)&&(d!=z) 
     &&(e!=v)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=x)&&(f!=z)) ||
      ((a==x)&&(b==y)&&(c==u)&&(d!=v)&&(d!=w)&&(d!=z) 
     &&(e!=v)&&(e!=w)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=z)) ||
      ((a==z)&&(b==y)&&(c==u)&&(d!=v)&&(d!=w)&&(d!=x) 
     &&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=v)&&(f!=w)&&(f!=x)) ||
  
      ((a==v)&&(b==z)&&(c==u)&&(d!=w)&&(d!=x)&&(d!=y) 
     &&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=w)&&(f!=x)&&(f!=y)) ||
      ((a==w)&&(b==z)&&(c==u)&&(d!=v)&&(d!=x)&&(d!=y) 
     &&(e!=v)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=x)&&(f!=y)) ||
      ((a==x)&&(b==z)&&(c==u)&&(d!=v)&&(d!=w)&&(d!=y) 
     &&(e!=v)&&(e!=w)&&(e!=y)
     &&(f!=v)&&(f!=w)&&(f!=y)) ||
      ((a==y)&&(b==z)&&(c==u)&&(d!=v)&&(d!=w)&&(d!=x) 
     &&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=v)&&(f!=w)&&(f!=x)) ||

  
      ((a==w)&&(b==u)&&(c==v)&&(d!=x)&&(d!=y)&&(d!=z) 
     &&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=x)&&(f!=y)&&(f!=z)) ||
      ((a==x)&&(b==u)&&(c==v)&&(d!=w)&&(d!=y)&&(d!=z) 
     &&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=w)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(b==u)&&(c==v)&&(d!=w)&&(d!=x)&&(d!=z) 
     &&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=w)&&(f!=x)&&(f!=z)) ||
      ((a==z)&&(b==u)&&(c==v)&&(d!=w)&&(d!=x)&&(d!=y) 
     &&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=w)&&(f!=x)&&(f!=y)) ||

      ((a==x)&&(b==w)&&(c==v)&&(d!=u)&&(d!=y)&&(d!=z) 
     &&(e!=u)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(b==w)&&(c==v)&&(d!=u)&&(d!=x)&&(d!=z) 
     &&(e!=u)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=x)&&(f!=z)) ||
      ((a==z)&&(b==w)&&(c==v)&&(d!=u)&&(d!=x)&&(d!=y) 
     &&(e!=u)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=x)&&(f!=y)) ||	 

      ((a==w)&&(b==x)&&(c==v)&&(d!=u)&&(d!=y)&&(d!=z) 
     &&(e!=u)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=y)&&(f!=z)) ||	 	   
      ((a==y)&&(b==x)&&(c==v)&&(d!=u)&&(d!=w)&&(d!=z) 
     &&(e!=u)&&(e!=w)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=z)) ||	 	     
      ((a==z)&&(b==x)&&(c==v)&&(d!=u)&&(d!=w)&&(d!=y) 
     &&(e!=u)&&(e!=w)&&(e!=y)
     &&(f!=u)&&(f!=w)&&(f!=y)) ||	 	       

      ((a==w)&&(b==y)&&(c==v)&&(d!=u)&&(d!=x)&&(d!=z) 
     &&(e!=u)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=x)&&(f!=z)) ||	 	       
      ((a==x)&&(b==y)&&(c==v)&&(d!=u)&&(d!=w)&&(d!=z) 
     &&(e!=u)&&(e!=w)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=z)) ||	 	       
      ((a==z)&&(b==y)&&(c==v)&&(d!=u)&&(d!=w)&&(d!=x) 
     &&(e!=u)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=w)&&(f!=x)) ||	 	       

      ((a==w)&&(b==z)&&(c==v)&&(d!=u)&&(d!=x)&&(d!=y) 
     &&(e!=u)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=x)&&(f!=y)) ||	 	       
      ((a==x)&&(b==z)&&(c==v)&&(d!=u)&&(d!=w)&&(d!=y) 
     &&(e!=u)&&(e!=w)&&(e!=y)
     &&(f!=u)&&(f!=w)&&(f!=y)) ||	 	       
      ((a==y)&&(b==z)&&(c==v)&&(d!=u)&&(d!=w)&&(d!=x) 
     &&(e!=u)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=w)&&(f!=x)) ||
	 

      ((a==v)&&(b==u)&&(c==y)&&(d!=w)&&(d!=x)&&(d!=z) 
     &&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=w)&&(f!=x)&&(f!=z)) ||	 
      ((a==w)&&(b==u)&&(c==y)&&(d!=v)&&(d!=x)&&(d!=z) 
     &&(e!=v)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=x)&&(f!=z)) ||	 
      ((a==x)&&(b==u)&&(c==y)&&(d!=v)&&(d!=w)&&(d!=z) 
     &&(e!=v)&&(e!=w)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=z)) ||	 	 
      ((a==z)&&(b==u)&&(c==y)&&(d!=v)&&(d!=w)&&(d!=x) 
     &&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=v)&&(f!=w)&&(f!=x)) ||
	 
      ((a==v)&&(b==w)&&(c==y)&&(d!=u)&&(d!=x)&&(d!=z) 
     &&(e!=u)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=x)&&(f!=z)) ||	 
      ((a==x)&&(b==w)&&(c==y)&&(d!=u)&&(d!=v)&&(d!=z) 
     &&(e!=u)&&(e!=v)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=z)) ||	 	 
      ((a==z)&&(b==w)&&(c==y)&&(d!=u)&&(d!=v)&&(d!=x) 
     &&(e!=u)&&(e!=v)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=x)) ||	 	 	 	 	 	 	 	       

      ((a==v)&&(b==x)&&(c==y)&&(d!=u)&&(d!=w)&&(d!=z) 
     &&(e!=u)&&(e!=w)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=z)) ||	 	 	 	 	 	 	 	       
      ((a==w)&&(b==x)&&(c==y)&&(d!=u)&&(d!=v)&&(d!=z) 
     &&(e!=u)&&(e!=v)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=z)) ||	 	 	 	 	 	 	 	       
      ((a==z)&&(b==x)&&(c==y)&&(d!=u)&&(d!=v)&&(d!=w) 
     &&(e!=u)&&(e!=v)&&(e!=w)
     &&(f!=u)&&(f!=v)&&(f!=w)) ||	 	 	 	 	 	 	 	       

      ((a==v)&&(b==z)&&(c==y)&&(d!=u)&&(d!=w)&&(d!=x) 
     &&(e!=u)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=w)&&(f!=x)) ||	 	 	 	 	 	 	 	       
      ((a==w)&&(b==z)&&(c==y)&&(d!=u)&&(d!=v)&&(d!=x) 
     &&(e!=u)&&(e!=v)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=x)) ||	 	 	 	 	 	 	 	       
      ((a==x)&&(b==z)&&(c==y)&&(d!=u)&&(d!=v)&&(d!=w) 
     &&(e!=u)&&(e!=v)&&(e!=w)
     &&(f!=u)&&(f!=v)&&(f!=w)) ||	 	 	 	 	 	 	 	       


      ((a==v)&&(b==u)&&(c==z)&&(d!=w)&&(d!=x)&&(d!=y) 
     &&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=w)&&(f!=x)&&(f!=y)) ||	 	 	 	 	 	 	 	       
      ((a==w)&&(b==u)&&(c==z)&&(d!=v)&&(d!=x)&&(d!=y) 
     &&(e!=v)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=x)&&(f!=y)) ||	 	 	 	 	 	 	 	       
      ((a==x)&&(b==u)&&(c==z)&&(d!=v)&&(d!=w)&&(d!=y) 
     &&(e!=v)&&(e!=w)&&(e!=y)
     &&(f!=v)&&(f!=w)&&(f!=y)) ||	 	 	 	 	 	 	 	       
      ((a==y)&&(b==u)&&(c==z)&&(d!=v)&&(d!=w)&&(d!=x) 
     &&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=v)&&(f!=w)&&(f!=x)) ||	 	 	 	 	 	 	 	       

      ((a==v)&&(b==w)&&(c==z)&&(d!=u)&&(d!=x)&&(d!=y) 
     &&(e!=u)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=x)&&(f!=y)) ||	 	 	 	 	 	 	 	       
      ((a==x)&&(b==w)&&(c==z)&&(d!=u)&&(d!=v)&&(d!=y) 
     &&(e!=u)&&(e!=v)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=y)) ||	 	 	 	 	 	 	 	       
      ((a==y)&&(b==w)&&(c==z)&&(d!=u)&&(d!=v)&&(d!=x) 
     &&(e!=u)&&(e!=v)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=x)) ||	 	 	 	 	 	 	 	       

      ((a==v)&&(b==x)&&(c==z)&&(d!=u)&&(d!=w)&&(d!=y) 
     &&(e!=u)&&(e!=w)&&(e!=y)
     &&(f!=u)&&(f!=w)&&(f!=y)) ||	 	 	 	 	 	 	 	       
      ((a==w)&&(b==x)&&(c==z)&&(d!=u)&&(d!=v)&&(d!=y) 
     &&(e!=u)&&(e!=v)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=y)) ||	 	 	 	 	 	 	 	       
      ((a==y)&&(b==x)&&(c==z)&&(d!=u)&&(d!=v)&&(d!=w) 
     &&(e!=u)&&(e!=v)&&(e!=w)
     &&(f!=u)&&(f!=v)&&(f!=w)) ||	 	 	 	 	 	 	 	       

      ((a==v)&&(b==y)&&(c==z)&&(d!=u)&&(d!=w)&&(d!=x) 
     &&(e!=u)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=w)&&(f!=x)) ||	 	 	 	 	 	 	 	       
      ((a==w)&&(b==y)&&(c==z)&&(d!=u)&&(d!=v)&&(d!=x) 
     &&(e!=u)&&(e!=v)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=x)) ||	 	 	 	 	 	 	 	       
      ((a==x)&&(b==y)&&(c==z)&&(d!=u)&&(d!=v)&&(d!=w) 
     &&(e!=u)&&(e!=v)&&(e!=w)
     &&(f!=u)&&(f!=v)&&(f!=w)))	 	 	 	 	 	 	 	       

   {
   	 cout<<"tienes tres picas \n";
   }       
   //a b c d e f
   //u v w x y z
   // verificamos picas con a b y d
  
   if(((a==v)&&(b==w)&&(d==u)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=w)&&(f!=y)&&(f!=z)) ||
      ((a==x)&&(b==w)&&(d==u)&&(c!=v)&&(c!=y)&&(c!=z) 
     &&(e!=v)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(b==w)&&(d==u)&&(c!=v)&&(c!=x)&&(c!=z) 
     &&(e!=v)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=x)&&(f!=z)) ||
      ((a==z)&&(b==w)&&(d==u)&&(c!=v)&&(c!=x)&&(c!=y) 
     &&(e!=v)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=x)&&(f!=y)) ||
  
      ((a==v)&&(b==x)&&(d==u)&&(c!=w)&&(c!=y)&&(c!=z) 
     &&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=w)&&(f!=y)&&(f!=z)) ||   
      ((a==w)&&(b==x)&&(d==u)&&(c!=v)&&(c!=y)&&(c!=z) 
     &&(e!=v)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(b==x)&&(d==u)&&(c!=v)&&(c!=w)&&(c!=z) 
     &&(e!=v)&&(e!=w)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=z)) ||
      ((a==z)&&(b==x)&&(d==u)&&(c!=v)&&(c!=w)&&(c!=y) 
     &&(e!=v)&&(e!=w)&&(e!=y)
     &&(f!=v)&&(f!=w)&&(f!=y)) ||
     
      ((a==v)&&(b==y)&&(d==u)&&(c!=w)&&(c!=x)&&(c!=z) 
     &&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=w)&&(f!=x)&&(f!=z)) ||
      ((a==w)&&(b==y)&&(d==u)&&(c!=v)&&(c!=x)&&(c!=z) 
     &&(e!=v)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=x)&&(f!=z)) ||
      ((a==x)&&(b==y)&&(d==u)&&(c!=v)&&(c!=w)&&(c!=z) 
     &&(e!=v)&&(e!=w)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=z)) ||
      ((a==z)&&(b==y)&&(d==u)&&(c!=v)&&(c!=w)&&(c!=x) 
     &&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=v)&&(f!=w)&&(f!=x)) ||
	 
      ((a==v)&&(b==z)&&(d==u)&&(c!=w)&&(c!=x)&&(c!=y) 
     &&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=w)&&(f!=x)&&(f!=y)) ||
      ((a==w)&&(b==z)&&(d==u)&&(c!=v)&&(c!=x)&&(c!=y) 
     &&(e!=v)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=x)&&(f!=y)) ||
      ((a==x)&&(b==z)&&(d==u)&&(c!=v)&&(c!=w)&&(c!=y) 
     &&(e!=v)&&(e!=w)&&(e!=y)
     &&(f!=v)&&(f!=w)&&(f!=y)) ||
      ((a==y)&&(b==z)&&(d==u)&&(c!=v)&&(c!=w)&&(c!=x) 
     &&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=v)&&(f!=w)&&(f!=x)) ||
  
      ((a==w)&&(b==u)&&(d==v)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=x)&&(f!=y)&&(f!=z)) ||
      ((a==x)&&(b==u)&&(d==v)&&(c!=w)&&(c!=y)&&(c!=z) 
     &&(e!=w)&&(e!=y)&&(e!=z)
     &&(f!=w)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(b==u)&&(d==v)&&(c!=w)&&(c!=x)&&(c!=z) 
     &&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=w)&&(f!=x)&&(f!=z)) ||
      ((a==z)&&(b==u)&&(d==v)&&(c!=w)&&(c!=x)&&(c!=y) 
     &&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=w)&&(f!=x)&&(f!=y)) ||

      ((a==x)&&(b==w)&&(d==v)&&(c!=u)&&(c!=y)&&(c!=z) 
     &&(e!=u)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(b==w)&&(d==v)&&(c!=u)&&(c!=x)&&(c!=z) 
     &&(e!=u)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=x)&&(f!=z)) ||
      ((a==z)&&(b==w)&&(d==v)&&(c!=u)&&(c!=x)&&(c!=y) 
     &&(e!=u)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=x)&&(f!=y)) ||

      ((a==w)&&(b==x)&&(d==v)&&(c!=u)&&(c!=y)&&(c!=z) 
     &&(e!=u)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(b==x)&&(d==v)&&(c!=u)&&(c!=w)&&(c!=z) 
     &&(e!=u)&&(e!=w)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=z)) ||
      ((a==z)&&(b==x)&&(d==v)&&(c!=u)&&(c!=w)&&(c!=y) 
     &&(e!=u)&&(e!=w)&&(e!=y)
     &&(f!=u)&&(f!=w)&&(f!=y)) ||

      ((a==w)&&(b==y)&&(d==v)&&(c!=u)&&(c!=x)&&(c!=z) 
     &&(e!=u)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=x)&&(f!=z)) ||
      ((a==x)&&(b==y)&&(d==v)&&(c!=u)&&(c!=w)&&(c!=z) 
     &&(e!=u)&&(e!=w)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=z)) ||
      ((a==z)&&(b==y)&&(d==v)&&(c!=u)&&(c!=w)&&(c!=x) 
     &&(e!=u)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=w)&&(f!=x)) ||

      ((a==w)&&(b==z)&&(d==v)&&(c!=u)&&(c!=x)&&(c!=y) 
     &&(e!=u)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=x)&&(f!=y)) ||
      ((a==x)&&(b==z)&&(d==v)&&(c!=u)&&(c!=w)&&(c!=y) 
     &&(e!=u)&&(e!=w)&&(e!=y)
     &&(f!=u)&&(f!=w)&&(f!=y)) ||
      ((a==y)&&(b==z)&&(d==v)&&(c!=u)&&(c!=w)&&(c!=x) 
     &&(e!=u)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=w)&&(f!=x)) ||

      ((a==v)&&(b==u)&&(d==w)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(e!=x)&&(e!=y)&&(e!=z)
     &&(f!=x)&&(f!=y)&&(f!=z)) ||
      ((a==x)&&(b==u)&&(d==w)&&(c!=v)&&(c!=y)&&(c!=z) 
     &&(e!=v)&&(e!=y)&&(e!=z)
     &&(f!=v)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(b==u)&&(d==w)&&(c!=v)&&(c!=x)&&(c!=z) 
     &&(e!=v)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=x)&&(f!=z)) ||
      ((a==z)&&(b==u)&&(d==w)&&(c!=v)&&(c!=x)&&(c!=y) 
     &&(e!=v)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=x)&&(f!=y)) ||

      ((a==v)&&(b==x)&&(d==w)&&(c!=u)&&(c!=y)&&(c!=z) 
     &&(e!=u)&&(e!=y)&&(e!=z)
     &&(f!=u)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(b==x)&&(d==w)&&(c!=u)&&(c!=v)&&(c!=z) 
     &&(e!=u)&&(e!=v)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=z)) ||
      ((a==z)&&(b==x)&&(d==w)&&(c!=u)&&(c!=v)&&(c!=y) 
     &&(e!=u)&&(e!=v)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=y)) ||

      ((a==v)&&(b==y)&&(d==w)&&(c!=u)&&(c!=x)&&(c!=z) 
     &&(e!=u)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=x)&&(f!=z)) ||
      ((a==x)&&(b==y)&&(d==w)&&(c!=u)&&(c!=v)&&(c!=z) 
     &&(e!=u)&&(e!=v)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=z)) ||
      ((a==z)&&(b==y)&&(d==w)&&(c!=u)&&(c!=v)&&(c!=x) 
     &&(e!=u)&&(e!=v)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=x)) ||

      ((a==v)&&(b==z)&&(d==w)&&(c!=u)&&(c!=x)&&(c!=y) 
     &&(e!=u)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=x)&&(f!=y)) ||
      ((a==x)&&(b==z)&&(d==w)&&(c!=u)&&(c!=v)&&(c!=y) 
     &&(e!=u)&&(e!=v)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=y)) ||
      ((a==y)&&(b==z)&&(d==w)&&(c!=u)&&(c!=v)&&(c!=x) 
     &&(e!=u)&&(e!=v)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=x)) ||
	 
      ((a==v)&&(b==u)&&(d==y)&&(c!=w)&&(c!=x)&&(c!=z) 
     &&(e!=w)&&(e!=x)&&(e!=z)
     &&(f!=w)&&(f!=x)&&(f!=z)) ||
      ((a==w)&&(b==u)&&(d==y)&&(c!=v)&&(c!=x)&&(c!=z) 
     &&(e!=v)&&(e!=x)&&(e!=z)
     &&(f!=v)&&(f!=x)&&(f!=z)) ||	 
      ((a==x)&&(b==u)&&(d==y)&&(c!=v)&&(c!=w)&&(c!=z) 
     &&(e!=v)&&(e!=w)&&(e!=z)
     &&(f!=v)&&(f!=w)&&(f!=z)) ||	 
      ((a==z)&&(b==u)&&(d==y)&&(c!=v)&&(c!=w)&&(c!=x) 
     &&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=v)&&(f!=w)&&(f!=x)) ||	 
	  
      ((a==v)&&(b==w)&&(d==y)&&(c!=u)&&(c!=x)&&(c!=z) 
     &&(e!=u)&&(e!=x)&&(e!=z)
     &&(f!=u)&&(f!=x)&&(f!=z)) ||	 	   
      ((a==x)&&(b==w)&&(d==y)&&(c!=u)&&(c!=v)&&(c!=z) 
     &&(e!=u)&&(e!=v)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=z)) ||	 	    
      ((a==z)&&(b==w)&&(d==y)&&(c!=u)&&(c!=v)&&(c!=x) 
     &&(e!=u)&&(e!=v)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=x)) ||	 	    
 
      ((a==v)&&(b==x)&&(d==y)&&(c!=u)&&(c!=w)&&(c!=z) 
     &&(e!=u)&&(e!=w)&&(e!=z)
     &&(f!=u)&&(f!=w)&&(f!=z)) ||	 	    
      ((a==w)&&(b==x)&&(d==y)&&(c!=u)&&(c!=v)&&(c!=z) 
     &&(e!=u)&&(e!=v)&&(e!=z)
     &&(f!=u)&&(f!=v)&&(f!=z)) ||	 	    
      ((a==z)&&(b==x)&&(d==y)&&(c!=u)&&(c!=v)&&(c!=w) 
     &&(e!=u)&&(e!=v)&&(e!=w)
     &&(f!=u)&&(f!=v)&&(f!=w)) ||	 	    

      ((a==v)&&(b==z)&&(d==y)&&(c!=u)&&(c!=w)&&(c!=x) 
     &&(e!=u)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=w)&&(f!=x)) ||	 	    
      ((a==w)&&(b==z)&&(d==y)&&(c!=u)&&(c!=v)&&(c!=x) 
     &&(e!=u)&&(e!=v)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=x)) ||	 	    
      ((a==x)&&(b==z)&&(d==y)&&(c!=u)&&(c!=v)&&(c!=w) 
     &&(e!=u)&&(e!=v)&&(e!=w)
     &&(f!=u)&&(f!=v)&&(f!=w)) ||	 	    

      ((a==v)&&(b==u)&&(d==z)&&(c!=w)&&(c!=x)&&(c!=y) 
     &&(e!=w)&&(e!=x)&&(e!=y)
     &&(f!=w)&&(f!=x)&&(f!=y)) ||	 	    
      ((a==w)&&(b==u)&&(d==z)&&(c!=v)&&(c!=x)&&(c!=y) 
     &&(e!=v)&&(e!=x)&&(e!=y)
     &&(f!=v)&&(f!=x)&&(f!=y)) ||	 	    
      ((a==x)&&(b==u)&&(d==z)&&(c!=v)&&(c!=w)&&(c!=y) 
     &&(e!=v)&&(e!=w)&&(e!=y)
     &&(f!=v)&&(f!=w)&&(f!=y)) ||	 	    
      ((a==y)&&(b==u)&&(d==z)&&(c!=v)&&(c!=w)&&(c!=x) 
     &&(e!=v)&&(e!=w)&&(e!=x)
     &&(f!=v)&&(f!=w)&&(f!=x)) ||	 	    

      ((a==v)&&(b==w)&&(d==z)&&(c!=u)&&(c!=x)&&(c!=y) 
     &&(e!=u)&&(e!=x)&&(e!=y)
     &&(f!=u)&&(f!=x)&&(f!=y)) ||	 	    
      ((a==x)&&(b==w)&&(d==z)&&(c!=u)&&(c!=v)&&(c!=y) 
     &&(e!=u)&&(e!=v)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=y)) ||	 	    
      ((a==y)&&(b==w)&&(d==z)&&(c!=u)&&(c!=v)&&(c!=x) 
     &&(e!=u)&&(e!=v)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=x)) ||	 	    

      ((a==v)&&(b==x)&&(d==z)&&(c!=u)&&(c!=w)&&(c!=y) 
     &&(e!=u)&&(e!=w)&&(e!=y)
     &&(f!=u)&&(f!=w)&&(f!=y)) ||	 	    
      ((a==w)&&(b==x)&&(d==z)&&(c!=u)&&(c!=v)&&(c!=y) 
     &&(e!=u)&&(e!=v)&&(e!=y)
     &&(f!=u)&&(f!=v)&&(f!=y)) ||	 	    
      ((a==y)&&(b==x)&&(d==z)&&(c!=u)&&(c!=v)&&(c!=w) 
     &&(e!=u)&&(e!=v)&&(e!=w)
     &&(f!=u)&&(f!=v)&&(f!=w)) ||	 	    

      ((a==v)&&(b==y)&&(d==z)&&(c!=u)&&(c!=w)&&(c!=x) 
     &&(e!=u)&&(e!=w)&&(e!=x)
     &&(f!=u)&&(f!=w)&&(f!=x)) ||	 	     
      ((a==w)&&(b==y)&&(d==z)&&(c!=u)&&(c!=v)&&(c!=x) 
     &&(e!=u)&&(e!=v)&&(e!=x)
     &&(f!=u)&&(f!=v)&&(f!=x)) ||	 	     
      ((a==x)&&(b==y)&&(d==z)&&(c!=u)&&(c!=v)&&(c!=w) 
     &&(e!=u)&&(e!=v)&&(e!=w)
     &&(f!=u)&&(f!=v)&&(f!=w)))	 	     
 
   {
   	 cout<<"tienes tres picas \n";
   }         
 
   //a b c d e f
   //u v w x y z
   // verificamos picas con a b y e

   if(((a==v)&&(b==w)&&(e==u)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(d!=x)&&(d!=y)&&(d!=z)
     &&(f!=x)&&(f!=y)&&(f!=z)) ||
      ((a==x)&&(b==w)&&(e==u)&&(c!=v)&&(c!=y)&&(c!=z) 
     &&(d!=v)&&(d!=y)&&(d!=z)
     &&(f!=v)&&(f!=y)&&(f!=z)) ||
      ((a==y)&&(b==w)&&(e==u)&&(c!=v)&&(c!=x)&&(c!=z) 
     &&(d!=v)&&(d!=x)&&(d!=z)
     &&(f!=v)&&(f!=x)&&(f!=z)) ||
      ((a==z)&&(b==w)&&(e==u)&&(c!=v)&&(c!=x)&&(c!=y) 
     &&(d!=v)&&(d!=x)&&(d!=y)
     &&(f!=v)&&(f!=x)&&(f!=y)) ||  

      ((a==v)&&(b==x)&&(e==u)&&(c!=w)&&(c!=y)&&(c!=z) 
     &&(d!=w)&&(d!=y)&&(d!=z)
     &&(f!=w)&&(f!=y)&&(f!=z)) ||  
      ((a==w)&&(b==x)&&(e==u)&&(c!=v)&&(c!=y)&&(c!=z) 
     &&(d!=v)&&(d!=y)&&(d!=z)
     &&(f!=v)&&(f!=y)&&(f!=z)) ||  
      ((a==y)&&(b==x)&&(e==u)&&(c!=v)&&(c!=w)&&(c!=z) 
     &&(d!=v)&&(d!=w)&&(d!=z)
     &&(f!=v)&&(f!=w)&&(f!=z)) ||  
      ((a==z)&&(b==x)&&(e==u)&&(c!=v)&&(c!=w)&&(c!=y) 
     &&(d!=v)&&(d!=w)&&(d!=y)
     &&(f!=v)&&(f!=w)&&(f!=y)) ||  
   
      ((a==v)&&(b==y)&&(e==u)&&(c!=w)&&(c!=x)&&(c!=z) 
     &&(d!=w)&&(d!=x)&&(d!=z)
     &&(f!=w)&&(f!=x)&&(f!=z)) ||     
      ((a==w)&&(b==y)&&(e==u)&&(c!=v)&&(c!=x)&&(c!=z) 
     &&(d!=v)&&(d!=x)&&(d!=z)
     &&(f!=v)&&(f!=x)&&(f!=z)) ||        
      ((a==x)&&(b==y)&&(e==u)&&(c!=v)&&(c!=w)&&(c!=z) 
     &&(d!=v)&&(d!=w)&&(d!=z)
     &&(f!=v)&&(f!=w)&&(f!=z)) ||        
      ((a==z)&&(b==y)&&(e==u)&&(c!=v)&&(c!=w)&&(c!=x) 
     &&(d!=v)&&(d!=w)&&(d!=x)
     &&(f!=v)&&(f!=w)&&(f!=x)) ||        
   
      ((a==v)&&(b==z)&&(e==u)&&(c!=w)&&(c!=x)&&(c!=y) 
     &&(d!=w)&&(d!=x)&&(d!=y)
     &&(f!=w)&&(f!=x)&&(f!=y)) ||        
      ((a==w)&&(b==z)&&(e==u)&&(c!=v)&&(c!=x)&&(c!=y) 
     &&(d!=v)&&(d!=x)&&(d!=y)
     &&(f!=v)&&(f!=x)&&(f!=y)) ||        
      ((a==x)&&(b==z)&&(e==u)&&(c!=v)&&(c!=w)&&(c!=y) 
     &&(d!=v)&&(d!=w)&&(d!=y)
     &&(f!=v)&&(f!=w)&&(f!=y)) ||        
      ((a==y)&&(b==z)&&(e==u)&&(c!=v)&&(c!=w)&&(c!=x) 
     &&(d!=v)&&(d!=w)&&(d!=x)
     &&(f!=v)&&(f!=w)&&(f!=x)) ||        
   
      ((a==w)&&(b==u)&&(e==v)&&(c!=x)&&(c!=y)&&(c!=z) 
     &&(d!=x)&&(d!=y)&&(d!=z)
     &&(f!=x)&&(f!=y)&&(f!=z)) ||        
      ((a==x)&&(b==u)&&(e==v)&&(c!=w)&&(c!=y)&&(c!=z) 
     &&(d!=w)&&(d!=y)&&(d!=z)
     &&(f!=w)&&(f!=y)&&(f!=z)) ||        
      ((a==y)&&(b==u)&&(e==v)&&(c!=w)&&(c!=x)&&(c!=z) 
     &&(d!=w)&&(d!=x)&&(d!=z)
     &&(f!=w)&&(f!=x)&&(f!=z)) ||        
      ((a==z)&&(b==u)&&(e==v)&&(c!=w)&&(c!=x)&&(c!=y) 
     &&(d!=w)&&(d!=x)&&(d!=y)
     &&(f!=w)&&(f!=x)&&(f!=y)) ||        

      ((a==x)&&(b==w)&&(e==v)&&(c!=u)&&(c!=y)&&(c!=z) 
     &&(d!=u)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=y)&&(f!=z)) ||        
      ((a==y)&&(b==w)&&(e==v)&&(c!=u)&&(c!=x)&&(c!=z) 
     &&(d!=u)&&(d!=x)&&(d!=z)
     &&(f!=u)&&(f!=x)&&(f!=z)) ||        
      ((a==z)&&(b==w)&&(e==v)&&(c!=u)&&(c!=x)&&(c!=y) 
     &&(d!=u)&&(d!=x)&&(d!=y)
     &&(f!=u)&&(f!=x)&&(f!=y)) ||        

      ((a==w)&&(b==x)&&(e==v)&&(c!=u)&&(c!=y)&&(c!=z) 
     &&(d!=u)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=y)&&(f!=z)) ||        
      ((a==y)&&(b==x)&&(e==v)&&(c!=u)&&(c!=w)&&(c!=z) 
     &&(d!=u)&&(d!=w)&&(d!=z)
     &&(f!=u)&&(f!=w)&&(f!=z)) ||        
      ((a==z)&&(b==x)&&(e==v)&&(c!=u)&&(c!=w)&&(c!=y) 
     &&(d!=u)&&(d!=w)&&(d!=y)
     &&(f!=u)&&(f!=w)&&(f!=y)) ||        

      ((a==w)&&(b==y)&&(e==v)&&(c!=u)&&(c!=x)&&(c!=z) 
     &&(d!=u)&&(d!=x)&&(d!=z)
     &&(f!=u)&&(f!=x)&&(f!=z)) ||        
      ((a==x)&&(b==y)&&(e==v)&&(c!=u)&&(c!=w)&&(c!=z) 
     &&(d!=u)&&(d!=w)&&(d!=z)
     &&(f!=u)&&(f!=w)&&(f!=z)) ||        
      ((a==z)&&(b==y)&&(e==v)&&(c!=u)&&(c!=w)&&(c!=x) 
     &&(d!=u)&&(d!=w)&&(d!=x)
     &&(f!=u)&&(f!=w)&&(f!=x)) ||        

      ((a==w)&&(b==z)&&(e==v)&&(c!=u)&&(c!=x)&&(c!=y) 
     &&(d!=u)&&(d!=x)&&(d!=y)
     &&(f!=u)&&(f!=x)&&(f!=y)) ||        
      ((a==x)&&(b==z)&&(e==v)&&(c!=u)&&(c!=w)&&(c!=y) 
     &&(d!=u)&&(d!=w)&&(d!=y)
     &&(f!=u)&&(f!=w)&&(f!=y)) ||        
      ((a==y)&&(b==z)&&(e==v)&&(c!=u)&&(c!=w)&&(c!=x) 
     &&(d!=u)&&(d!=w)&&(d!=x)
     &&(f!=u)&&(f!=w)&&(f!=x)) ||        

      ((a==v)&&(b==u)&&(e==x)&&(c!=w)&&(c!=y)&&(c!=z) 
     &&(d!=w)&&(d!=y)&&(d!=z)
     &&(f!=w)&&(f!=y)&&(f!=z)) ||        
      ((a==w)&&(b==u)&&(e==x)&&(c!=v)&&(c!=y)&&(c!=z) 
     &&(d!=v)&&(d!=y)&&(d!=z)
     &&(f!=v)&&(f!=y)&&(f!=z)) ||        
      ((a==y)&&(b==u)&&(e==x)&&(c!=v)&&(c!=w)&&(c!=z) 
     &&(d!=v)&&(d!=w)&&(d!=z)
     &&(f!=v)&&(f!=w)&&(f!=z)) ||        
      ((a==z)&&(b==u)&&(e==x)&&(c!=v)&&(c!=w)&&(c!=y) 
     &&(d!=v)&&(d!=w)&&(d!=y)
     &&(f!=v)&&(f!=w)&&(f!=y)) ||        

      ((a==v)&&(b==w)&&(e==x)&&(c!=u)&&(c!=y)&&(c!=z) 
     &&(d!=u)&&(d!=y)&&(d!=z)
     &&(f!=u)&&(f!=y)&&(f!=z)) ||        
      ((a==y)&&(b==w)&&(e==x)&&(c!=u)&&(c!=v)&&(c!=z) 
     &&(d!=u)&&(d!=v)&&(d!=z)
     &&(f!=u)&&(f!=v)&&(f!=z)) ||        
      ((a==z)&&(b==w)&&(e==x)&&(c!=u)&&(c!=v)&&(c!=y) 
     &&(d!=u)&&(d!=v)&&(d!=y)
     &&(f!=u)&&(f!=v)&&(f!=y))) 
   {
   	 cout<<"tienes tres picas \n";
   }         
 	      
   
   //a b c d e f
   //u v w x y z
  
  
     










   
  }
 

}
