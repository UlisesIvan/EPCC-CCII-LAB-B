#include <iostream>


using namespace std;

bool bisiesto(int);

int main(){
	int a;
	cout<<"Año para consulta: ";
	cin>>a;
	if(bisiesto(a)){
		cout<<"Es bisiesto"<<endl;
	}else{
		cout<<"No es bisiesto";
	}
}


bool bisiesto(int a){
	if(a%4==0 || a%100==0 || a%400==0) return true;
	else return false;
}
