/*Ejercicio 17: 
Realice un programa que calcule el valor 
que toma la siguiente función para unos 
valores dados de x e y*/

#include <iostream> 
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	float x,y,r=0;
	
	cout<<"Ingrese valor para la variable x: ";cin>>x;
	cout<<"Ingrese valor para la variable y: ";cin>>y;
	
	r=(sqrt(x))/(pow(y,2)-1);
	
	cout<<"\nf("<<x<<","<<y<<")= raiz cuadrada de x /(y^2-1)"<<"= "<<setprecision(3)<<r<<endl; 
	
	return 0;
} 
