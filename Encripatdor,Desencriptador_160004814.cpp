//Encriptador de numero entero  de 4 digitos.
// con la opcion de desencripat el mismo numero 


#include<iostream>
using namespace std;
int encriptador(int);
int desencriptador(int);

int main()
{
    int entero = 0;
    int numerocifrado = 0;
    int opcion = 0;
    int lo = 0;

    cout << "ingrese el numero entero de 4 digitos para cifrar: ";
     cin >> entero;

    numerocifrado = encriptador (entero);

    cout << "el numero cifrado es: " << numerocifrado << endl;

    do
    {
        cout << "Quieres descifrar un numero?, pulse 1 para si y 0 para no " << endl;
         cin >> opcion;

        if (opcion==1)
        {
        int original_num = 0;
        int numcodificado = 0;

        cout << "ingrese la informacion cifrada: ";
         cin >> numcodificado;
    
        original_num = desencriptador (numerocifrado);

        cout << "el numero descifrado es: " << original_num;

        lo = 1;

        }
        else if (opcion==0)
        {
            cout << "Eso es todo muchas gracias" << endl;
            lo = 1;
        }
        else
        {
            cout << "error no tenemos esa opcion" << endl;
        }

    } while (lo==0);
    
    

    return 0;
}


int encriptador (int entero)
{ 
    int d1 =0 ;                
    int d2 =0 ;    //d1,d2,d3,d4 = digitos del numero respectivamente
    int d3 =0 ;
    int d4 =0 ;

    int d1cifrado = 0;
    int d2cifrado = 0;
    int d3cifrado = 0;
    int d4cifrado = 0;
    int resultado = 0;

    d1 = entero / 1000;
    d2 = ( entero % 1000) /100;
    d3 = ( entero % 100) /10;
    d4 = entero % 10;

    d1cifrado = (d1+7) %10;
    d2cifrado = (d2+7) %10; //pasando los datos al cifrado
    d3cifrado = (d3+7) %10;
    d4cifrado = (d4+7) %10;

    d1cifrado = d1cifrado + d3cifrado;
    d3cifrado = d1cifrado - d3cifrado; //intercambio los numeros de lugar
    d1cifrado = d1cifrado - d3cifrado;

    d2cifrado = d2cifrado + d4cifrado;
    d4cifrado = d2cifrado - d4cifrado; //intercambio los numeros de lugar
    d2cifrado = d2cifrado - d4cifrado;

    d1cifrado = d1cifrado * 1000;
    d2cifrado = d2cifrado * 100; //ordenando unidades para que queden los valores
    d3cifrado = d3cifrado * 10;
    
    resultado = d1cifrado + d2cifrado + d3cifrado + d4cifrado; //tomando las cifras y sumandolas

    return resultado;
}

int desencriptador (int entero)
{
    int cifrado1 = 0;
    int cifrado2 = 0;
    int cifrado3 = 0;
    int cifrado4 = 0;
    int d1descifrado = 0;
    int d2descifrado = 0;
    int d3descifrado = 0;
    int d4descifrado = 0;
    int descifrado = 0;


    cifrado1 = entero / 1000;
    cifrado2 = ( entero % 1000) /100;
    cifrado3 = ( entero % 100) /10;
    cifrado4 =  entero % 10;

    cifrado1 = cifrado1 + cifrado3; 
    cifrado3 = cifrado1 - cifrado3;
    cifrado1 = cifrado1 - cifrado3;

    cifrado2 = cifrado2 + cifrado4;
    cifrado4 = cifrado2 - cifrado4;
    cifrado2 = cifrado2 - cifrado4;



    if (cifrado1 >= 7)
    {   
        d1descifrado = cifrado1 -7 ;
    }
     else
     {   
        d1descifrado = ( cifrado1 + 10 ) -7 ;
     }

    if ( cifrado2 >= 7 )
    {   
        d2descifrado = cifrado2 - 7;
    }
     else
     {   
        d2descifrado = (cifrado2 + 10) - 7;
     }

    if (cifrado3 >= 7)
    {   
        d3descifrado = cifrado3 - 7;
    }
     else
     {   
        d3descifrado = (cifrado3 + 10) - 7;
     }

    if (cifrado4 >= 7)
    {   
        d4descifrado = cifrado4 - 7;
    }
     else
     {   
        d4descifrado = (cifrado4 + 10) - 7;
     }     

  
    d1descifrado = d1descifrado * 1000;
    d2descifrado = d2descifrado * 100;
    d3descifrado = d3descifrado * 10;
    
    descifrado = d1descifrado+d2descifrado+d3descifrado+d4descifrado;

    return descifrado;
}