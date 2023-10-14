#include <iostream>
using namespace std;
void areas(float r, float l, float b, float a)
{
    float cirle_area =(3.1416*(r*r));
    float square_area = (l*b);
    float rectangle_area = (a*a);
    cout<<"Area of circle: "<<cirle_area<<"sq/m"<<endl;
    cout<<"Area of square: "<<square_area<<"sq/m"<<endl;
    cout<<"Area of Rectangle: "<<rectangle_area<<"sq/m"<<endl;

}
int main()
{   int r,l,b,a;
    cout<<"Enter the radius of circle"<<endl;
    cin>>r;
    cout<<"Enter the length and breadth"<<endl;
    cin>>l;
    cin>>b;
    cout<<"Enter the side"<<endl;
    cin>>a;
    areas(r,l,b,a);
}
