/*Ejercicio 1: 
Hacer un programa para rellenar una matriz 
pidiendo al usuario el número de filas y 
columnas, Posteriormente mostrar la matriz 
en pantalla.
*/
#include <iostream>
using namespace std;
int main() {
	int matriz[100][100];
	int f,c;
	
	cout<<"Ingrese numero de filas: ";cin>>f;
	cout<<"Ingrese numero de columnas: ";cin>>c;
	
	cout<<"\nIngrese numeros de la matriz:"<<endl;	
	
	for(int y=0;y<f;y++) {
		for(int x=0;x<c;x++) {
			cout<<"["<<y<<"]"<<"["<<x<<"]= ";cin>>matriz[y][x];				
		}
	}
	
	cout<<"\n";
	for(int i=0;i<f;i++) {
		for(int x=0;x<c;x++) {
			cout<<matriz[i][x]<<"  ";
		}
		cout<<"\n";
	}
	
	return 0;
}
