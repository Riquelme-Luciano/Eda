/*
Ejercicio 15:
Se tiene el vector A con 100 elementos almacenados.
Diseñe un algoritmo que escriba SI, si el vector
esta ordenado ascendentemente, o NO si el vector
no está ordenado
*/

//sizeof() -> la funcion devuelve el tamaño de un elemento en byte

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a[]= {0,2,2,5,5,5,10,10,10};
    int ordenado = 0;
    int a_Tamanio=sizeof(a)/sizeof(int);

    for (int i = 0; i < a_Tamanio; i++)
    {
        if(i==a_Tamanio-1)
        {
            break;
        }
        if (a[i] <= a[i+1])
        {
            ordenado++;
        }
    }

    cout<<"\n";
    if (ordenado == a_Tamanio-1)
    {
        cout<<"SI esta ordenado\n";
    }
    else
    {
        cout<<"SI esta ordenado\n";
    }


    getch();
    return 0;
}


/*
    int vectorA[100],aux,n=0;
    bool ordenado;

    cout<<"Digite el numero de elementos que va a tener el vector: ";cin>>n;
    cout<<"Ingrese elementos para el vector:"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<i<<") "; cin>>vectorA[i];
    }

    aux=vectorA[0];

    for(int i=0; i<vectorA[i]; i++)
        if(aux<=vectorA[i])   // 0 <=0
        {
            aux=vectorA[i];  // 0
            ordenado=true;
        }
        else
        {
            ordenado=false;
            break;
        }

    if(ordenado==true)
        cout<<"Vector ordenado."<<endl;
    else
        cout<<"Vector desordenado."<<endl;
*/
