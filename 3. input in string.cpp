#include <iostream>
using namespace std;

int main()

{
  string name;
  cout<<"Input your name"<<endl;
  cin>>name;
  getline(cin,name);
  cout<<name<<endl;

  int x;
  cout<<"Input your Id"<<endl;
  cin>>x;


  double a,b,c,d,e;
  cout<<"Input Your Bangla Mark: "<<a<<endl;
  cin>>a;

  cout<<"Input Your English Mark: "<<b<<endl;
  cin>>b;

  cout<<"Input Your Chemistry Mark: "<<c<<endl;
  cin>>c;

  cout<<"Input Your Biology Mark: "<<d<<endl;
  cin>>d;

  cout<<"Input Your Physics Mark: "<<e<<endl;
  cin>>e;

  float Total,Percentage;
  Total=a+b+c+d+e;
  Percentage=Total/5;
  cout<<"Total percentage: "<<Percentage;

}
