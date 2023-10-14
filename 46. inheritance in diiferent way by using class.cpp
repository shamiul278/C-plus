#include <iostream>
using namespace std;
class person{
public:
    string name;
    int age;
    person()
    {
        cout<<"This is parent class empty constructor"<<endl;
    }
    person(string n, int a)
    {
        name = n;
        age = a;
        cout<<"This is parent class constructor"<<endl;
    }
    ~person()
     {
         cout<<"Parent class destructor called"<<endl;
     }
     void show()
     {
         cout<<"Name "<<name<<" Age "<<age<<endl;
     }
};

class student : public person
{
public:
    int id;
    float cgpa;
    student()
    {
        cout<<"This is child class empty constructor"<<endl;
    }
    student(string n, int a, int i, float c):person(n,a)
    {
        id = i;
        cgpa = c;
        cout<<"This is child constructor "<<endl;
    }
    ~student()
    {
        cout<<"child class destructor called"<<endl;
    }
    void details()
     {
         
         cout<<"----------------------------------------------------------"<<endl;
         
         cout<<"Name "<<name<<" Age "<<age<<" Id  "<<id<<" Cgpa "<<cgpa<<endl;
         
         cout<<"----------------------------------------------------------"<<endl;
     }
};

int main()
{

    student s1("sakib", 55, 888, 3.37);
    s1.details();
    student s2("Mushi", 34, 22, 3.90);
    s2.details();
    student s3;
}
