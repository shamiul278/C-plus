#include <iostream>
using namespace std;

int main()
{
    string cname[5];
    int i = 0;
    while (i < 5)
    {
        cin >> cname[i];
        i++;
    }
    cout << "\n Now output"<<endl;
    for (int i = 0 ; i < 5 ; i++)
    {
        cout << cname[i] <<endl;
    }
    return 0;
}

