#include <iostream>
using namespace std;
int main()
{
    char name[]="BANGLA";
    for(int i=0;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            cout<<name[j];
        }

        char sp[]=" ";
        for(int s=0;s<2*i;s++)
        {
            cout<<sp[0];
        }

        char name[]= "DESH";
        for(int k=i;k<6;k++)
        {
            cout<<name[k];
        }
        cout<<endl;
    }
}
