/*Ejercicio 6: Escriba un programa que calcule x^y,
donde tanto x como y son enteros positivos,
sin utilizar la función pow.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int base=4,exponente=0,potencia=1;

    for(int i=0; i<exponente; i++)
    {
        potencia*=base;
    }
    cout<<"Potencia= "<<potencia<<endl;

    getch();
    return 0;
}








/*
    int base=0, exponente=0,resultado=0,exp=0;

	cout<<"Ingrese base: ";cin>>base;
	cout<<"Ingrese exponente: ";cin>>exponente;

	for(resultado=1;exponente>0;exponente--) {
		resultado*=base;
		exp++;
	}
	cout<<"El resultado de "<<base<<" ^ "<<exp<<": "<<resultado;

*/
