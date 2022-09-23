/*Ejercicio 7: 
Desarrollar un programa que determine si 
una matriz es simétrica o no. Una matriz 
es simétrica si es cuadrada y si es igual 
a su matriz transpuesta.
*/

#include <iostream>
using namespace std;
int main() {
	int m1[100][100],f,c;
	int contador=0;
	int verificador=0;
	
	cout<<"Ingrese numero cantidad de fila:";cin>>f;
	cout<<"Ingrese numero cantidad de columnas:";cin>>c;
	
	
	cout<<"Llene la matriz con numeros:"<<endl;
	for(int x=0;x<f;x++) 
		for(int y=0;y<c;y++) {
			cout<<"["<<x<<"]["<<y<<"]= ";cin>>m1[x][y];
			}
	
	cout<<"\nMatriz ingresada\n";
	for(int i=0;i<f;i++) {
		for(int j=0;j<c;j++) {
			cout<<m1[i][j]<<"  ";
			contador++;	
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz transpuesta\n";
	for(int x=0;x<f;x++) {
		for(int y=0;y<c;y++) {	
			cout<<m1[y][x]<<"  ";
			if(m1[x][y]==m1[y][x])
				verificador++;
		}
		cout<<"\n";
	}
	
	
	if(f==c)
		if(contador==verificador)
			cout<<"\nSi es simetrica.\n\n\n"<<endl;
	else 	
		cout<<"\nNo es simetrica.\n\n\n"<<endl;
	
	
	system("pause");
	return 0;
}
