/*Se pide escribir una funci�n utilizando plantillas que tome dos valores gen�ricos
de tipo char y string (5 veces); char corresponde a una letra y string corresponde
al apellido. El programa debe mostrar por pantalla el siguiente formato de correo
electr�nico: char/string@unsa.edu.pe.*/

#include <iostream>
using namespace std;

template <class T, class B>
void g_correo(T , B);

int main(){
    char a{'i'};
    string b{"soncco"};
    g_correo(a,b);
}

template <class T, class B>
void g_correo(T letra, B nombre){
    cout<<letra<<nombre<<"@unsa.edu.pe."<<endl;
}
