#include <iostream>
using namespace std;
int main()

{
    char gender;
    cout<<"enter your gender: "<<endl;
    cin>>gender;

     switch(gender)
     {

      case 'M':
      cout <<"Male";
      break;

      case 'm':
      cout <<"male";
      break;

    case 'f':
      cout <<"female";
      break;

    case 'F':
      cout <<"Female";
      break;

    default:

      cout << "Error! your give the information";
      break;
  }

}
