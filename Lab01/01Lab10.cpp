#include <iostream>


using namespace std;
int main()
{
    string contrasena,intento;
    contrasena = "abcde";
    do
    {
        cout<<"intentalo:";
        cin>>intento;
        if(contrasena!= intento)
        {
            cout << "Contrase�a incorrecta" <<endl;
			intento.clear();
        }
        else
        {
            cout << "Contrase�a correcta" << std::endl;
            break;
        }
    }while(intento != contrasena);
}
