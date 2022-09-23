/*Ejercicio 8:
En una clase de 5 alumnos se han realizado
tres exámenes y se requiere determinar el número de:
a)Alumnos que aprobaron todos los exámenes.
b)Alumnos que aprobaron al menos un examen.
c)Alumnos que aprobaron únicamente el último examen.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    double examen1,examen2,examen3;
    int aprobaronTodo=0,aprobaronExamen3=0,aprobaronUnoSolo=0;


    for(int i=0; i<5; i++)
    {
        system("cls");
        cout<<"alumno "<<i+1<<endl;
        cout<<"nota examen 1: ";cin>>examen1;
        cout<<"nota examen 2: ";cin>>examen2;
        cout<<"nota examen 3: ";cin>>examen3;

        if(examen1>=7 && examen2>=7 && examen3>=7)
        {
            aprobaronTodo++;
        }
        if(examen1>=7 && examen2>=7 && examen3<7)
        {
            aprobaronUnoSolo++;
        }
        else if(examen1<7 && examen2>=7 && examen3>=7)
        {
            aprobaronUnoSolo++;
        }
        else if(examen1>=7 && examen2<7 && examen3>=7)
        {
            aprobaronUnoSolo++;
        }
        else if(examen1>=7 && examen2<7 && examen3<7)
        {
            aprobaronUnoSolo++;
        }
        else if(examen1<7 && examen2>=7 && examen3<7)
        {
            aprobaronUnoSolo++;
        }
        if(examen1<7 && examen2<7 && examen3>=7)
        {
//        aprobaronUnoSolo++;
            aprobaronExamen3++;
        }
    }

    cout<<"numero de alumnos que aprobaron:"<<endl;
    cout<<"1)todos los examenes= "<<aprobaronTodo<<endl;
    cout<<"2)al menos un examen= "<<aprobaronUnoSolo<<endl;
    cout<<"3)solo el tercer examen= "<<aprobaronExamen3<<endl;



    getch();
    return 0;
}


/*
	int examen1=0,examen2=0,examen3=0,aprobaronTodos=0,unoAprobo=0,aproboUltimo=0;
	int x=1;
	for(int a=5;a>0;a--) {
//		x=1;
		cout<<"Alumno "<<x++<<endl;
		cout<<"Ingrese nota del examen 1: ";cin>>examen1;
		cout<<"Ingrese nota del examen 2: ";cin>>examen2;
		cout<<"Ingrese nota del examen 3: ";cin>>examen3;
		cout<<"\n";

		if(examen1>=7&&examen2>=7&&examen3>=7)
			aprobaronTodos++;
		if( (examen1>=7&& !(examen2>7&&examen3>7)) || (examen2>=7&& !(examen3>7&&examen1>7)) || (examen3>=7 && !(examen1>7&&examen2>7)))
			unoAprobo++;
		if(examen3>=7 && !(examen1>7&&examen2>7))
			aproboUltimo++;
	}
	cout<<"Cantidad de alumnos que aprobaron todos los examenes: "<<aprobaronTodos<<endl;
	cout<<"Cantidad de alumnos que aprobaron al menos un examen: "<<unoAprobo<<endl;
	cout<<"Cantidad de alumnos que aprobaron el ultimo examen: "<<aproboUltimo<<endl;
*/
