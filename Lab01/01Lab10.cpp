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
            cout << "Contraseņa incorrecta" <<endl;
			intento.clear();
        }
        else
        {
            cout << "Contraseņa correcta" << std::endl;
            break;
        }
    }while(intento != contrasena);
}
