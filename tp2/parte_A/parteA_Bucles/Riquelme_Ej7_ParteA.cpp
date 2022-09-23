/*
Ejercicio 7:
A-Escriba un programa que calcule usando un while,
el valor de: 1+2+3+...+n.
B-Escriba un programa que calcule usando un for,
el valor de: 1+3+5+...+2n-1
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i=0,n=10,num=0;

    cout<<"[A] ";
    while(i<n)
    {

        i++;
        cout<<i<<" ";
        num+=i;
        if(i==n)
        {
            cout<<"= "<<num<<endl;
        }
    }

    num=0;
    cout<<"[B] ";
    for(int i=1; i<=n; i++)
    {
        num=(2*i-1);
        int suma=0;
        suma+=num;
        cout<<num<<" ";
    }

    getch();
    return 0;
}

/*
int n=0,res=0,i=0;

	cout<<"Ingrese numero: ";cin>>n;
	cout<<"a) ";
	while(n>0) {
		res+=n;
		i++;
		cout<<"+"<<i;
		n--;
	}
	cout<<"= "<<res<<"\n";

	cout<<"b) ";
	n=i;
	res=0;
	for(int x=1;x<=n;x++) {
		cout<<"+"<<2*x-1;
		res+=2*x-1;
	}
	cout<<"= "<<res;

*/
