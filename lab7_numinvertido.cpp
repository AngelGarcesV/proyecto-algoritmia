//funcion que reciba un numero y regrese el numero invertido

#include<iostream>
using namespace std;
int invertir(int);

int main()
{
int numero = 0 ;
int invert = 0 ;

cout << "ingresa el numero de maximo 9 digitos para invertirlo" << endl ;
 cin >>numero ;
cout << "el numero invertido es " << invertir(numero)<<endl ;
return 0 ;
}


int invertir(int numero)
{
int resultado = 0 ;

while (numero>0)
{
    resultado = resultado*10 ;
    resultado = resultado+numero%10  ;
    numero = numero/10 ;
}

return resultado ;
}