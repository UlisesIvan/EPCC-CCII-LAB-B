/*Se pide escribir una función utilizando plantillas que tome tres argumentos
genéricos y devuelva el menor y el máximo de ellos como valor de retorno. La
función debe ser capaz de dar este tipo de resultados.*/

#include <iostream>
using namespace std;

template <class T>
void min_max(T,T,T);

int main(){
    float a,b,c;
    cout<<"Escribe un valor tipo float: ";
    cin>>a;
    cout<<"Escribe un valor tipo float: ";
    cin>>b;
    cout<<"Escribe un valor tipo float: ";
    cin>>c;
    min_max(a,b,c);
    cout<<endl;
    int d,e,f;
    cout<<"Escribe un valor tipo int: ";
    cin>>d;
    cout<<"Escribe un valor tipo int: ";
    cin>>e;
    cout<<"Escribe un valor tipo int: ";
    cin>>f;
    min_max(d,e,f);

}

template <class T>
void min_max(T pri,T sec,T ter){
    T maximo{};
    T minimo{};
    if(pri>=sec && pri>=ter) maximo=pri;
    if(sec>=ter && sec>=pri) maximo=sec;
    if(ter>=pri && ter>=sec) maximo=ter;
    if(pri<=sec && pri<=ter) minimo=pri;
    if(sec<=ter && sec<=pri) minimo=sec;
    if(ter<=pri && ter<=sec) minimo=ter;
    cout<<"Valor maximo: "<<maximo<<endl<<"Valor minimo: "<<minimo;
}

