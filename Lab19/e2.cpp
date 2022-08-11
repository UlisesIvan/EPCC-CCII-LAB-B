#include <iostream>
#include <utility>
#include <string.h>
#include <vector>
using namespace std;

class funct {
public:
    vector<int> operator()(int *x, int *y, int dato) {
        vector<int> arr;
        while (x != y)
        {
            if (dato == *x) { arr.push_back(*x); }
            x = x++;
            if (x == y)
            {
                if (dato == *x) { arr.push_back(*x); }
            }
        }
        return arr;
    }

};

int main()
{
    vector<int> vectors = { 10, 30, 30, 30, 50 };
    int final = vectors.size();

    int* ptrInicio = &vectors[0];
    int* ptrFinal = &vectors[final - 1];

    funct obj;

    vector<int> a = obj(ptrInicio, ptrFinal, 30);

    for (int i : a)
        std::cout << i << ' ';

    system("pause");
    return 0;
}