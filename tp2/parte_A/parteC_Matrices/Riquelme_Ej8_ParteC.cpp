/*
Ejercicio 8:
 Realice un programa que calcule
 el producto de dos matrices
 cuadradas de 3x3.
 */

#include<iostream>
using namespace std;
int main(){
	int matriz1[3][3],matriz2[3][3],matriz3[3][3]={{0,0,0},{0,0,0},{0,0,0}};

	cout<<"Ingrese numeros para la matriz 1:\n";

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"["<<i<<"]["<<j<<"]: ";cin>>matriz1[i][j];
		}
	}

	cout<<"Ingrese numeros para la matriz 2:\n";

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"["<<i<<"]["<<j<<"]: ";cin>>matriz2[i][j];
		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				matriz3[i][j]+=matriz1[i][k]*matriz2[k][j];
			}
		}
	}

	cout<<"\nMatriz 1:\n";

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz1[i][j]<<"  ";
		}
	cout<<"\n";
	}

	cout<<"\nMatriz 2:\n";

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz2[i][j]<<"  ";
		}
	cout<<"\n";
	}

	cout<<"\nMatriz producto:\n";

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz3[i][j]<<"  ";
			}
	cout<<"\n";
	}
	cout<<"\n\n\n";

	system("pause");
	return 0;
}
