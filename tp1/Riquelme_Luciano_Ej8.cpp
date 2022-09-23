/*Ejercicio 8: La calificación final de un estudiante es
la media ponderada de tres notas: la nota de prácticas
que cuenta un 30% del total, la nota teórica que cuenta
un 60% y la nota de participación que cuenta el 10% restante.
Escriba un programa que lea de la entrada estándar las tres
notas de un alumno y escriba en la salida estándar su nota final.*/

#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    double notas=0,notaFinal=0;

    cout<<"Ingrese las notas de un estudiante"<<endl;
    cout<<"Practicas: "; cin>>notas;
    notaFinal+=notas*0.30;
    cout<<"Teorica: "; cin>>notas;
    notaFinal+=notas*0.60;
    cout<<"Participacion: "; cin>>notas;
    notaFinal+=notas*0.10;

    cout<<"nota final: "<<notaFinal<<endl;

    getch();
	return 0;
}
