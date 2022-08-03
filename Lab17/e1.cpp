/*Desarrolle un programa simple de calculadora (operciones basicas) que utilice
clases utilizando plantillas*/

#include <iostream>

template <class T, class U>
class Calculadora {
    T x;
    U y;
    public:
        Calculadora(){x=0; y=0;}
        Calculadora(int x_, int y_){x=x_; y=y_;}
        ~Calculadora(){}
        void setcal(T x_, U y_){x=x_;y=y_;}
        T suma(){return x+y;}
        T resta(){return x-y;}
        T multiplicacion(){return x*y;}
        T division(){if(x>=y){return x/y;}else{return y/x;}}
};
int main()
{
    Calculadora<int, double> e1;
    e1.setcal(10,5.0);
    std::cout<<e1.suma()<<std::endl;
    std::cout<<e1.resta()<<std::endl;
    std::cout<<e1.multiplicacion()<<std::endl;
    std::cout<<e1.division()<<std::endl;
}

