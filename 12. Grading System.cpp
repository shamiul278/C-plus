#include <iostream>
using namespace std;
int main()

{
     int a,b,c,d,e;
     cout<<"Enter your 1st subject marks: ";
     cin>>a;
     cout<<"Enter your 2nd subject marks: ";
     cin>>b;
     cout<<"Enter your 3rd subject marks: ";
     cin>>c;
     cout<<"Enter your 4th subject marks: ";
     cin>>d;
     cout<<"Enter your 5th subject marks: ";
     cin>>e;

    int sum,percent;
    sum=a+b+c+d+e;
    percent=(sum/5);

    if (percent>=90)
    {
        cout<<"Your Grade: A+"<<endl;
        cout<<"Your GPA: 4.00";
    }
    else if (percent>=85 && percent<=90)
    {
        cout<<"Your Grade: A"<<endl;
        cout<<"Your GPA: 3.75";
    }
        else if (percent>=85 && percent<=80)
    {
        cout<<"Your Grade: A"<<endl;
        cout<<"Your GPA: 3.75";
    }
        else if (percent>=85 && percent<=80)
    {
        cout<<"Your Grade: B+"<<endl;
        cout<<"Your GPA: 3.50";
    }
        else if (percent>=75 && percent<=80)
    {
        cout<<"Your Grade: B"<<endl;
        cout<<"Your GPA: 3.25";
    }
        else if (percent>=70 && percent<=75)
    {
        cout<<"Your Grade: C+"<<endl;
        cout<<"Your GPA: 3.00";
    }
        else if (percent>=65 && percent<=70)
    {
        cout<<"Your Grade: C"<<endl;
        cout<<"Your GPA: 2.75";
    }
        else if (percent>=65 && percent<=60)
    {
        cout<<"Your Grade: D+"<<endl;
        cout<<"Your GPA: 2.50";
    }
        else if (percent>=50 && percent<=60)
    {
        cout<<"Your Grade: D"<<endl;
        cout<<"Your GPA: 2.25";
    }
    else
    {
        cout<<"Your Grade: F"<<endl;
        cout<<"Your GPA: 0.00";
    }



}
