/*Se pide escribir una funci�n utilizando plantillas que tome dos argumentos
gen�ricos de tipo entero y flotante que devuelva las cuatro operaciones b�sicas.*/

#include<iostream>
using namespace std;

template <class T>
void operaciones(T,T);

int main(){
    int a{8}, b{4};
    float c{7.67}, d{4.68};
    operaciones(a,b);
    operaciones(c,d);

}

template <class T>
void operaciones(T pri,T sec)
{
    cout<<"-------OPERACIONES-------"<<endl;
    cout<<"Suma: "<<pri+sec<<endl;
    cout<<"Resta: "<<pri-sec<<endl;
    cout<<"Multiplicacion: "<<pri*sec<<endl;
    cout<<"Division: "<<pri/sec<<endl;
}
