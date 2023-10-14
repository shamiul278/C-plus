#include <iostream>
using namespace std;
int main()

{
     string name;
     cout<<"Enter your Name: "<<name<<endl;
     cin>>name;
     getline(cin,name);



    int ID;
    cout<<"Enter your ID: "<<endl;
    cin>>ID;
    float a,b,c,d,e;

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

    float sum,percent;
  sum=a+b+c+d+e;
  percent=(sum/5);

  cout<<"Here the details"<<endl;
  cout<<"Your Name"<<name<<endl;
  cout<<"Your ID"<<endl;
  cout<<"You got Percentage: "<<percent<<endl;

}

