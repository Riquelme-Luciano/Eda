/*Ejercicio 2:
Escribe un programa usando un for, 
que defina un vector de n�meros y 
calcule la multiplicaci�n acumulada
de sus elementos. 
Use la librer�a conio.h, y la funci�n getch().
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[5] = {1,2,3,4,5};
	int multiplicacion=1;

	for(int i=0;i<5;i++) {
		multiplicacion *= numeros[i]; 
		cout<<numeros[i]<<" ";
	}
		
	cout<<"\nLa multiplicacion de los elementos es: "<<multiplicacion<<endl;
	
	getch();
	return 0;
}

