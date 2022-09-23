/*
Ejercicio 13:
Hacer un programa que muestre
la serie Fibonacci, mostrando
sus elementos desde
el  1 1 2 3 5 8 13...hasta n
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n, nAnterior=0,nSiguiente=1,nActual;

    cout<<"Ingrese numero: "; cin>>n;

    for (int i = 0; i <= n; i++)
    {
        nActual=nAnterior+nSiguiente;
        cout<<nActual<<" ";
        nAnterior=nSiguiente;
        nSiguiente=nActual;
    }
    cout<<endl;

    getch();
    return 0;
}

/*
 int n=0,anterior=0,siguiente=1,aux=0;

    cout<<"Ingrese numero para determinar la serie Fibonacci: ";
    cin>>n;

    cout<<" 0";
    for(int i=1; i<=n; i++)
    {
        cout<<" "<<siguiente;// 1 1 2 3 5 8
        aux=siguiente; // 1 1 2 3 5 8
        siguiente+=anterior; // 1 2 3 5 8 13
        anterior=aux; // 1 1 2 3 5 8
    }

    cout<<"\n\n"<<endl;
*/
