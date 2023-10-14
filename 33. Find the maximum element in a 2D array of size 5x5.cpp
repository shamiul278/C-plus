#include <iostream>
using namespace std;
int main()
{
    int matrix[5][5];
    for(int r=0; r<5; r++)
    {
        cout<<"rows: "<<r+1<<endl;
        for(int c=0; c<5; c++)
        {
          cout<<"Element: ";
          cin>>matrix[r][c];
        }

    }

    int max_element = matrix[0][0];
    for(int r=0; r<5; r++)
    {
        for(int c=0; c<5; c++)
        {
            if (matrix[r][c]>max_element)
            {
                max_element = matrix[r][c];
            }
        }
    }
    cout << "The maximum element of 5x5: " << max_element << endl;
}
