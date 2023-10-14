#include <iostream>
using namespace std;
int main()

{
    float a,b,c,d;

     cout<<"input 1st number: "<<endl;
    cin>>a;
     cout<<"input 2nd number: "<<endl;
    cin>>b;
     cout<<"input 3rd number: "<<endl;
    cin>>c;
     cout<<"input 4th number: "<<endl;
    cin>>d;


    if (a>b && a<c && a<d)
    cout<<a<<endl;
    else if (b>a && b<c && b<d)
    cout<<b<<endl;
    else if (c>a && c<b && c<d)
    cout<<c<<endl;
    else if (d>a && d<b && d<c)
    cout <<d<<endl;
    else
    cout <<endl<<"error"<<endl;

}
