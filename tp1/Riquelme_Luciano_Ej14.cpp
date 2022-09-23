/*Ejercicio 14: Haga un programa en donde se ingresará
una cantidad X de segundos, para luego convertir a
horas, minutos y segundos.*/

#include "iostream"
#include "conio.h"
using namespace std;
int main() {
	int seg,minutos,horas;

	cout<<"Ingrese cantidad de segundos: ";cin>>seg;

	cout<<"Tiempo Equivalente en:   "<<endl;
	cout<<"-----------------------"<<endl;

//	horas=(seg/3600);
	cout<<".Horas ---> "<<seg/3600<<endl;

//	minutos=((seg/60))%60;
	cout<<".Minutos ---> "<< ((seg/60))%60 <<endl;

//	seg=seg%60;
	cout<<".Segundos ---> "<<seg%60<<"\n"<<endl;


	getch();
	return 0;
}
