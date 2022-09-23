/*Ejercicio 14:
Hacer un algoritmo que imprima
los valores de la diagonal de una
matriz D de 5x5.
*/

#include <iostream>
#include <conio.h>
#define TAM 5
using namespace std;
int main()
{
    int matriz[TAM][TAM]= {};

    matriz[0][0]=1;
    matriz[1][1]=1;
    matriz[2][2]=2;
    matriz[3][3]=3;
    matriz[4][4]=4;

    for(int i=0; i<TAM; i++)
    {
        for(int j=0; j<TAM; j++)
        {
            if(i==j)
            {
                cout<<matriz[i][j]<<"  ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<"\n";
    }

    getch();
    return 0;
}

/*
int matriz[5][5]= { {1,2,3,4,5},
                        {6,7,8,9,10},
                        {11,12,13,14,15},
                        {16,17,18,19,20},
                        {21,22,23,24,25}
                      };

    cout<<"Matriz 5x5\n";
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(matriz[i][j]<10)
                cout<<"0";
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\nDiagonal\n";
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(i==j)
            {
                if(matriz[i][j]<10)
                    cout<<"0";
                cout<<matriz[i][j]<<"  ";
            }
        }
        cout<<"\n";
    }
*/
