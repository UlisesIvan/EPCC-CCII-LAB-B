/*Implemente un programa que maneje un arreglo de estructuras que solicite el
nombre, edad y talla de 10 jugadores, debe mostrar por pantalla los que son
menores de 20 años y tienen una talla mayor a 1,70 mts de altura.*/


#include <iostream>
using namespace std;

int mes_act=6;

struct jugador{
    string nombres;
    int edad;
    float talla;
};

jugador crear_jugador(string,int,float);
void mostrar(jugador);

int main(){
    jugador lista[5];
    string a; int b; float c;
    for(int i=0;i<5;i++){
        cout<<"JUGADOR "<<i+1<<endl;
        cout<<"Nombre: ";
        cin>>a;
        cout<<"Edad:";
        cin>>b;
        cout<<"Talla:";
        cin>>c;
        lista[i]=crear_jugador(a,b,c);
    }
    cout<<"JUGADORES"<<endl;
    for(int i=0;i<5;i++){
        mostrar(lista[i]);
    }
}

jugador crear_jugador(string n, int e,float t){
    jugador temp;
    temp.nombres=n;
    temp.edad=e;
    temp.talla=t;
    return temp;
}

void mostrar(jugador it){
    cout<<"Nombre: "<<it.nombres<<endl;
    if(it.edad<20 && it.talla>1.70){
        cout<<"Edad :"<<it.edad<<endl<<"Talla: "<<it.talla<<endl;
    }
}
