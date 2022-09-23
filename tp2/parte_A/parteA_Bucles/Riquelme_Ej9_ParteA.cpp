/*
Ejercicio 9:
Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial) */

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int numero=8,num=1;

    cout<<"Factorial de "<<numero<<"---> ";
    for(int i=1; i<=numero; i++)
    {
        num*=i;
        cout<<num<<" ";
    }


    getch();
    return 0;
}





/*
   int number=0,factorial=1;

    cout<<"Ingrese un numero: ";
    cin>>number;
    for(int i=1; i<=number; i++)
    {
        factorial*=i;
        cout<<i;
        if(i<number)
            cout<<" * ";
        else
            cout<<"= ";
    }
    cout<<factorial<<"---> Factorial de "<<number;

*/
