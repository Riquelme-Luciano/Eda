/*Ejercicio 16: 
Dado un arreglo V de tamaño 20 con números enteros. 
Deje en un vector A todos los números negativos y 
en un vector B todos los positivos o iguales a cero.
*/

#include <iostream>
using namespace std;
int main() {
	int V[10]={5,2,12,3,0,-6,-10,-9,-8,-20}; int A[5],a=0; int B[5],b=0;
	
	for(int v=0;v<10;v++) {
		// deje vector B todos los positivos o iguales a cero  
		 if(V[v]>=0) {
		     B[b]=V[v];
		     b++;
			 } else { 
			 	//Deje en un vector A todos los números negativos 
		 		 A[a]=V[v];
		 		 a++;
				}
	}
	cout<<"Numeros mayores o iguales a 0 guardados en Vector B son: "<<endl;
	for(b=0;b<5;b++)
	 	cout<<B[b]<<"\t";
	 	
	  cout<<"\n";
	  	
	cout<<"Numeros menores a 0 guardados en Vector A son: "<<endl;
	for(a=0;a<5;a++)
	 	cout<<A[a]<<"\t";
	
	cout<<"\n"; 	
	cout<<"\n";
	system("pause");
	return 0;
}
