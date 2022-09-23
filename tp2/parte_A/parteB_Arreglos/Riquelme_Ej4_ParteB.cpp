/*Ejercicio 4:
Escribe un programa que defina un
vector de números y muestre en la
salida estándar el vector en orden
inverso—del último al primer elemento.*/

#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	double arreglo[20]={1,2,3,4,5,6,7,8,9,10};
	int tamanio=sizeof(arreglo)/sizeof(double);

	cout<<tamanio<<endl;
	cout<<"[";
	for(int i=tamanio-1;i>=0;i--)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<"]\n";

	getch();
	return 0;
}


/*
int numeros[100],n;

	cout<<"Ingrese cuantos elementos va a procesar: ";cin>>n;

	for(int i=0;i<n;i++) {
		cout<<i<<") "; cin>>numeros[i];
	}

	cout<<"\nMuestra de elementos en orden inverso al ingresado:"<<endl;
	for(int i=n-1;i>=0;i--)
		cout<<i<<") "<<numeros[i]<<endl;
*/
