//determinar ssi el numero que se ingresa es perfecto

#include<iostream>
using namespace std;

int perfect(int );
int main()
{

int numero = 0 ;


 cout << "ingresa el numero para saber si es perfecto" << endl ;
  cin >> numero ;

 if ( perfect(numero)==numero)
 {
   cout << "si es un numero perfecto" ;
 }
  else
  {
    cout << "no es un numero perfecto" << endl ;
  }

return 0 ;
}

int perfect(int numero)
{
int suma = 0 ;
int div = 0 ;
for (int i = 1 ; i < numero; i++)
{
    if (numero%i==0)
    {
        div = i ;
        suma+=div ;
    }
    
}

  return suma ;  
}