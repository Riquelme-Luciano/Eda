/*Ejercicio 1:
A) Haga un programa que permita la entrada de datos, ingresando el nombre
y apellido del usuario, además debe mostrar el nombre_completo por pantalla.
(considera los espacios)
B) Ejemplifique, como se coloca un comentario de una o varias líneas.
C) Como se baja un renglón al mostrar algo por pantalla, nombre alternativas.*/

#include<iostream>
#include<conio.h>
#include<string>
#include<stdio.h>
using namespace std;
int main() {
    string nombre_y_apellido;

    cout<<"Ingrese los siguientes datos "<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"nombre y apellido: ";getline(cin,nombre_y_apellido);
    /*Con estos se puede comentar varias lineas a la vez*/
    cout<<"Hola "<<nombre_y_apellido<<" que tenga un buen dia"<<endl;

    getch();
    return 0;
}
