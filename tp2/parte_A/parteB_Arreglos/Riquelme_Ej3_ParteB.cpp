/*Ejercicio 3: 
Escribe un programa que lea de la entrada est�ndar un vector de 
n�meros de tama�o 100, pero que cargue por teclado n n�meros, y 
los muestre en la salida est�ndar los n�meros del vector con sus 
�ndices asociados.
*/
#include <iostream> 
using namespace std;
int main() {
	
	int n;
	int numeros[100];
	
	cout<<"Ingrese cuantos numeros va a procesar: ";cin>>n;
	
	cout<<"Ingrese elementos: "<<endl;
	for(int i=0;i<n;i++) {
		cout<<i<<") ";cin>>numeros[i];
	}
	
	cout<<"\nUsted ingreso:"<<endl;
	cout<<"*******************"<<endl;
	for(int i=0;i<n;i++)
		cout<<i<<") "<<numeros[i]<<endl;
	
	return 0;
}
