#include <iostream>
#include <vector>
using namespace std;

class CarBuilder{
    protected:
    string resultado;
    public:
    virtual void addPuerta(string t) = 0;
    virtual void addLlanta(string t) = 0;
    virtual void addTimon(string t) = 0;
    virtual void addAsientos(string t) = 0;
    virtual void addMotor(string t) = 0;
    virtual void addEspejos(string t) = 0;
    virtual void addVidrios(string t) = 0;

    string getResultado(){return resultado;};
};

class CarroBasico : public CarBuilder{
    void addPuerta(string t) override{
        resultado+="Puerta: " + t + ".\n";
    }
    void addLlanta(string t) override{
        resultado+="Llanta: " + t + ".\n";
    }
    void addTimon(string t) override{
        resultado+="Timon: " + t + ".\n";
    }
    void addAsientos(string t) override{
        resultado+="Asientos: " + t + ".\n";
    }
    void addMotor(string t) override{
        resultado+="Motor: " + t + ".\n";
    }
    void addEspejos(string t) override{
        resultado+="Espejos: " + t + ".\n";
    }
    void addVidrios(string t) override{
        resultado+="Vidrios: " + t + ".\n";
    }


};

class Director{
    CarBuilder *builder;
public:
    Director(CarBuilder *builder): builder(builder){}
    void construct(){
        builder->addPuerta("Lata");
        builder->addLlanta("Caucho");
        builder->addTimon("Fibra de Carbono");
        builder->addAsientos("Cuero");
        builder->addMotor("0.9 Turbo TwinAir");
        builder->addEspejos("Lisos");
        builder->addVidrios("Polarizados");

    }

};

int main(){
    CarroBasico miBuilder;
    Director dire(&miBuilder);

    dire.construct();
    cout<<"CARRO 1\n";
    cout<<miBuilder.getResultado();
}
