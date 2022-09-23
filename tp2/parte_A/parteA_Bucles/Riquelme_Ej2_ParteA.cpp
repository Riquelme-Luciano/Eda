/*
Ejercicio 2:
- Realice un programa que lea de la entrada
estándar números hasta que se introduzca
un cero.
- En ese momento el programa debe terminar y
mostrar en la salida estándar el número de
valores mayores que cero leídos.*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int numero=1,counter=0;

    do {
        cout<<"Ingrese numero: ";
        cin>>numero;

        if(numero>0){
            counter++;
        }

    } while(numero!=0);

    cout<<"Cantidad de numeros mayores a 0 leidos: "<<counter<<endl;

    getch();
    return 0;
}

/*
    //usando while

    while(numero!=0) { // == (numero > 0 || numeros < 0)
        cout<<"ingrese numero: ";cin>>numero;
        if(numero>0) {
            counter++;
        }
    }

*/

/*
    //Usando for
	int n=1;
	int i=0;

	for(int i=0;n!=0;i++)
	 cout<<"Ingrese numero: "; cin>>n;

	cout<<"El total de numeros enteros mayores a 0: "<<i<<endl;

*/
