/*Ejercicio 11:
Escriba un programa que calcule el
valor de: 2^1+2^2+2^3+...+2^n
*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int numero=5,factorial,sumaFactorial=0;

    for(int i=1;i<=numero;i++) {
        factorial=pow(2,i);
        cout<<factorial<<" ";
        sumaFactorial+=factorial;
    }
    cout<<"= "<<sumaFactorial<<endl;


    getch();
    return 0;
}




/*
int number=0,res=0;

    cout<<"Ingrese numero: ";
    cin>>number;
    for(int i=1; i<=number; i++)
    {
        res+=2*i;
        cout<<"2*"<<i;
        if(i<number)
            cout<<"+";
        else
            cout<<"= ";
    }

    cout<<res;

*/
