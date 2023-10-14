#include<iostream>
using namespace std;

class Account
{
public:
    string name;
    int account;
    double balance;

    void show()
    {
        cout<<"Show of parent class "<<endl;
    }
};

class fixedaccount: public Account
{
public:
    int year;
    void details()
    {
        cout<<name<<" "<<account<<" "<<balance<<" "<<year<<endl;
        cout<<"details of child class"<<endl;
    }
};

int main()
{
    fixedaccount f1;
    f1.name = "sakib";
    f1.account= 500;
    f1.balance= 1500;
    f1.year= 5;
    f1.show();
    f1.details();
}
