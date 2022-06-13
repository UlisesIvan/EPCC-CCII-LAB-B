#include <iostream>

using namespace std;
class Nodo{
public:
    Nodo(){valor=NULL,sgte=NULL;}
    Nodo(int n){valor=n;sgte=NULL;}
    int valor;
    Nodo* sgte;
};

class Lista : public Nodo{
public:
    Lista(){cola=NULL;cabeza=NULL;actual=NULL;};
    void insertarFinal(int);
    void insertarInicio(int);
    void insertarPos(int, int);
    void eliminarFinal();
    void eliminarInicio();
    void eliminarPos(int);
    int tamano();
    void mostrar();
private:
    Nodo* cola;
    Nodo* cabeza;
    Nodo* actual;
};

void Lista::insertarFinal(int n)
{
    Nodo* aux=new Nodo(n);
    if(cola==NULL){
        cola=aux;
    }
    if(cabeza==NULL){
        cabeza=aux;
    }

    cola->sgte=aux;
    cola=aux;
}
void Lista::insertarInicio(int n)
{
    Nodo* aux=new Nodo(n);
    Nodo* aux2=new Nodo();
    aux2=cabeza;
    if(cabeza==NULL){
        cabeza=aux;
    }
    if(cola==NULL){
        cola=aux;
    }
    cabeza=aux;
    cabeza->sgte=aux2;
}
void Lista::mostrar(){
    Nodo* m= cabeza;
    int cont{0};
    while(m!=NULL){
        cout<<m->valor<<" ";
        m=m->sgte;
        cont++;
    }
    cout<<"Valor cola : "<<cola->valor<<endl;
}

void Lista::insertarPos(int n, int pos)
{
    Nodo* aux= new Nodo(n);
    Nodo* iterador= new Nodo();
    iterador=cabeza;
    int contador{0};
    while(iterador->sgte!=NULL){
        if(contador==pos){
            Nodo* aux2=iterador->sgte;
            iterador->sgte=aux;
            aux->sgte=aux2;
            return;
        }
        contador++;
        iterador=iterador->sgte;
    }
}

void Lista::eliminarFinal(){
    actual=cabeza;
    Nodo* aux= new Nodo();
    aux=cola;
    while(actual->sgte!=cola){
        actual=actual->sgte;
    }

    cola=actual;
    cola->sgte=NULL;
    delete aux;
}
void Lista::eliminarInicio(){

    Nodo* aux= new Nodo();
    aux=cabeza;
    cabeza=cabeza->sgte;
    delete aux;
}
int Lista::tamano()
{
    Nodo* m= cabeza;
    int cont{0};
    while(m!=NULL){
        m=m->sgte;
        cont++;
    }
    return cont;
}

void Lista::eliminarPos(int x){
    if(x==0)

        {
            Nodo *temp = cabeza;
            cabeza = cabeza->sgte;
            delete temp;
            return;
        }

        Nodo *actua = cabeza;
        int cont{0};

        while(actua->sgte != NULL)
        {
            cont++;
            if(actua->sgte->sgte == NULL){
                cola=actua;
            }
            if(cont== x)
            {
                actua->sgte = actua->sgte->sgte;
                return;
            }
            actua = actua->sgte;
        }
        delete actua;
}


int main(){
    int opcion;
    bool repetir = true;
    Lista e1=Lista();

    do {
        int a;
        int b{0};
        system("cls");

        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Insertar Elemento al Final" << endl;
        cout << "2. Mostrar Lista" << endl;
        cout << "3. Insertar Elemento al Inicio" << endl;
        cout << "4. Insertar Elemento en una Posicion" << endl;
        cout << "5. Eliminar Elemento al Final" << endl;
        cout << "6. Eliminar Elemento al Inicio" << endl;
        cout << "7. Eliminar Elemento en una Posicion" << endl;
        cout << "0. SALIR" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout<<"Inserta un numero: ";
                cin>>a;
                e1.insertarFinal(a);
                break;

            case 2:
                e1.mostrar();
                cout<<"Tamano: "<<e1.tamano()<<endl;
                system("pause>nul");// Pausa

                break;


            case 3:
                cout<<"Inserta un numero: ";
                cin>>a;
                e1.insertarInicio(a);

                break;

            case 4:
                cout<<"Inserta un numero: ";
                cin>>a;
                cout<<"Inserta una posicion: ";
                cin>>b;
                e1.insertarPos(a, b);
                break;

            case 5:
                e1.eliminarFinal();
                break;

            case 6:
                e1.eliminarFinal();
                break;

            case 7:
                cout<<"Inserta una posicion: ";
                cin>>a;
                e1.eliminarPos(a);
                break;

            case 0:
            	repetir = false;
            	e1.mostrar();
            	break;
        }
    } while (repetir);
}
