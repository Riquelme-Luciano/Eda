/*Ejercicio 6: Escriba un programa que lea la nota final de cuatro alumnos
 y calcule la nota final media de los cuatro alumnos.*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double notaAlumno=0,notaFinal=0;

    cout<<"Ingrese nota de los 4 alumnos"<<endl;
    for(int i=0;i<4;i++) {
        cout<<"nota "<<i+1<<": "; cin>>notaAlumno;
        notaFinal+=notaAlumno;
    }

    cout<<"Nota final="<<notaFinal/4<<endl;


    getch();
    return 0;
}
