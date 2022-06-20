/*EJERCICIO 01
  EJERCICIO 02
  EJERCICIO 03*/

#include <iostream>

using namespace std;
class Nodo{
public:
    Nodo(){valor=NULL,sgte=NULL;}
    Nodo(int n){valor=n;sgte=NULL;}
    int valor;
    Nodo* sgte;
};
class Cola : public Nodo{
public:
    Cola(){cola=NULL;cabeza=NULL;actual=NULL;};
    void insertar(int); //EJERCICIO 01
    void eliminar(); // EJERCICIO 02
    void buscar_e(int); // EJERCICIO 03
    void mostrar();
private:
    Nodo* cola;
    Nodo* cabeza;
    Nodo* actual;
};

void Cola::insertar(int n)
{
    Nodo* aux=new Nodo(n);
    if(cabeza==NULL){
        cabeza=aux;
    }
    if(cola==NULL){
        cola=aux;
    }else{
        cola->sgte=aux;
        cola=aux;
    }
}
void Cola::eliminar(){

    Nodo* aux= new Nodo();
    aux=cabeza;
    cabeza=cabeza->sgte;
    delete aux;
}
void Cola::mostrar(){
    Nodo* m= cabeza;
    int cont{0};
    while(m!=NULL){
        cout<<m->valor<<" ";
        m=m->sgte;
        cont++;
    }
}
void Cola::buscar_e(int n){ // EJERCICIO 03
    Nodo* aux=new Nodo();
    aux= cabeza;
    int cont{0};
    while(aux->sgte!=NULL){
        if(aux->valor==n){
            cout<<"Elemento "<<n<<" encontrado, posicion cola["<<cont<<"].";
            return;
        }
        aux=aux->sgte;
        cont++;
    }
    //que pasa si el elemento esta en el ultimo valor
    if(aux->valor==n){
        cout<<"Elemento "<<n<<" encontrado, posicion cola["<<cont<<"].";
        return;
    }else{
        cout<<"Elemento no encontrado"<<endl;
    }

}
int main(){
    int opcion;
    bool repetir = true;
    Cola e1=Cola();

    do {
        int a;
        int b{0};
        system("cls");

        cout << "\n\nCOLAS" << endl;
        cout << "1. Insertar Elemento " << endl;
        cout << "2. Eliminar Elemento " << endl;
        cout << "3. Buscar Elemento" << endl;
        cout << "0. SALIR" << endl <<endl;
        e1.mostrar();
        cout <<endl;
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout<<"Inserta un numero: ";
                cin>>a;
                e1.insertar(a);

                break;
            case 2:
                e1.eliminar();
                break;
            case 3:
                cout<<"Inserta el numero que quieres buscar: ";
                cin>>a;
                e1.buscar_e(a);
                system("pause>nul");
                break;
            case 0:
            	repetir = false;
            	break;
        }
    } while (repetir);
}
