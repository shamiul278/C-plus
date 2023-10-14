#include <iostream>
using namespace std;

class Account {

public:
    string name;
    int accnb;
    double balance;
    static float in_rate;
    Account(){

    }
    Account (string n, int a, double b) {
        name = n;
        accnb = a;
        balance = b;
    }
    ~Acoount() {}
    void show() {
        cout<<" show of the parent class "<<endl;
        cout<<name<<" "<<accnb<<" "<<balance<<" "<<"In_rate "<<in_rate<<endl;
    }
};

float Account::in_rate = 7.5;

int main()
{
    Account a1("Sakib",75,400);
    a1.show();
    Account a2("Mushi",15,5000);
    a2.show();
    Account a3("Mash",10,8000;
    a3.show();
}
