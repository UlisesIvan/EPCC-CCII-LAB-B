/*Implementar un programa que maneje un arreglo de estructuras para almacenar
los nombres y las fechas de cumpleaños de sus n compañeros. Y debe mostrarse
por pantalla quienes cumplen años en este mes.*/

#include <iostream>
using namespace std;

int mes_act=6;

struct companero{
    string nombres;
    int dia;
    int mes;
};

companero crear_companero(string,int,int);
bool cumple_ano(companero);
void mostrar(companero);

int main(){
    companero lista[5];
    string a; int b, c;
    for(int i=0;i<5;i++){
        cout<<"COMPANIERO "<<i+1<<endl;
        cout<<"Nombre: ";
        cin>>a;
        cout<<"Dia y mes de cumpleanios:";
        cin>>b>>c;
        lista[i]=crear_companero(a,b,c);
    }
    cout<<"COMPAÑEROS MES JUNIO"<<endl;
    for(int i=0;i<5;i++){
        mostrar(lista[i]);
    }

}

companero crear_companero(string n, int d,int m){
    companero temp;
    temp.nombres=n;
    temp.dia=d;
    temp.mes=m;
    return temp;
}

void mostrar(companero it){
    cout<<"Nombre: "<<it.nombres<<endl;
    if(it.mes==mes_act){
        cout<<"Cumple anios en este mes"<<endl;
    }else{
        cout<<"No cumple anios este mes"<<endl;
    }
}
