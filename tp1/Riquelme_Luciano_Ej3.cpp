/*Ejercicio 3: Realice un programa que lea de la entrada estándar
los siguientes datos de una persona: Edad: dato de tipo entero.
Sexo: dato de tipo carácter. Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida
estándar.*/

#include <iostream>
#include<conio.h>
using namespace std;
int main() {
	int edad=0;char sexo[5];double altura=0;

    cout<<"Ingrese los siguientes datos"<<endl;
	cout<<"edad: ";cin>>edad;
    fflush(stdin);
	cout<<"sexo: (H/M): ";cin.getline(sexo,5,'\n');
	cout<<"altura: ";cin>>altura;
    cout<<"---------------------------------------------------------------------"<<endl;
	cout<<"Datos Ingresados: Edad: "<<edad<<", Sexo:"<<sexo<<", Altura: "<<altura<<endl;

    getch();
	return 0;
}
