/*Ejercicio 4:  
Hacer una matriz preguntando al usuario 
el número de filas y columnas, llenarla de
números aleatorios, copiar el contenido a 
otra matriz y por último mostrarla en 
pantalla.
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int f,c,m1[100][100],m2[100][100];
	
	cout<<"Ingrese cantidad de filas: ";cin>>f;
	cout<<"Ingrese cantidad de columnas: ";cin>>c;
	
	for(int y=0;y<f;y++) {
		for(int x=0;x<c;x++) {
			m1[y][x]=rand()%51;
			m2[y][x]=m1[y][x];
			if(m2[y][x]<10)
				cout<<"0";
			cout<<m2[y][x]<<"  ";
		}
		cout<<"\n";
	}
	
	
	return 0;
}
