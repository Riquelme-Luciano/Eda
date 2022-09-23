/*Ejercicio 4:
Escriba un programa que tome cada 4 horas la temperatura
exterior, leyéndola durante un período de 24 horas.
Es decir, debe leer 6 temperaturas. Calcule la temperatura
media del día, la temperatura más alta y la más baja
*/

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main ()
{
    double temperatura,tempAlta,tempMedia=0,tempBaja;

    cout<<"Ingrese las temperaturas tomadas del dia"<<endl;

    for(int i=4; i<=24; i+=4)
    {
        cout<<i<<" horas: ";
        cin>>temperatura;

        if(i==4)
        {
            tempAlta=temperatura;
            tempBaja=temperatura;
        }

        if(temperatura>tempAlta)
        {
            tempAlta=temperatura;
        }

        if(temperatura<tempBaja)
        {
            tempBaja=temperatura;
        }

        tempMedia+=temperatura;

        if(i==24)
        {
            tempMedia/=6;
        }

    }

    cout<<"-----------------------"<<endl;
    cout<<"Alta: "<<tempAlta<<endl;
    cout<<"Media: "<<tempMedia<<endl;
    cout<<"Baja: "<<tempBaja<<endl;

    getch();
    return 0;
}





/*
float temp,sumaTemp,temp_media,temp_alta = 0,temp_baja = 1000;

	//Cada 4 horas registro la temperatura exterior
	for (int i=0;i<24;i+=4){
		cout<<"Ingrese la temperatura de las: "<<i<<" horas"<<endl;
		cin>>temp;

		sumaTemp+=temp;

		if (temp>temp_alta){
			temp_alta=temp;
		}

		if (temp<temp_baja){
			temp_baja = temp;
		}
	}

	temp_media = sumaTemp/6;

	cout<<"La temperatura mas alta fue: "<<temp_alta<<endl;
	cout<<setprecision(3)<<"La temperatura media fue: "<<temp_media<<endl;
	cout<<"La temperatura mas baja fue: "<<temp_baja<<"\n\n\n";
*/

