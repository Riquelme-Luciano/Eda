/*
Ejercicio 12:
Hacer un programa que calcule
el resultado de la siguiente
expresion: 1-2+3-4+5-6...n
*/

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int numero=1,n=5,sumaFactorial=0;

    for(int i=1;i<n;i++)
    {
        numero-=(i+1);
        sumaFactorial+=numero;
        cout<<numero<<" ";
    }
    cout<<"= "<<sumaFactorial<<endl;

    getch();
    return 0;
}




/*
  int n=0,resultado=0,resta=1;

    cout<<"Ingrese numero: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        resultado+=i*resta;
        resta*=-1;
    }
    cout<<"Resultado es:"<<resultado;

*/
