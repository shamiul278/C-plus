#include <iostream>
using namespace std;
int main()
{
    int matrix1[4][4];
    int matrix2[4][4];
    int sum[4][4];
    cout<<"1st Matrix"<<endl;
    for(int r=0; r<4; r++)
    {
        cout<<"rows: "<<r+1<<endl;

        for(int c=0; c<4; c++)
        {
            cout<<"Element "<<c+1<<": ";
            cin>>matrix1[r][c];
        }
        cout<<endl;
    }
cout<<endl;
    cout<<"2nd Matrix"<<endl;
    for(int r=0; r<4; r++)
    {
        cout<<"rows: "<<r+1<<endl;
        for(int c=0; c<4; c++)
        {
            cout<<"Element "<<c+1<<": ";
            cin>>matrix2[r][c];
        }
        cout<<endl;
    }
cout<<endl;

    for(int r=0; r<4; r++)
    {
        for(int c=0; c<4; c++)
        {
            sum[r][c]= matrix1[r][c] + matrix2[r][c];
        }

    }
cout<<"The summation of all the elements"<<endl;

    for(int r=0; r<4; r++)
    {
        for(int c=0; c<4; c++)
        {
            cout<<sum[r][c]<<" ";
        }
        cout<<endl;
    }
}
