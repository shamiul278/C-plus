#include <iostream>
using namespace std;

int main()
{
    string cname[5];
    for (int i = 0 ; i < 5 ; i++)
    {
        cin >> cname[i];
    }
    cout << "\n Now output"<<endl;
    for (int i = 0 ; i < 5 ; i++)
    {
        cout << cname[i] <<endl;
    }
    return 0;
}
