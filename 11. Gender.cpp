#include <iostream>
using namespace std;
int main()


{
    char gender;
    cout<<"enter your gender: "<<endl;
    cin>>gender;

    if (gender=='M' || gender=='m')
    {
        cout<<"Gender Male";
    }
    else if (gender=='F' || gender=='f')
    {
        cout<<"Gender female";
    }
    else
    {
        cout<<"Undefined";
    }

}
