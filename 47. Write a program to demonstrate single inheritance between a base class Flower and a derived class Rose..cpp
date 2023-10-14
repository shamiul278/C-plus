#include <iostream>
using namespace std;

class Flower {
    public:
        Flower() {
            cout << "Flower is created." << endl;
        }
        ~Flower() {
            cout << "Flower has been destroyed." << endl;
        }
        void bloom() {
            cout << "Flower is blooming!" << endl;
        }
};

class Rose : public Flower {
    public:
        Rose() {
            cout << "Rose is created." << endl;
        }
        ~Rose() {
            cout << "Rose had destroyed." << endl;
        }
        void displayColor() {
            cout << "This rose is red." << endl;
        }
        void bloom() {
            cout << "Rose blooming!" << endl;
        }
};

int main() {
    Rose r;
    r.bloom();
    r.displayColor();
    return 0;
}
