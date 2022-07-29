#include <iostream>

using namespace std;

int cifrado_4_digitos(int password, int n1, int n2, int n3, int n4, int N1, int N2 ,int N3 ,int N4); 

    int main(){
     int password=0, n1=0, n2=0, n3=0, n4=0, N1=0, N2=0 ,N3=0 ,N4=0, desci=0;
        cout<<" Ingrese la clave de 4 digitos: ";
            cin>>password;
         
         if (password>999 && password<=9999)
        {
        n4=password%10;
        password=password/10;
        n3=password%10;
        password=password/10;
        n2=password%10;
        password=password/10;
        n1=password%10;
        password=password/10;

        n1=((n1+7)%10); 
        n2=((n2+7)%10);
        n3=((n3+7)%10);
        n4=((n4+7)%10);

        N1=n3; N2=n4; N3=n1; N4=n2;
        cout<<"Su codigo es: "<<N1<<N2<<N3<<N4<<endl;
        desci=cifrado_4_digitos(password, n1, n2, n3, n4,N1, N2 ,N3 ,N4);

        }
            
       else
        {
        cout<<" Por favor ingrese un numero 4 digitos"<<endl;
        }
        
 return 0;
}

 int cifrado_4_digitos(int password, int n1, int n2, int n3, int n4, int N1, int N2 ,int N3 ,int N4){
    int pes=0;
    cout<<" Ingrese la clave cifrada de 4 digitos: ";
    cin>>password;  
        
      if (password>999 && password<=9999)
        {
        
          n4=password%10;
          password=password/10;
          n3=password%10;
          password=password/10;
          n2=password%10;
          password=password/10;
          n1=password%10;
          password=password/10;

            n4=(n4+3)%10;
            n3=(n3+3)%10;
            n2=(n2+3)%10;
            n1=(n1+3)%10;
            N1=n3; N2=n4; N3=n1; N4=n2;
           // cout<<" Su clave original es: "<<N1<<N2<<N3<<N4<<endl;
           pes=N1+N2+N3+N4;
           cout<<" Su clave original es: "<< pesjbh<<endl;
      }
       

    return pes ;

}

