/*Develop a program takes a word as input from the user using character array print only the vowels in the inputted word.
                                     Sample
                                              Input: hello
                                              Output: e,o,

*/
#include <iostream>
using namespace std;
int main() {
    char word[5];
    cout << "Enter a word: ";
    cin >> word;
    cout << "Vowels in the word: ";
    for (int i = 0; i < 5; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
                {
            cout << word[i] << " ";
        }
    }
    return 0;
}
