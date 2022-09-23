/*
Ejercicio 10: Escriba un programa que
calcule el valor de: 1!+2!+3!+...+n!
(suma de factoriales).
*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int numero=4,num=1,sumaFactorial=0;

    for(int i=1; i<=numero; i++)
    {
        num*=i;
        cout<<num<<" ";
        sumaFactorial+=num;
    }
    cout<<"= "<<sumaFactorial<<endl;

    getch();
    return 0;
}






/*

  int number=5,factorial=1,suma=0;

    for(int i=1; i<=number; i++)
    {
        factorial*=i;
        suma+=factorial;
        cout<<i;
        if(i<number)
            cout<<" * ";
        else
            cout<<"= ";

    }

    cout<<factorial<<"--->factorial de "<<number<<endl;
    cout<<"suma de los factores es: "<<suma;

*/
