#include <iostream>
using namespace std;

int main()

{

  float x,y,z,sum,sub,mult,div,div2;

  cout<<"Enter your first number"<<endl;
  cin>>x;

  cout<<"Enter your second number"<<endl;
  cin>>y;

  cout<<"Enter your Third number"<<endl;
  cin>>z;

  sum= x+y+z;
  sub= x-y-z;
  mult= x*y*z;
  div= x/y;
  div2=div/z;


  cout<<"Result of Addition: "<<sum<<endl;
  cout<<"Result of subtraction: "<<sub<<endl;
  cout<<"Result of Multiplication: "<<mult<<endl;
  cout<<"Result of Division: "<<div2<<endl;

  return 0;
}
