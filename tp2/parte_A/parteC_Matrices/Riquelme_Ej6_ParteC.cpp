/*Ejercicio 6: 
Realice un programa que calcule 
la suma de dos matrices cuadradas de 3x3.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	int mA[3][3];	
	int mB[3][3];		
	srand(time(NULL));
	
	cout<<"Matriz A\n";
	for(int f=0;f<3;f++) {
		for(int c=0;c<3;c++) {
			mA[f][c]=rand()%51;
			if(mA[f][c]<10)
				cout<<"0";
			cout<<mA[f][c]<<"  ";
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz B\n";
	for(int f=0;f<3;f++) {
		for(int c=0;c<3;c++) {
			mB[f][c]=rand()%51;
			if(mB[f][c]<10)
				cout<<"0";
			cout<<mB[f][c]<<"  ";
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz A+B\n";
	for(int f=0;f<3;f++) {
		for(int c=0;c<3;c++) {
			mA[f][c]+=mB[f][c];
			if(mA[f][c]<10)
				cout<<"0";
			cout<<mA[f][c]<<"  ";
		}
		cout<<"\n";
	}
	
	
	return 0;
}
