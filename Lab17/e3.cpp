#include <iostream>

template <class T>

class Contendor{
    T elemento; // Elemento de tipo T
public:
    Contendor(T arg){ elemento = arg;} // Constructor que recibe un argumento tipo T y lo iguala al atributo elemento
    T add(){return ++elemento;} // funcion que le suma 1 a nuestro elemento
};

template <>
class Contendor<char>{
    char elemento; // Elemento especificamente de tipo char
public:
    Contendor(char arg){ elemento = arg;} // Constructor que recibe un argumento tipo char y lo iguala al atributo elemento
    char uppercase(){                   // funcion que convierte a nuestro elemento tipo char en mayuscula, y lo retorna
    if((elemento>='a') && (elemento<='z')){
        elemento+='A'-'a';}
    return elemento;
    }
};

int main(){
    Contendor<int> cint(5);
    Contendor<char> cchar('t');
    std::cout<<cint.add()<<std::endl; // Nos adiciona en 1 el elemento dado en este caso a 5 le suma 1 y muestra 6
    std::cout<<cchar.uppercase()<<std::endl;    // Nos convierte el elemento dado en una mayuscula en este caso de 't' a 'T'.
    return 0;
}
