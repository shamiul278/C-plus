#include <iostream>
using namespace std;
int main()
{
    int a[4][4];
    int b[4][4];
    int mul[4][4];
    int r=4,c=4;


cout << "Enter the first matrix element:\n";
    for(int i = 0; i < r; i++)
    {
        cout<<"Row: "<<i+1<<endl;
        for(int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
cout<<endl;

    cout << "Enter the second matrix element:\n";
    for(int i = 0; i < r; i++)
    {
        cout<<"Row: "<<i+1<<endl;
        for(int j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }
cout<<endl;

    cout << "Multiplication of the matrices: "<<endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for(int k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

cout<<endl;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << mul[i][j] << "\t";
        }
        cout << endl;
    }
}
