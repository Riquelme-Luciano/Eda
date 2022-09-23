//Ejercicio 18
/*
Ejercicio 18: Escriba un programa que calcule las soluciones de una ecuación de segundo grado de
la forma ax^2 + bx + c = 0, teniendo en cuenta que: f(a,b,c) =−𝑏+√(𝑏2−4𝑎𝑐) 2𝑎
*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	float a,b,c,x1,x2,dis,r1,r2;

	cout<<"SE RESOLVERA UNA ECUACION DE SEGUNDO GRADO\n";
	cout<<"*******************************************\n";
	cout<<"Digite un valor para a: ";cin>>a;
	cout<<"Digite un valor para b: ";cin>>b;
	cout<<"Digite un valor para c: ";cin>>c;

	dis=(b*b)-(4*a*c);

	if(dis>=0) {
		x1=(-b+sqrt((b*b)-4*a*c))/(2*a);
		cout<<"***********************"<<endl;
		cout<<"x1= "<<setprecision(2)<<x1<<endl;
		r1=a*pow(x1,2)+b*x1+c;
		cout<<"a*x^2 + b*x + c= "<<setprecision(2)<<r1<<'\n'<<'\n';

		cout<<"***********************"<<endl;
		x2= (-b-sqrt((b*b-4*a*c))) / (2*a);
		cout<<"x2= "<<setprecision(2)<<x2<<endl;
		r2=a*pow(x2,2)+b*x2+c;
		cout<<"a*x^2 + b*x + c=  "<<setprecision(2)<<r2<<endl;
		} else {
			cout<<"\nNo tiene solucion real, su resultado es un numero complejo";
	}

	return 0;
}

