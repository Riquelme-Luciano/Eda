/*Ejercicio 6:
Escribe un programa que defina un
vector de números y calcule si
existe algún número en el vector
cuyo valor equivale a la suma del
resto de números del vector.*/

#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int a[]={0,0,0,8,4,2,2};
	int tamanio=sizeof(a)/sizeof(int);
	int suma=0,contador=0;

	for(int i=0;i<tamanio;i++)
    {
        suma+=a[i];
    }
    cout<<"Numeros encontrados: ";
	for(int i=0;i<tamanio;i++)
    {
        if(suma-a[i]==a[i])
        {
            cout<<a[i]<<" ";
        }
    }

	getch();
	return 0;
}

/*
int n,numeros[100];
	int sumador=0;

	cout<<"Cuantos numeros va a ingresar: ";cin>>n;

	for(int i=0;i<n;i++) {
		cout<<i<<") ";cin>>numeros[i];
		sumador+=numeros[i];
	}

	int contador=0;
	for(int i=0;i<n;i++) {
		if((sumador-numeros[i])==numeros[i])
			contador++;
	}

	cout<<"Se encontraron "<<contador<<" equivalencias.";

*/
