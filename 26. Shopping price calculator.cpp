//Shopping price calculator.

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of items: ";
    cin >> n;
    float prices[n], quantities[n];
    float total_cost = 0.00;
    for (int i = 0; i < n; i++)
        {
        cout << "Enter the price of item " << i + 1 << ": ";
        cin >> prices[i];
        cout << "Enter the quantity of item " << i + 1 << ": ";
        cin >> quantities[i];
        total_cost += prices[i] * quantities[i];
    }
    cout << "Total cost:" << total_cost << endl;

}

