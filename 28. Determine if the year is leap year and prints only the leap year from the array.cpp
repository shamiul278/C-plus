#include <iostream>
using namespace std;

int main() {
    int years[5],leap_years = 0;

    // Input 5 years from user and store in array
    cout << "Inputted Years: ";
    for (int i = 0; i < 5; i++) {
        cin >> years[i];
    }

    // Check each year in the array and print the leap years
    cout << "Leap years present in the array are: ";
    for (int i = 0; i < 5; i++) {
        if ((years[i] % 4 == 0 && years[i] % 100 != 0) || years[i] % 400 == 0) {
            cout << years[i] << " ";
            leap_years++;
        }
    }
    return 0;
}
