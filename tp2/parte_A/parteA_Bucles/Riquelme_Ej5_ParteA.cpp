/*
Ejercicio 5: Escriba un programa que lea
valores enteros hasta que se introduzca
un valor en el rango [20-30] o se introduzca
el valor 0. El programa debe entregar la
suma de los valores mayores a 0 introducidos.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int numeroIntroducido=29,sumaMayoresA0=0;
    bool rangoRestringido=false;

    do
    {
        cout<<"Ingrese numero: "; cin>>numeroIntroducido;

        if(numeroIntroducido!=0 && !(numeroIntroducido>=20 && numeroIntroducido<=30))
        {
            sumaMayoresA0+=numeroIntroducido;

        }
        else
        {
            rangoRestringido=true;
        }

    } while(rangoRestringido==false);

    cout<<"Suma de enteros: "<<sumaMayoresA0<<endl;


    getch();
    return 0;
}

