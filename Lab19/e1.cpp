// eeeo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <utility>
#include <vector>
#include <math.h>
#include <string>
using namespace std;


class R_lineal {
public:
    
    string operator()(vector<pair<int,int>> &vec) {
        double sum_x{ 0 }, sum_y{ 0 },  prom_x{ 0 }, tam{5}, prom_y{0}, x_c{0}, y_c{0}, x_y{0};
        for (auto i = 0; i < tam; i++) {
            sum_x += vec.at(i).first;
            sum_y += vec.at(i).second;
            x_c += (vec.at(i).first * vec.at(i).first);
            y_c += (vec.at(i).second * vec.at(i).second);
            x_y += vec.at(i).first * vec.at(i).second;
        }
        prom_x /= tam;
        prom_y /= tam;
        double tx = sqrt((x_c / tam) - (prom_x * prom_x));
        double ty = sqrt((y_c / tam) - (prom_y * prom_y));
        double txy = (x_y / tam) - (prom_x * prom_y);
        double r = (txy / (tx * ty)) * 100;
        double b = (x_y - (sum_x * sum_y) / tam) / (x_c - (sum_x * sum_x) / tam);
        double a = (sum_y / tam) - (b * sum_x / tam);
        string as = "a: "+ to_string(a)+" b: "+to_string(b) +" \nResultado: " + to_string(r);

        return as;
    }
};

int main()
{
    vector<pair<int, int>> vect1 = { {2,14},{3,20},{5,32},{7,42},{8,44}};
    R_lineal a;
    int tam = vect1.size();
    string bc = a(vect1);
    cout << bc;
}