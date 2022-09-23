/*Ejercicio 7: Escriba un programa que lea de la entrada estandar
los dos catetos de un triangulo rectangulo y escriba en la salida
estandar su hipotenusa.*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main() {
    double catetos=0,hipotenusa=0;

    cout<<"Cateto A: ";cin>>catetos;
    hipotenusa+=catetos*catetos;
    cout<<"Cateto B: ";cin>>catetos;
    hipotenusa+=catetos*catetos;
    hipotenusa=sqrt(hipotenusa); // equivalente a sqrt-> pow(hipotenusa,1.0/2)

    cout<<"Hipotenusa= "<<hipotenusa<<endl;

    getch();
    return 0;
}
