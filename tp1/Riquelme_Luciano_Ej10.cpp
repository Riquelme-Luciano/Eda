/*
Ejercicio 10: Escriba un programa que lea de la entrada estándar
el nombre de una persona en un arreglo de caracteres. Además pide
el año de nacimiento, y determina su edad en años cumplidos.
*/

#include <iostream>
#include <conio.h>
#include <locale> //permite usar la letra ñ y vocales acentuadas
using namespace std;
int main() {
    setlocale(LC_ALL,"spanish");
	string nombre;int anioNacimiento;

	cout<<"Nombre: "; getline(cin,nombre);
	cout<<"Año de nacimiento: "; cin>>anioNacimiento;

	cout<<"Hola "<<nombre<<" usted tiene "<<2022-anioNacimiento<<" años."<<endl;


	getch();
	return 0;
}



/*
    USO DE NUMEROS ALEATORIOS RAND()

    #include <iostream>
    #include <stdlib.h>  CONTIENE LAS FUNCIONES RAND()
    #include <conio.h>
    using namespace std;
    int main() {
        cout<<"random="<<rand()<<endl;
	getch();
	return 0;
}

*/
