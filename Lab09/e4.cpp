/*Implemente un programa que haga uso de plantillas para determinar el mínimo y
máximo valor de un arreglo de elementos dado. Debe de existir dos funciones, la
primera que retorne el mayor de los valores y la segunda que retorne el menor de
los valores. Asimismo, en la función main, se hace una prueba de estas funciones,
con arreglos de enteros y flotantes.
int ArrayEntero [5] = {10,7,2, 8, 6};
float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};
*/

#include <iostream>
using namespace std;

template <class T>
T mayor_array(T [], int);
template <class T>
T menor_array(T [], int);

int main(){
    int ArrayEntero [5] = {10,7,2,8,6};
    float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};
    cout<<"---ARRAY ENTEROS---"<<endl;
    cout<<"Mayor: "<<mayor_array(ArrayEntero,5)<<endl;
    cout<<"Menor: "<<menor_array(ArrayEntero,5)<<endl;
    cout<<"---ARRAY FLOTANTES---"<<endl;
    cout<<"Mayor: "<<mayor_array(ArrayFloat,5)<<endl;
    cout<<"Menor: "<<menor_array(ArrayFloat,5)<<endl;
}

template <class T>
T mayor_array(T lista[], int tam){
    T max_v;

    for (int i = 0; i < tam; i++)
        if (i == 0 || max_v < lista[i])
            max_v = lista[i];
    return max_v;
}

template <class T>
T menor_array(T lista[], int tam){
    T min_v;

    for (int i = 0; i < tam; i++)
        if (i == 0 || min_v > lista[i])
            min_v = lista[i];
    return min_v;
}
