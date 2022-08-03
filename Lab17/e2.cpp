/*Definir una clase utilizando plantillas que permita almacenar datos en un arbol
binario. Por el momento solo se insertaran elementos en la estructura. Simule el
proceso de almacenar 100 datos y verifique que la estructura no tenga problemas.*/
#include <iostream>
using namespace std;

template <class T>
class Nodo {
    public:
    T dato;
    Nodo* de;
    Nodo* iz;
};
template <class T>
Nodo<T>* CrearNodo(T n){
    Nodo<T>* nuevo_nodo=new Nodo<T>();
    nuevo_nodo->dato=n;
    nuevo_nodo->de=nullptr;
    nuevo_nodo->de=nullptr;
    return nuevo_nodo;
}
template <class T>
void insertarNodo(Nodo<T> *&arbol,T n){
    if(arbol==nullptr){
        Nodo<T>* nuevo_nodo= CrearNodo(n);
        arbol=nuevo_nodo;
    }else{
        int valorRaiz=arbol->dato;
        if(n<valorRaiz){
            insertarNodo(arbol->iz,n);
        }else{
            insertarNodo(arbol->de,n);
        }
    }

}
template <class T>
void mostrarArbol(Nodo<T>* &arbol,int cont){
    if(arbol==nullptr){
        return;
    }else{
        mostrarArbol(arbol->de,cont+1);
        for(int i=0;i<cont;i++){
            cout<<"   ";
        }
        cout<<arbol->dato<<endl;
        mostrarArbol(arbol->iz,cont+1);
    }
}
int main(){
    Nodo<int>* arbol=nullptr;
    int contador=0;
    insertarNodo(arbol,5);
    insertarNodo(arbol,4);
    insertarNodo(arbol,3);
    insertarNodo(arbol,6);
    insertarNodo(arbol,7);
    insertarNodo(arbol,8);
    insertarNodo(arbol,1);
    insertarNodo(arbol,9);
    insertarNodo(arbol,10);
    insertarNodo(arbol,11);
    mostrarArbol(arbol,contador);
}
