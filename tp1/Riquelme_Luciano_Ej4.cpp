/*Ejercicio 4: Ejecute el programa del ejercicio anterior
con entradas erróneas y observe los resultados. Por ejemplo,
introduzca un dato de tipo carácter cuando se espera un dato
de tipo entero.*/

#include <iostream>
#include <string>
using namespace std;
int main() {
	int edad=0;
	string sexo;
	float altura=0;
	
	cout<<"Ingrese edad: ";cin>>edad;
	cout<<"Ingrese sexo: ";cin>>sexo;
	cout<<"Ingrese altura: ";cin>>altura;
	
	cout<<endl;
	cout<<"Edad: "<<edad<<" Sexo:"<<sexo<<" Altura: "<<altura;
	
	return 0;
}
