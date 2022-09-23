/*Ejercicios 3:
Realice un programa que calcule y
muestre en la salida estándar la suma de los
cuadrados de los 10 primeros enteros mayores que cero.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int numero,suma10Primeros=0,counter=0;

    while(counter<10)
    {
        cout<<counter+1<<") Ingrese numero entero: ";
        cin>>numero;
        if(numero>0)
        {
            suma10Primeros+=numero*numero;
            counter++;
        }
    }

    cout<<"counter="<<counter<<"\nresultado= "<<suma10Primeros<<endl;

    getch();
    return 0;
}

/*
int n=1,i=1 ,suma=0;

	do {
		cout<<"Ingrese Numero: ";cin>>n;

		if(i<=10)
			if(n>0)
				suma+=n*n;

		i++;
	}while(n!=0);

	cout<<"La suma de los cuadrados de los 10 primeros numeros mayores que cero es: "<<suma<<endl;
	cout<<"\n\n\n"<<endl;
*/
