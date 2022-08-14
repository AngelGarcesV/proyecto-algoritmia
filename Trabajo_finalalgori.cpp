#include <iostream>
#include <stdlib.h>
#include <cmath>
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
system("cls||clear");
		
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

cout<<endl;

cout<< " Escogiste Areas, Estas son nuestras opciones  " <<endl;
cout<< " [1] Area triangulo  " <<endl;
cout<< " [2] Area circulo  " <<endl;
cout<< " [3] Area rectangulo  " <<endl;
cout<< " [4] Area cuadrado  " <<endl;
cout<< " [5] Volver al menu  " <<endl;
cout<< " Ingrese una opcion  " <<endl;
   cin>>opcion;
  system("cls||clear");  
    switch (opcion)
    {
    case 1: AreaTriangulo();
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


		system("cls||clear");

}

void submenu_Volumenes() //sub menu volumenes de la esfera y otras figuras

{


int opcion = 0;
bool repetir = true;	

do
{

cout<<endl;

cout<< " Escogiste Volumenes, Estas son nuestras opciones  " <<endl;
cout<< " [1] Volumen Esfera  " <<endl;
cout<< " [2] Volumen Paralelepipedo  " <<endl;
cout<< " [3] Volumen Cubo  " <<endl;
cout<< " [4] Volver al menu  " <<endl;
cout<< " Ingrese una opcion  " <<endl;
   cin>>opcion;
      system("cls||clear");
    switch (opcion)
    {
    case 1:VolumenEsfera();
        break;
    case 2:VolumenParalelepipedo();
        break;
    case 3:VolumenCubo();
        break;
    case 4: repetir = false;
        break;
    
    default:
        break;
    }
} while (repetir & opcion<=4);


		system("cls||clear");

}

void submenu_Temperaturas() //sub menu de las distintas mediciones de temperatura

{
int opcion = 0;
bool repetir = true;	

do
{
cout<<endl;

cout<< " Escogiste Temperaturass, Estas son nuestras opciones  " <<endl;
cout<< " [1] De Celsius a Kelvin  " <<endl;
cout<< " [2] De Kelvin a Fahrenheit  " <<endl;
cout<< " [3] De Fahrenheit a Celsius " <<endl;
cout<< " [4] Volver al menu  " <<endl;
cout<< " Ingrese una opcion  " <<endl;
   cin>>opcion;
      system("cls||clear");
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


		system("cls||clear");

}

void submenuMonedas()//pasar de pesos a otras monedas y mas

{

int opcion = 0;
bool repetir = true;	

do
{
cout<<endl;

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
      system("cls||clear");
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


		system("cls||clear");
}

void submenuArreglos_Matrices()//arreglos matrices entre otros

{

int opcion = 0;
bool repetir = true;	

do
{
cout<<endl;

 cout<< " Escogiste Arreglos y matrices, Estas son nuestras opciones  " <<endl;
 cout<< " [1] Ordenar un Arreglo  " <<endl;
 cout<< " [2] Buscar un valor en un Arreglo  " <<endl;
 cout<< " [3] Suma de Matrices  " <<endl;
 cout<< " [4] Multiplicacion de Matrices  " <<endl;
 cout<< " [5] Buscar un valor en una Matriz  " <<endl;
 cout<< " [6] Volver al menu  " <<endl;
 cout<< " Ingrese una opcion  " <<endl;
   cin>>opcion;
      system("cls||clear");
    switch (opcion)
    {
    case 1:OrdenArreglo();
        break;
    case 2:BuscarArreglo();
        break;
    case 3:SumaMatrices();
        break;
    case 4:MultiplicacionMatrices();
        break;
    case 5:BuscarMatrices();
        break;
    case 6: repetir = false;
        break;
    
    default:
        break;
    }
} while (repetir & opcion<=6);


		system("cls||clear");
}

void submenuVarios() //desde fibonacci y mas

{
int opcion = 0;
bool repetir = true;	

do
{
cout<<endl;

 cout<< " Escogiste Varios, Estas son nuestras opciones  " <<endl;
 cout<< " [1] Distancia entre dos Puntos  " <<endl;
 cout<< " [2] Raices de una funcion cuadratica  " <<endl;
 cout<< " [3] Factorial  " <<endl;
 cout<< " [4] Fibonacci  " <<endl;
 cout<< " [5] Primo  " <<endl;
 cout<< " [6] Volver al menu  " <<endl;
 cout<< " Ingrese una opcion  " <<endl;
   cin>>opcion;
      system("cls||clear");
    switch (opcion)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:Fibonacci();
        break;
    case 5:
        break;
    case 6: repetir = false;
        break;
    
    default:
        break;
    }
} while (repetir & opcion<=6);


system("cls||clear");

}


//Funciones Áreas:
void AreaTriangulo()
{
float lado1 = 0;
float lado2 = 0;
float lado3 = 0;

cout<<"ingrese la medida en metros del lado #1"<<endl;
 cin>>lado1;
cout<<"ingrese la medida en metros del lado #2"<<endl;
 cin>>lado2;
cout<<"ingrese la medida en metros del lado #3"<<endl;
 cin>>lado3;
 
 float sp=(lado1+lado2+lado3)/2;
 float spl=(sp-lado1)*(sp-lado2)*(sp-lado3);
 if(spl>0)
 {
 	float areat= sqrt(sp*spl);
    cout<<"el area del triangulo es "<<areat<<endl;
 }
 
 else{
 	cout<<"las medidas ingresadas no coinciden con las de un triangulo"<<endl;
 }
 
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
float radio= 0;
float pi=M_PI;
float div=1.33333333;

cout<<"ingrese la medida del radio de la esfera"<<endl;
 cin>>radio;

 float volum=(div*pi)*pow(radio,3);

cout<<"El volumen de su esfera igresada es :"<<volum<<endl;
}

void VolumenParalelepipedo()
{
float largo=0,ancho=0,alto=0,volumenpara=0;
cout<<"hola ingresa el largo del paralelepipedo"<<endl;
cin>>largo;
cout<<"hola ingresa el alto del paralelepipedo"<<endl;
cin>>alto;
cout<<"hola ingresa el ancho del paralelepipedo"<<endl;
cin>>ancho;

volumenpara=largo*alto*ancho;
cout<<"el volumen de su paralelepipedo es de : "<<volumenpara<<endl;
}

void VolumenCubo()
{
int arista= 0;
float cubo=0;

cout<<"ingrese la medida de la arista de tu cubo"<<endl;
 cin>>arista;

cubo=pow(arista,3);

cout<<"El volumen de su esfera igresada es :"<<cubo<<endl;

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
int n=0;
int aux=0;
cout<<"ingrese el tamaño de su arreglo "<<endl;
cin>>n;
float arreglo[n];
int i=0;

cout<<"ingresa los numeros del arreglo"<<endl;

while (i<n)
{
    cin>>arreglo[i];
    i++;
}
cout<<endl;

for (int j = 0; j <n; j++)
{
    for (int m = 0; m < n-1; m++)
    {
       if (arreglo[m]>arreglo[m+1])   //usamos metodo burbuja para ordenar el arreglo
       {
        aux=arreglo[m];
        arreglo[m]=arreglo[m+1];
        arreglo[m+1]=aux;
       }
       
    }
    
}

cout<<" el arreglo ordenado es asi  ";
cout<<endl;
for (int j = 0; j < n; j++)
{
   cout<<arreglo[j];
}

}


void BuscarArreglo()
{
int n=0;
int i=0;
int j,dato;
bool band=false;
cout<<"ingrese el tamaño de su arreglo "<<endl;
cin>>n;
float arreglo[n];
cout<<"ingresa los numeros del arreglo"<<endl;

while (i<n)
{
    cin>>arreglo[i];
    i++;
}
cout<<endl;
//busqueda secuencial

cout<<"ingrese el numero a buscar en el arreglo "<<endl;
cin>>dato;
j=0;
while ((band==false)&&(j<n))
{
    if (arreglo[j]==dato)
    {
        band=true;
    }
    j++;
}

if (band==false)
{
   cout<<"el numero a buscar no existe en el arreglo"<<endl;
}

else if (band==true)
{
    cout<<"el numero buscado en el arreglo esta en la posicion : "<<j-1<<endl;
}




}

void SumaMatrices()
{
    short  int filas,columnas;
    cout<<"ingrese los datos de la matriz  "<<endl;
	cout<<"Digite el numero de filas: "; 
    cin>>filas;
	cout<<"Digite el numero de columnas: "; 
    cin>>columnas;

   float matrizA[filas][columnas]; 
   float matrizB[filas][columnas]; 
   float matrizc[filas][columnas]; 

    //pidiendo datos de la matriz A
	cout<<"ingrese los datos de la matriz A "<<endl;
	//Rellenando la matriz	A
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>matrizA[i][j];
		}
	} 
	
	cout<<"\nMostrando matriz\n\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matrizA[i][j];
		}
		cout<<"\n";
	}
    cout<<endl;
    //pidiendo datos de la matriz B
	cout<<"ingrese los datos de la matriz B "<<endl;
	
	//Rellenando la matriz	B
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>matrizB[i][j];
		}
	} 
	
	cout<<"\nMostrando matriz\n\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matrizB[i][j];
		}
		cout<<"\n";
	}
    //haciendo la suma de la matriz A y matriz B
    for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
	
			matrizc[i][j]=matrizA[i][j]+matrizB[i][j] ;
        }
    }

    cout<<"la suma de las matrices A+b es igual a : "<<endl;
    //mostrando la matriz c
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matrizc[i][j];
		}
		cout<<"\n";
	}
}

void MultiplicacionMatrices()
{
 short  int filas,columnas;
    cout<<"ingrese los datos de la matriz  "<<endl;
	cout<<"Digite el numero de filas: "; 
    cin>>filas;
	cout<<"Digite el numero de columnas: "; 
    cin>>columnas;

   float matrizA[filas][columnas]; 
   float matrizB[filas][columnas]; 
   float matrizc[filas][columnas]; 

    //pidiendo datos de la matriz A
	cout<<"ingrese los datos de la matriz A "<<endl;
	//Rellenando la matriz	A
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>matrizA[i][j];
		}
	} 
	
	cout<<"\nMostrando matriz\n\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matrizA[i][j];
		}
		cout<<"\n";
	}
    cout<<endl;
    //pidiendo datos de la matriz B
	cout<<"ingrese los datos de la matriz B "<<endl;
	
	//Rellenando la matriz	B
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>matrizB[i][j];
		}
	} 
	
	cout<<"\nMostrando matriz\n\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matrizB[i][j];
		}
		cout<<"\n";
	}
    //haciendo la multiplicacion de la matriz A y matriz B
    for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
	
			matrizc[i][j]=matrizA[i][j]*matrizB[i][j] ;
        }
    }

    cout<<"la multiplicacion de las matrices A*b es igual a : "<<endl;
    //mostrando la matriz c
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matrizc[i][j];
		}
		cout<<"\n";
	}
}

void BuscarMatrices()
{
int num=0;
short int filas,columnas,fi,co;
bool verifi=false;

//pidiendo datos de la matriz 

	cout<<"ingrese los datos de la matriz  "<<endl;
	cout<<"Digite el numero de filas: "; 
    cin>>filas;
	cout<<"Digite el numero de columnas: "; 
    cin>>columnas;
int matrizA[100][100];

	//Rellenando la matriz	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>matrizA[i][j];
		}
	} 
	
	cout<<"\nMostrando matriz\n\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matrizA[i][j];
		}
		cout<<"\n";
	}

    cout<<"Que numero deseas buscar"<<endl;
    cin>>num;

    for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			if (num==matrizA[i][j])
            {
               fi=i;
               co=j;
               verifi=true;
            }
            

        }
    }
    if (verifi==true)
    {
        cout<<"el numero \t"<<num<<"\testa en la fila\t"<<fi<<"\ty en la columna\t "<<co<<endl;
    }
    else
    {
        cout<<"el numero no fue encontrado"<<endl;
    }
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
int n,x=0,y=1,z=1;

cout<<"digite el numero de elementos"<<endl;
cin>>n;

cout<<"1"<<" " ;
for (int i = 0; i < n; i++)
{
   z=x+y;
   cout<<z<<" ";
   x=y;
   y=z;
}
cout<<"\n";
}

void Primo()
{

}



