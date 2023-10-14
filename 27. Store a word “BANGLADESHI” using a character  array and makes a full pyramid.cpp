#include <iostream>
using namespace std;
int main()
{
    string word = "BANGLADESHI";
    int len = word.length();


    for (int i = 0; i < len; i++) {

        for (int j = 0; j < len-i-1; j++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << word[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
