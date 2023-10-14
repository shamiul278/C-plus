#include<iostream>
using namespace std;
struct student{
        string name;
        int age;
        int cGPA;
        string Address;
        };
int main()
{
    student w,x,y,z;
        w.name = "shamiul islam";
        x.age = 18;
        y.cGPA = 4.00;
        z.Address = "Dhaka";
    cout<<w.name<<" "<<x.age<<" "<<y.cGPA<<" "<<z.Address<<endl;

    student a,b,c,d;
        a.name = "shamiul islam";
        b.age = 18;
        c.cGPA = 4.00;
        d.Address = "Dhaka";
    cout<<a.name<<" "<<b.age<<" "<<c.cGPA<<" "<<d.Address<<endl;

    student e,f,g,h;
        e.name = "shamiul islam";
        f.age = 18;
        g.cGPA = 4.50;
        h.Address = "Dhaka";
    cout<<e.name<<" "<<f.age<<" "<<g.cGPA<<" "<<h.Address<<endl;
}
