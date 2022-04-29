#include <iostream>

using namespace std;

int potencia(int, int);

int main(){
	int num, pot;
	cout<<"Un numero: ";
	cin>>num;
	cout<<"elevado a: ";
	cin>>pot;
	cout<<potencia(num, pot);
}

int potencia(int n, int p){
	int re=1;
	for(int i=0;i<p;i++){
		re=re*n;
	}
	return re;
	
}
