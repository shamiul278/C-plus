#include <iostream>
using namespace std;
int main()


{
    int x;

    cout<<"enter a number: "<<endl;
    cin>> x;

    if (x%2 && x==0)
    {
        cout<<"It is an even number";
    }
    else if (x%3)
    {
        cout<<"It is a odd number";
    }
    else
    {
        cout<<"Error";
    }

}
