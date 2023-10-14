#include <iostream>
using namespace std;
int main()

{
    string cname = "BANGLADESH";

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << cname[j];
        }
        cout << endl;
    }

    return 0;
}




