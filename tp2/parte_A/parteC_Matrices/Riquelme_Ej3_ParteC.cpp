/*Ejercicio 3:
Hacer una matriz M1 de tipo entera de 2 * 2,
llenarla de números y luego copiar todo el
contenido de M1 hacia otra matriz M2,
sumándole 1 a cada elemento de M1 al copiarlo.
*/

#include <iostream>
#include <conio.h>
#define TAM 2
using namespace std;

int main() {
    int m1[][TAM]={{2,2},{2,2}};

    int m2[][TAM]={};

	//suma de elementos
	for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            m2[i][j]=m1[i][j]+1;
        }
    }

	for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<m2[i][j]<<" ";
        }
        cout<<"\n";
    }

	getch();
	return 0;
}

/*
	int m1[2][2],m2[2][2];

	cout<<"Llene matriz 2x2 de numeros:"<<endl;
	for(int x=0;x<2;x++) {
		for(int y=0;y<2;y++) {
			cout<<"["<<x<<"]["<<y<<"]= ";cin>>m1[x][y];
		}
	}

	cout<<"\n";
	for(int x=0;x<2;x++) {
		for(int y=0;y<2;y++) {
			m2[x][y]=m1[x][y]+1;
			if(m2[x][y]<10)
				cout<<"0";
			cout<<m2[x][y]<<"  ";
		}
		cout<<"\n";
	}

*/
