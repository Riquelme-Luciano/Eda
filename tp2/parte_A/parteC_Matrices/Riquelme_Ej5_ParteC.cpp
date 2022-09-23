/*Ejercio 5:
Realice un programa que lea una matriz de 3x3
y cree su matriz traspuesta. La matriz traspuesta
es aquella en la que la columna i era la fila i
de la matriz original. */

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int m[][3]= {
	    {1,2,3},
	    {1,2,3},
	    {1,2,3}
	    };

	for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<m[j][i]<<" ";
        }
        cout<<"\n";
    }

	getch();
	return 0;
}


/*
int m[3][3];

	cout<<"Ingrese numeros para llenar la matriz 3x3:"<<endl;
	for(int y=0;y<3;y++) {
		for(int x=0;x<3;x++) {
			cout<<"["<<y<<"]["<<x<<"]= ";cin>>m[y][x];
		}
	}

	cout<<"\nMatriz Original\n";
	for(int y=0;y<3;y++) {
		for(int x=0;x<3;x++) {
			if(m[y][x]<10)
				cout<<"0";
			cout<<m[y][x]<<"  ";
		}
		cout<<"\n";
	}

	cout<<"\nMatriz Transpuesta\n";
	for(int y=0;y<3;y++) {
		for(int x=0;x<3;x++) {
			if(m[x][y]<10)
				cout<<"0";
			cout<<m[x][y]<<"  ";
		}
		cout<<"\n";
	}
*/
