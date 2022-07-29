#include <iostream>
#include <stdlib.h>

using namespace std;

//funcion de menus
void menu();
void submenu_Areas();
void submenu_Volumenes();
void submenu_Temperaturas();
void submenuMonedas();
void submenuArreglos_Matrices();
void submenuVarios();

//funcion de las operaciones 
//Funciones Áreas:
void AreaTriangulo();
void AreaCirculo();
void AreaRectangulo();
void AreaCuadrado();

//Funcion Volúmenes
void VolumenEsfera();
void VolumenParalelepipedo();
void VolumenCubo();

//Funciones Temperaturas
void Tempe_CelsiusKelvin();
void Tempe_CelsiusFarenh();
void Tempe_FarenhCelsius();

//Funciones Monedas
void Moneda_PesoDolar();
void Moneda_PesoEuro();
void Moneda_DolarPeso();
void Moneda_EuroPeso();
void Moneda_EuroDolar();
void Moneda_DolarEuro();

//Funcion Arreglos y matrices
void OrdenArreglo();
void BuscarArreglo();
void SumaMatrices();
void MultiplicacionMatrices();
void BuscarMatrices();

//funcion varios
void DistanciaPuntos();
void RaicesFuncionCuadratica();
void Factorial();
void Fibonacci();
void Primo();


int main()
{
    menu();

    return 0;
}


void menu() //menu principal 

{

int opcion = 0;
bool repetir = true;



do
{
system("cls");
		
	cout<< "\n\t\t\t\t\t  Hola este es nuestro sistema de menu " <<endl;
	        cout << "\t\t\t\t\t----------------------------------------" << endl;

cout<< "\t\t\t\t\t\tHecho por Jhojan y  Angel " <<endl;
cout<< "\n" <<endl;
cout<< " Te presentamos un menu con opciones Selecciona la necesaria  " <<endl;
cout<< " [1] Areas  " <<endl;
cout<< " [2] Volumenes  " <<endl;
cout<< " [3] Temperaturas  " <<endl;
cout<< " [4] Monedas  " <<endl;
cout<< " [5] Arreglos y Matrices  " <<endl;
cout<< " [6] Varios  " <<endl;
cout<< " [7] Salir  " <<endl;
cout<< " Ingrese una opcion  " <<endl;
   cin>>opcion;
   

    switch (opcion)
    {
    case 1:submenu_Areas();
        break;

    case 2:submenu_Volumenes();
        break;

    case 3:submenu_Temperaturas();
        break;

    case 4:submenuMonedas();
        break;
    
    case 5:submenuArreglos_Matrices();
        break;

    case 6:submenuVarios();
        break;
    
    case 7: repetir = false;
        break;
    
    default: 
        break;
    }
} while (repetir & opcion<=7);

}

void submenu_Areas() //sub menu de areas encontramos triangulos y demas 

{
int opcion = 0;
bool repetir = true;	

do
{
system("cls");

cout<< " Escogiste Areas, Estas son nuestras opciones  " <<endl;
cout<< " [1] Area triangulo  " <<endl;
cout<< " [2] Area circulo  " <<endl;
cout<< " [3] Area rectangulo  " <<endl;
cout<< " [4] Area cuadrado  " <<endl;
cout<< " [5] Volver al menu  " <<endl;
cout<< " Ingrese una opcion  " <<endl;
   cin>>opcion;
    
    switch (opcion)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5: repetir = false;
        break;
    
    default:
        break;
    }
} while (repetir & opcion<=5);


		system("cls");

}

void submenu_Volumenes() //sub menu volumenes de la esfera y otras figuras

{


int opcion = 0;
bool repetir = true;	

do
{
system("cls");

cout<< " Escogiste Volumenes, Estas son nuestras opciones  " <<endl;
cout<< " [1] Volumen Esfera  " <<endl;
cout<< " [2] Volumen Paralelepipedo  " <<endl;
cout<< " [3] Volumen Cubo  " <<endl;
cout<< " [4] Volver al menu  " <<endl;
cout<< " Ingrese una opcion  " <<endl;
   cin>>opcion;
    
    switch (opcion)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4: repetir = false;
        break;
    
    default:
        break;
    }
} while (repetir & opcion<=4);


		system("cls");

}

void submenu_Temperaturas() //sub menu de las distintas mediciones de temperatura

{
int opcion = 0;
bool repetir = true;	

do
{
system("cls");

cout<< " Escogiste Temperaturass, Estas son nuestras opciones  " <<endl;
cout<< " [1] De Celsius a Kelvin  " <<endl;
cout<< " [2] De Kelvin a Fahrenheit  " <<endl;
cout<< " [3] De Fahrenheit a Celsius " <<endl;
cout<< " [4] Volver al menu  " <<endl;
cout<< " Ingrese una opcion  " <<endl;
   cin>>opcion;
    
    switch (opcion)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4: repetir = false;
        break;
    
    default:
        break;
    }
} while (repetir & opcion<=4);


		system("cls");

}

void submenuMonedas()//pasar de pesos a otras monedas y mas

{

int opcion = 0;
bool repetir = true;	

do
{
system("cls");
cout<< " Escogiste Monedas, Estas son nuestras opciones  " <<endl;
cout<< " [1] De Pesos a Dolar  " <<endl;
cout<< " [2] De pesos a Euros  " <<endl;
cout<< " [3] De Dolar a Pesos  " <<endl;
cout<< " [4] De Euros a Pesos  " <<endl;
cout<< " [5] De Euros a Dolar  " <<endl;
cout<< " [6] De Dolar a Euros " <<endl;
cout<< " [7] Volver al menu  " <<endl;

cout<< " Ingrese una opcion  " <<endl;
   cin>>opcion;
    
    switch (opcion)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7: repetir = false;
        break;
    
    
    default:
        break;
    }
} while (repetir & opcion<=7);


		system("cls");
}

void submenuArreglos_Matrices()//arreglos matrices entre otros

{

int opcion = 0;
bool repetir = true;	

do
{
system("cls");
 cout<< " Escogiste Arreglos y matrices, Estas son nuestras opciones  " <<endl;
 cout<< " [1] Ordenar un Arreglo  " <<endl;
 cout<< " [2] Buscar un valor en un Arreglo  " <<endl;
 cout<< " [3] Suma de Matrices  " <<endl;
 cout<< " [4] Multiplicacion de Matrices  " <<endl;
 cout<< " [5] Buscar un valor en una Matriz  " <<endl;
 cout<< " [6] Volver al menu  " <<endl;
 cout<< " Ingrese una opcion  " <<endl;
   cin>>opcion;
    
    switch (opcion)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6: repetir = false;
        break;
    
    default:
        break;
    }
} while (repetir & opcion<=6);


		system("cls");
}

void submenuVarios() //desde fibonacci y mas

{
int opcion = 0;
bool repetir = true;	

do
{

system("cls");
 cout<< " Escogiste Varios, Estas son nuestras opciones  " <<endl;
 cout<< " [1] Distancia entre dos Puntos  " <<endl;
 cout<< " [2] Raices de una funcion cuadratica  " <<endl;
 cout<< " [3] Factorial  " <<endl;
 cout<< " [4] Fibonacci  " <<endl;
 cout<< " [5] Primo  " <<endl;
 cout<< " [6] Volver al menu  " <<endl;
 cout<< " Ingrese una opcion  " <<endl;
   cin>>opcion;
    
    switch (opcion)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6: repetir = false;
        break;
    
    default:
        break;
    }
} while (repetir & opcion<=6);


system("cls");

}


//Funciones Áreas:
void AreaTriangulo()
{

}

void AreaCirculo()
{

}

void AreaRectangulo()
{

}

void AreaCuadrado()
{

}

//Funcion Volúmenes
void VolumenEsfera()
{

}

void VolumenParalelepipedo()
{

}

void VolumenCubo()
{

}

//Funciones Temperaturas
void Tempe_CelsiusKelvin()
{

}

void Tempe_CelsiusFarenh()
{

}

void Tempe_FarenhCelsius()
{

}

//Funciones Monedas

void Moneda_PesoDolar()
{

}

void Moneda_PesoEuro()
{

}

void Moneda_DolarPeso()
{

}

void Moneda_EuroPeso()
{

}

void Moneda_EuroDolar()
{

}
void Moneda_DolarEuro()
{

}

//Funcion Arreglos y matrices
void OrdenArreglo()
{

}

void BuscarArreglo()
{

}

void SumaMatrices()
{

}

void MultiplicacionMatrices()
{

}

void BuscarMatrices()
{

}

//funcion varios
void DistanciaPuntos()
{

}

void RaicesFuncionCuadratica()
{

}

void Factorial()
{

}

void Fibonacci()
{

}

void Primo()
{

}



