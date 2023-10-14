#include <iostream>
using namespace std;

int main()
{
    string cname[5];
     cin>>cname[0];
     cin>>cname[1];
     cin>>cname[3];
     cin>>cname[4];

    cout << "\n Now output"<<endl;
    for (int i = 0 ; i < 5 ; i++)
    {
        cout << cname[i] <<endl;
    }
    return 0;
}
