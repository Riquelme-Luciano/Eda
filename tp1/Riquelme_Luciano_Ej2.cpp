/*Ejercicio 2: Escribe un programa que lea de 
la entrada estándar el precio de un producto y 
muestre en la salida estándar el precio del 
producto al aplicarle el IVA.*/

#include <iostream>
using namespace std;
int main() {
	double precio;
	
	cout<<"Ingrese precio del producto: ";cin>>precio;
	cout<<"IVA: "<<precio*0.16<<endl;
	cout<<"Precio final con IVA: "<<precio*1.16<<endl;
	
	return 0;
}
