/*Ejercicio 5: Escriba un programa que lea
de la entrada estándar base y altura de un
rectángulo y escriba en la salida estándar
su perímetro y superficie.*/

#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main() {
    double base,altura;

    cout<<"Ingrese los siguientes datos de un rectangulo\nbase: ";
    cin>>base;
    cout<<"altura: ";cin>>altura;
    cout<<"------------------------------------"<<endl;
    cout<<"Perimetro: "<<base*2+altura*2<<endl;
    cout<<"Superficie: "<<base*altura<<endl;

    getch();
    return 0;
}
