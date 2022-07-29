//Determinador de si es o no un triangulo .
//Para que cumpla debe la suma de dos de sus numeros ingresados ser mayor que el otro numero sea 
//a+b >c pero primero deberemos ordenar los 3 numeros ya que a,b<c 

#include<iostream>
using namespace std;
float triangulo(float a,float b,float c);

int main()
{

float num1=0, num2=0, num3=0,N1,N2,N3,respuesta=0;

cout << "vamos a saber si tienes un triangulo" << endl << "ingresa un numero" << endl;
 cin >> num1;

cout << "ingresa otro numero" << endl;
 cin >> num2;

cout <<"ingresa otro numero" << endl;
 cin >> num3;

 if (num1>num3)     //aca ordenamos nuestros datos por si el usuario ingreso en desorden los valores se sabe                     
 {                  // que a y b siendo catetos en su mayoria el mayor segun la propiedad es c "hipotenusa"
  N1=num3;          // y para cumplir esta propiedad ordenamos los datos para que a y b sean los menores y c
  N2=num2;          // tenga el numero mayor y ya la suma de a+b>c tendra que cumplir la propiedad de los triangulos
  N3=num1;
 }else if (num2>num3)
 {
  N1=num1;
  N2=num3;
  N3=num2;
 } 
 else{
  N1=num1;
  N2=num2;
  N3=num3;
 }
 
 respuesta = triangulo(N1,N2,N3);

 if (respuesta==1)
  {
    cout << "si tenemos un triangulo" << endl;

  }

 else
  {
    cout << "no es un triangulo" << endl;
  }

   return 0; 
}


float triangulo(float a,float b,float c)
{

 if ( a+b > c  )
  {
  return 1;  
  }

 else
  {
  return 0;
  }

}