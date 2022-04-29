#include <iostream>

using namespace std;

void decelBinario(int n)
{
    int binarioNum[32];

    int i = 0;
    while (n > 0)
    {

        binarioNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << binarioNum[j];
}

int main()
{
    int num=0;
    cout<<"ingrese un numero: ";
    cin>>num;
    if(num>100 && num<999)
    {
        decelBinario(num);
    }
    else
    {
        cout<<"no cumple";
    }
}
