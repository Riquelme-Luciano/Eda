/*Ejercicio 11: Escribe un programa que lea de la entrada estándar dos números
 y muestre en la salida estándar su suma, resta, multiplicación y división.*/
 
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	float n1,n2;
	
	cout<<"Ingrese primer numero: "; cin>>n1;
	cout<<"Ingrese segundo numero: "; cin>>n2;
	
	cout<<"Suma: "<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
	cout<<"Resta: "<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
	cout<<"Multiplicacion: "<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
	cout<<"Division: "<<n1<<" / "<<n2<<" = "<<setprecision(3)<<n1/n2<<endl;
	
	return 0;
}
