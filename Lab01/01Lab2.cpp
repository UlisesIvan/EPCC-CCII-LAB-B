#include <iostream>
#include <string>

using namespace std;


string correo(string, string, string);

int main(){
	
	string nombre, apellidoP, apellidoM;
	cout<<"Nombre: ";
	cin>>nombre;
	cout<<"ApellidoPaterno: ";
	cin>>apellidoP;
	cout<<"ApellidoMaterno: ";
	cin>>apellidoM;
	
	cout<<correo(nombre, apellidoP, apellidoM);


}
string correo(string n, string aP, string aM){
	return n[0] + aP + aM[0] + "@unsa.edu.pe";
}


