/*Ejercicio 3: 
Escribe un programa que lea de la entrada estándar un vector de 
números de tamaño 100, pero que cargue por teclado n números, y 
los muestre en la salida estándar los números del vector con sus 
índices asociados.
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
