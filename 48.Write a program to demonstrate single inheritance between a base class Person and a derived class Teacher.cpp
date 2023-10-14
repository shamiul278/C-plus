#include <iostream>
#include <string>
using namespace std;


class Person {
    string name;
    int age;
public:
    Person(string n, int a):name(n), age(a)
    {
        cout << "Person is created." << endl;
    }

    ~Person()
    {
        cout << "Person is destroyed." << endl;
    }

    void introduce()
    {
        cout << "My name is " << name << " & I am " << age << " years old." << endl;
    }
};


class Teacher : public Person {
public:
    string subject;


    Teacher(string n, int a, string s) : Person(n, a), subject(s) {
        cout << "Teacher is created." << endl;
    }

    ~Teacher() {
        cout << "Teacher is destroyed." << endl;
    }

    void teach() {
        cout << "I teaches " << subject<<"subject"<<endl;
    }
};

int main() {

    Teacher t("Sakib", 25, "ICT");
    t.introduce();
    t.teach();
}
