#include <iostream>
using namespace std;
int main()

{

  string name;
     cout<<"Enter Your Name: "<<name<<endl;
     getline(cin,name);

  int ID;
    cout<<"Enter your ID: "<<endl;
    cin>>ID;

  float a,b,c,d,e,sum,percent;

    cout<<"Enter your Bangla marks: "<<endl;
    cin>>a;

    cout<<"Enter your English marks: "<<endl;
    cin>>b;

    cout<<"Enter your Chemistry marks: "<<endl;
    cin>>c;

    cout<<"Enter your Biology marks: "<<endl;
    cin>>d;

    cout<<"Enter your Physics marks: "<<endl;
    cin>>e;


  sum=a+b+c+d+e;
  percent=(sum/5);


  cout<<"Here the details:"<<endl;
  cout<<"Your Name: "<<name<<endl;
  cout<<"Your ID: "<<ID<<endl;
  cout<<"You got Percentage: "<<percent<<endl;


  if(percent>=80)
  {
    cout<<"GPA: A+";
  }

  else if(percent>=70 && percent<=80)
  {
    cout<<"GPA: A";
  }

  else if(percent>=60 && percent<=70)
  {
    cout<<"GPA: A-";
  }

  else if(percent>=50 && percent<=60)
  {
    cout<<"GPA: B";
  }

  else if(percent>=40 && percent<=50)
  {
    cout<<"GPA: C";
  }

  else if(percent>=33 && percent<=40)
  {
    cout<<"GPA: D";
  }

  else
  {
    cout<<"GPA: F";
  }
}
