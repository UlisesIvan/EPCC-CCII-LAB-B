/*Implementar un programa que maneje un arreglo de estructuras que calcule la
nota final del Ciencia de la Computación. El programa debe permitir el ingreso
de cualquier cantidad de alumnos y para cada alumno, se podrá ingresar nombre,
grupo, nota de la primera fase, segunda fase, tercera fase y proyecto final. El
porcentaje de cada ítem es 15%, 20%, 25% y 40% respectivamente.*/


#include <iostream>
using namespace std;

struct alumno{
    string nombre;
    string grupo;
    int n_1ra;
    int n_2da;
    int n_3ra;
    int n_pf;
};

alumno crear_alumno(string ,string ,int ,int ,int ,int );
void mostrar(alumno);

int main(){
    int a;
    cout<<"Cuantos alumnos va a ingesar: ";
    cin>>a;
    alumno nuevos[a];
    for(int i=0;i<a;i++){
        string n, g;
        int n1,n2,n3,pf;
        cout<<"ALUMNO "<<i+1<<endl;
        cout<<"Ingrese el nombre: ";
        cin>>n;
        cout<<"Ingrese el grupo: ";
        cin>>g;
        cout<<"Ingrese nota 1ra fase: ";
        cin>>n1;
        cout<<"Ingrese nota 2da fase: ";
        cin>>n2;
        cout<<"Ingrese nota 3ra fase: ";
        cin>>n3;
        cout<<"Ingrese nota Proyecto final: ";
        cin>>pf;
        nuevos[i]=crear_alumno(n,g,n1,n2,n3,pf);
    }

    cout<<"-------------------------------------"<<endl;
    cout<<"NOTAS ALUMNOS"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Porcentajes"<<endl;
    cout<<"1ra unidad: 15% - 2da unidad: 20% - 3ra unidad:25% - Proyecto final: 40%"<<endl;
    cout<<"-------------------------------------"<<endl;
    for(int i=0;i<5;i++)
    {
       mostrar(nuevos[i]);
       cout<<"-------------------------------------"<<endl;
    }



}
float porcentaje(alumno x){
    float acum;
    acum=(x.n_1ra*3/20)+(x.n_2da/5)+(x.n_3ra/4)+(x.n_pf*2/5);
    return acum;
}

alumno crear_alumno(string n, string g,int n1,int n2,int n3,int pf){
    alumno temp;
    temp.nombre=n;
    temp.grupo=g;
    temp.n_1ra=n1;
    temp.n_2da=n2;
    temp.n_3ra=n3;
    temp.n_pf=pf;
    return temp;
}
void mostrar(alumno it){
    cout<<"Nombre: "<<it.nombre<<endl;
    cout<<"Grupo: "<<it.grupo<<endl;
    cout<<"Nota 1: "<<it.n_1ra<<endl;
    cout<<"Nota 2: "<<it.n_2da<<endl;
    cout<<"Nota 3: "<<it.n_3ra<<endl;
    cout<<"Nota Pf: "<<it.n_pf<<endl;
    cout<<"Promedio: "<<porcentaje(it)<<endl;
}
