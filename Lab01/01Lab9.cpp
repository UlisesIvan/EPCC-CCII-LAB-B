#include <iostream>

using namespace std;

int main()
{
    int input;
    int output[10];
    for (int i = 0; i < 10; i++)
    {
        output[i]=0;
    }
    for (int i=0;i<10;i++)
    {
        cin>>input;
        if(input<0)
        {
            output[i]=input;
        }
    }
    int answer=0;
    for (int i = 0; i < 10; i++)
    {
        answer += output[i];
    }
    cout<<"suma de num negativos: "<<answer;
}
