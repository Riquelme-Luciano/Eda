/*Ejercicio 15: Haga un programa que tenga como entrada
una cantidad de dinero en pesos argentinos, y su salida
será el monto convertido a dólares, con dólar a 100$.*/

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main() {
	double pesos=0,dolar=100,conversion=0;

	cout<<"Ingrese una cantidad de pesos a convertir a dolar: ";cin>>pesos;
	conversion=pesos/dolar;
	cout<<"Pesos: "<<pesos<<"\t Dolares: "<<setprecision(3)<<conversion<<endl;

	getch();
	return 0;
}
