#include <iostream>

using namespace std;

int main()
{
    int input,cantidad=0;
    cout<<"ingrese cantidad de numeros: ";
    cin>>cantidad;
    int output[cantidad];
    for (int i=0;i<cantidad;i++)
    {
        cin>>input;
        output[i]=input;
    }
    int suma=0;
    for (int i = 0; i < cantidad; i++)
    {
        suma += output[i];
    }
    cout<<"Resultado: "<<suma/cantidad;
}
