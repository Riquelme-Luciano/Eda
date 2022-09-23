/*Ejercicio 1: 
Escribe un programa que con While, 
defina un vector de números y calcule 
la suma de sus elementos. 
Use la librería conio.h,y la función getch().*/

#include <iostream>
#include <conio.h> 
using namespace std;
int main() {
	int c=6;
	int numeros[c]={1,2,3,4,5,6};
	int i=0;
	int suma=0;	
	
	while(i<c) {
		suma+=numeros[i];
		i++;
	}
	cout<<"Suma de los elementos= "<<suma;
	
	
	getch();
	return 0;
}
