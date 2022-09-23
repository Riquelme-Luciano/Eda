/*Ejercicio 12: Escriba un fragmento de programa
que intercambie (swap) los valores de dos variables.*/

#include <iostream>
using namespace std;
int main() {
	int v1,v2,aux;

	cout<<"Ingrese valor: "; cin>>v1;
	cout<<"Ingrese otro valor: "; cin>>v2;

	//Imprimo los valores
	cout<<"valor a: "<<v1<<endl;
	cout<<"valor b: "<<v2<<endl;

	cout<<"\nIntercambio"<<endl;
	cout<<"-----------"<<endl;
	/*
	aux=v1;
	v1=v2;
	v2=aux;
    */

    /*
    //Intercambio con metodo swap()
	swap(v1,v2);
    */

    // Intercambiar sin utilizar variable aux
    v1= v1^v2;
    v2= v2^v1;
    v1= v1^v2;

	//Devuelvo valores intercambiados
	cout<<"valor a: "<<v1<<endl;
	cout<<"valor b: "<<v2<<endl;



	return 0;
}
