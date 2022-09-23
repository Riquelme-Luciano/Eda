/*Ejercicio 16: Escribe la siguiente expresión en C++. 
Use precisión para la salida del cout.
A) f(a,b)= (a/b) + 1
B) f(a,b)= (a+b)/(c+d)
C) f(a,b)= (a+(b/c))/(d+(e/f))
D) f(a,b)= a + (b/(c-d))*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	float a,b,c,d,e,f;
	
	cout<<"A continuacion se resolveran un conjunto de expresiones matematicas"<<endl;
	cout<<"Digite un valor para la variable a: ";cin>>a;
	cout<<"Digite un valor para la variable b: ";cin>>b;
	cout<<"Digite un valor para la variable c: ";cin>>c;
	cout<<"Digite un valor para la variable d: ";cin>>d;
	cout<<"Digite un valor para la variable e: ";cin>>e;
	cout<<"Digite un valor para la variable f: ";cin>>f;
	
	
	cout<<"\nA) f(a,b)=(a/b)+1 "<<setprecision(3)<<"= "<<a/b+1<<endl;
	
	cout<<"\nB) f(a,b)=(a+b)/(c+d) "<<setprecision(3)<<"= "<<(a+b)/(c+d)<<endl;
	
	cout<<"\nC) f(a,b)=(a+(b/c))/(d+(e/f)) "<<setprecision(3)<<"= "<< (a+(b/c)) / (d+(e/f)) <<endl;
	
	cout<<"\nD) f(a,b)= a + (b/(c-d))"<<setprecision(3)<<"= "<< a + (b/(c-d)) <<endl;
	cout<<endl;
	
	system("pause");
	
	return 0;
}
