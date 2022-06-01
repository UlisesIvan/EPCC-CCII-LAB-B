/*Realizar la implementación de un programa que haga uso de plantillas, para
elaborar una función que permita ordenar ascendentemente y descendentemente
los elementos de un arreglo de valores enteros y otro arreglo de valores flotantes.
Las funciones deben recibir como parámetros, un puntero al tipo de elemento
dado, y dos enteros que indican los índices del primero y último elemento.
int ArrayEntero [5] = {5,7,2,8,6,1,3,4,9};
float ArrayFloat [5] = {10.1, 8.4, 3.6, 4.4, 11.2}*/

#include <iostream>
using namespace std;

template <class T>
void quicksortDes(T A[],int izq, int der )
{
int i, j ;
T x, aux;
i = izq;
j = der;
x = A[ (izq + der) /2 ];
    do{
        while( (A[i] < x) && (j <= der) )
        {
            i++;
        }

        while( (x < A[j]) && (j > izq) )
        {
            j--;
        }

        if( i <= j )
        {
            aux = A[i]; A[i] = A[j]; A[j] = aux;
            i++;  j--;
        }

    }while( i <= j );

    if( izq < j )
        quicksortDes( A, izq, j );
    if( i < der )
        quicksortDes( A, i, der );
}
template <class T>
void muestraCadena(int cant,T n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<n[i]<<" ";
    }
    cout<<endl;
}
template <class T>
void quicksortAsc(T A[],int izq, int der )
{
int i, j ;
T x, aux;
i = izq;
j = der;
x = A[ (izq + der) /2 ];
    do{
        while( (A[i] > x) && (j <= der) )
        {
            i++;
        }

        while( (x > A[j]) && (j > izq) )
        {
            j--;
        }

        if( i <= j )
        {
            aux = A[i]; A[i] = A[j]; A[j] = aux;
            i++;  j--;
        }

    }while( i <= j );

    if( izq < j )
        quicksortAsc( A, izq, j );
    if( i < der )
        quicksortAsc( A, i, der );
}

int main(){
    int ArrayEntero [9] = {5,7,2,8,6,1,3,4,9};
    float ArrayFloat [5] = {10.1, 8.4, 3.6, 4.4, 11.2};
    cout<<"---ArrayEntero---"<<endl;
    quicksortDes(ArrayEntero,0, 8);
    muestraCadena(9, ArrayEntero);
    quicksortAsc(ArrayEntero,0, 8);
    muestraCadena(9, ArrayEntero);
    cout<<"---ArrayFloat---"<<endl;
    quicksortDes(ArrayFloat,0, 4);
    muestraCadena(5, ArrayFloat);
    quicksortAsc(ArrayFloat,0, 4);
    muestraCadena(5, ArrayFloat);
}
