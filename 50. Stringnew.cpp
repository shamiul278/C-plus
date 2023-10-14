#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char c1[15]="Bangladesh";
    char c2[10]="America";
    cout<<strlen(c1)<<endl;
    cout<<sizeof(c1)<<endl;
    cout<<strstr(c1,"gla")<<endl;
    cout<<strchr(c1,'l')<<endl;
    cout<<strncat(c1,c2,4)<<endl;
    cout<<strncpy(c1,c2,3)<<endl;

}

