#include <iostream>
using namespace std;

class bank_account {
public:
    string name;
    int account_No;
    double balance;

    bank_account()
    {
        cout << "This parameter is empty" << endl;
    }
    bank_account(string x, int y, double z)
    {
        name = x;
        account_No = y;
        balance = z;
        cout << "This parameter is construct" << endl;
    }

    void deposit(int x) {
        cout << "Deposit Amount " << x << endl;
        balance += x;
        cout << "After deposit " << balance << endl;
    }
    void withdraw(int x) {
        cout << "Withdraw amount " << endl;
        balance -= x;
        cout << "After Withdraw " << balance << endl;
    }
    void details() {
        cout << name << " Account " << account_No << " Balance " << balance << endl;
    }
};

int main() {
    bank_account b1("Sakib", 100, 5000);
    b1.details();
    bank_account b2;
}
