/*Ejercicio 9: Escriba un programa que ingrese nombre y
tiempo de nado de dos nadadoras y determine y muestre
cuál de ellas llego primero.*/

#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	string nombreNadador1,nombreNadador2;
	double tiempoNad1,tiempoNad2;

    cout<<"Nadador 1"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Nombre: "; getline(cin,nombreNadador1);
    cout<<"Tiempo: "; cin>>tiempoNad1;

    system("cls");

    cout<<"Nadador 2"<<endl;
    cout<<"------------------------------"<<endl;
    fflush(stdin);
    cout<<"Nombre: "; getline(cin,nombreNadador2);
    cout<<"Tiempo: "; cin>>tiempoNad2;

    system("cls");

    if(tiempoNad1<tiempoNad2) {
        cout<<"Primero en llegar fue: "<<nombreNadador1<<endl;
    } else if(tiempoNad2<tiempoNad1) {
        cout<<"Primero en llegar fue: "<<nombreNadador2<<endl;
    } else {
        cout<<"Fue un empate."<<endl;
    }


	getch();
	return 0;
}
