/*Ejercicio 7:
Realiza un programa que defina dos vectores de caracteres
y después almacene el contenido de ambos vectores en un
nuevo vector, situando en primer lugar los elementos del
primer vector seguido por los elementos del segundo vector.
Muestre el contenido del nuevo vector en la salida estándar.  */

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char a[]= {'1','2','3','4'};
    char b[]= {'5','6','7','8'};
    char c[8]= {};

    for(int i=0; i<4; i++)
    {
        c[i]=a[i];
    }
    for(int i=4,x=0; i<8; i++, x++)
    {
        c[i]=b[x];
    }

    cout<<"[ ";
    for(int i=0; i<8; i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<"]\n";


    getch();
    return 0;
}


/*
	char c1[]={'a','b','c','d','x'};
	char c2[]={'e','f','g','h','i'};
	char c3[10];

	for(int i=0;i<5;i++)
		c3[i]=c1[i];

	for(int i=5;i<10;i++)
		c3[i]=c2[i-5];

	for(int i=0;i<10;i++)
		cout<<c3[i]<<" ";

	cout<<"\n\n";
*/
