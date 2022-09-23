/*Ejercicio 5: 
Desarrolle un programa que lea de la 
entrada estándar un vector de enteros 
y determine el mayor elemento del vector.
*/

#include <iostream> 
using namespace std;
int main() {
	int numbers[100],n,max=0;
	
	cout<<"Cuantos numeros desea ingresar: ";cin>>n;
	
	for(int i=0;i<n;i++) {
		cout<<i<<") "; cin>>numbers[i];
	}
	
	max=numbers[0];
	for(int i=0;i<n;i++) 
		if(numbers[i]>max)
			max=numbers[0];
	
	cout<<"\nEl numero mas grande es: "<<max;
	
	return 0;
}
