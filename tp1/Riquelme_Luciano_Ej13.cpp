/*Ejercicio 13: Realice un programa que pida valores enteros
para hora, otra para minutos, y otra para segundos,
como resultado lo transforma y muestra el total a cantidad
de segundos.*/

#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int horas,minutos,segundos;
	cout<<"Ingrese los siguientes datos"<<endl;
	cout<<"horas: ";cin>>horas;
	cout<<"minutos: ";cin>>minutos;
	cout<<"segundos: ";cin>>segundos;

	cout<<"Total a segundos: "<<(horas*3600)+(minutos*60)+segundos<<endl;

    getch();
	return 0;
}
