#include <iostream>

using namespace std;
bool esprimo(int x){
    int divisores= 0;
    for(int i=2 ; i<=x/2 ;i++)
    {
        if (x%i == 0){return false;}
    }
    return true;
}

void primos(int numero){
    for(int i = 1 ; i<=numero; i++)
    {
        if(esprimo(i)){
            cout<<i <<" - ";
        }
    }
    
}

int main()
{
    int numero;
    cout<<"ingrese numero :";cin >>numero ;
    primos(numero);

}
