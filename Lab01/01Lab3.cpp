#include <iostream>
#include <string>

using namespace std;


string correo(string, string, string);

int main(){
	string hora, minutos, agregar;
	cout<<"Hora: ";
	cin>>hora;
	cout<<"Minutos: ";
	cin>>minutos;
	cout<<"Agregale minutos: ";
	cin>>agregar;
	bool dia;
	int h=stoi(hora);
	int m=stoi(minutos);
	int a=stoi(agregar);
	int agre;
	agre=a/60;
	h=h+agre;
	agre=a%60;
	m=m+agre;
	if(m>=60){
		int cont;
		cont=m/60;
		m=m%60;
		h=h+cont;
	}
	if(h>12){
		h=h-12;
		dia=false;
	}
	if(dia){
		cout<<"Son las "<< h <<" : "<< m<<"am"<<endl;
	}else{
		cout<<"Son las "<< h <<" : "<< m<<"pm"<<endl;
	}	
}
