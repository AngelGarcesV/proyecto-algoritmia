//generar funcion que permita saber si un numero es o no primo

#include<iostream>
#include<math.h>
using namespace std;

bool esprim(int );

int main()
{

int numero = 0 ;
int primo = 0 ;

cout << "hola ingresa el numero a evaluar si es o no primo " << endl ;
  cin >> numero ;

if (esprim(numero))
 {
    cout << "es primo" << endl ;
 }
else
{ 
    cout << "no es primo" << endl ;
}



return 0 ;
}

bool esprim(int numero)
{

bool p = true ;
int d = 2 ; //divisor

if(numero<2)
{

p = false ;

}
 else
 { 
    while (p && d<=sqrt(numero))
    {
        if (numero % d == 0)
        {
            p = false ;
        }
        d = d + 1 ;
        
    }
    
 }

return p;

}