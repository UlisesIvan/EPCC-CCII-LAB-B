#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n1, n2;
	cout<<"Num 1: ";
	cin>>n1;
	cout<<"Num 2: ";
	cin>>n2;
    if(n1>n2){
    	if(n1%n2==0){
    		cout<<"Es divisor"<<endl;
		}else{
			cout<<"No es divisor"<<endl;
		}
	}else if(n2>n1){
    	if(n2%n1==0){
    		cout<<"Es divisor"<<endl;
		}else{
			cout<<"No es divisor"<<endl;
		}
	}else {
		cout<<"Son iguales es divisor"<<endl;
	}
}
