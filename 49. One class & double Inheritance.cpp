#include <iostream>
using namespace std;
class person
{
private:
    string name;
    int age;
public:
    person()
    {
        cout<<"Empty cons for Person"<<endl;
    }
    person(string n,int a)
    {
        name=n;
        age=a;
        cout<<"Para cons for person"<<endl;
    }
    void setname(string n)
    {
        name=n;
    }
    void setage(int a)
    {
        age=a;
    }
    string getname()
    {
        return name;
    }
     int getage()
     {
         return age;
     }

    ~person()
    {
        cout<<"Person Destructor Called"<<endl;
    }
    void show()
    {
       cout<<"Name "<<name<<"Age "<<age<<endl;
    }
};
class student:public person
{
private:
    int id;
    float cgpa;
public:
    student()
    {
        cout<<"Empty cons. for student"<<endl;
    }
    student(string n,int a,int i,float c):person(n,a)
    {
        id=i;
        cgpa=c;
        cout<<"Para cons for student"<<endl;
    }
    void setid(int i)
    {
        id=i;
    }
    void setcgpa(float c)
    {
        cgpa=c;
    }
    int getid()
    {
        return id;
    }
    float getcgpa()
    {
        return cgpa;
    }



    ~student()
    {
        cout<<"Student Destructor"<<endl;
    }
    void details()
    {
        show();
        cout<<" ID "<<id<<" CGpa "<<cgpa<<endl;
    }
};




int main()
{
     student ss("shakib",37,76,3.96);
     ss.details();
     student s1;
     s1.setname("Mushi");
     s1.setage(32);
     s1.setid(76);
     s1.setcgpa(3.97);
     cout<<s1.getname()<<endl;
     cout<<s1.getage()<<endl;
     cout<<s1.getid()<<endl;
     cout<<s1.getcgpa()<<endl;
}
