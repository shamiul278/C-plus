//Take numbers from 1 to 10 in array. Now, check the even and odd numbers from that array and print the even and odd Number.

#include <iostream>

using namespace std;

int main()
{
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Even numbers is: ";
    for (int i = 0; i < 10; i++)
        {
        if (num[i] % 2 == 0)
        {
            cout << num[i] << " ";
        }
}
    cout << endl;
    cout << "Odd numbers is"<<endl;
    for (int i = 0; i < 10; i++)
    {
        if (num[i] % 2 != 0)
        {
            cout << num[i] << " ";
        }
    }
    cout << endl;
    return 0;
}

