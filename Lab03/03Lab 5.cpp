#include <iostream>


using namespace std;



bool par(int);
int sumI(int);

int main(){
	int valor=1;
	while(par(valor)==false){
		cout<<"Introduce un valor entre 0 y 100: ";
		cin>> valor;
	}
	cout<<sumI(valor);
	
}


bool par(int n){
	if(n%2==0) return true;
	else return false;
}
int sumI(int a){
	int acum;
	for(int i=0;i<=a;i++){
		if(!(par(i))){
			acum+=i;
		}
	}
	return acum;
}


