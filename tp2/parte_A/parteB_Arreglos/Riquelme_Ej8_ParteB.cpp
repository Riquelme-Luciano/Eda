/*Ejercicio 8: 
Hacer un programa que lea 5 números en un arreglo, 
los copie a otro arreglo multiplicados por 2 y 
muestre el segundo arreglo.
*/

#include <iostream>
using namespace std;
int main() {
	int a[5],b[5];
	
	cout<<"Ingrese cinco numeros en el arreglo: "<<endl;
	
	for(int i=0;i<5;i++) {
		cout<<i<<") ";cin>>a[i];
	}
	
	cout<<"Valores del segundo arreglo: "<<endl;
	for(int i=0;i<5;i++) {
		b[i]=a[i]*2;
		cout<<b[i]<<" ";
	}
		
	
	
	
	
	return 0;
}
