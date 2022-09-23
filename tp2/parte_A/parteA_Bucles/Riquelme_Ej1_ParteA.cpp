/*
Ejercicio 1:
Realice un programa que solicite
de la entrada estándar un entero del 1 al 10 y
muestre en la salida estándar su tabla de multiplicar.*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main() {
    int numero=2,i=1;

    /*
    printf("Tabla del usando for\n");
    for(int x=1;x<=10;x++){
        cout<<numero*x<<endl;
    }
    */
    /*
    printf("Tabla del usando while\n");
    while(i<=10) {
        cout<<numero*i<<endl;
        i++;
    }
    */

    printf("Tabla del usando do while\n");
    do {
        cout<<numero*i<<endl;
        i++;
    } while(i<=10);



    getch();
	return 0;
}


//double pi = 3.14159265358979323846;
/*
int n,e;

	do {
		cout<<"Ingrese un numero (1-10): ";
		cin>>n;
	} while(n<1 || n>10);
	e=n;
	cout<<"\nTabla de Multiplicar del "<<e<<endl;
	cout<<"----------------------------"<<endl;

	for(int i=1;i<=10;i++) {
		cout<<e<<" * "<<i<<" = "<<n*i<<endl;
	}
*/
