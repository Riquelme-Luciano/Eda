/*Ejercicio 2:
Realiza un programa que defina una matriz de 3x3
y escriba un ciclo para que muestre la diagonal
principal de la matriz.*/

#include <iostream>
using namespace std;
int main() {
	int matriz[3][3]={
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}
                     };

	for(int f=0;f<3;f++) {
		for(int c=0;c<3;c++)
			cout<<matriz[f][c]<<"  ";

	cout<<"\n";
	}

	cout<<"\nDiagonal pricipal"<<endl;
	cout<<"--------------------"<<endl;
	for(int f=0;f<3;f++) {
		for(int c=0;c<3;c++) {
			if(f==c) {
				cout<<matriz[f][c];
			}
			else {
                cout<<"  ";
			}
		}
		cout<<"\n";
	}


	return 0;
}
