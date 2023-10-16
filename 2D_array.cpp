#22070123138

#include<iostream>

using namespace std;

int main()
{
    int matA[2][3];
    

cout<<"enter values for a 2X3 Matrix"<<endl;

    for (int r = 0; r <2 ; r++)
    {
        for (int c = 0; c < 3 ; c++)
        {
            cin>>matA[r][c];
        }
        
    }

    for (int r = 0; r <2 ; r++)

    {
        cout<<endl;

        for (int c = 0; c <3 ; c++)
        {
            cout<<"   "<< matA[r] [c];
        }
        
    }
  return 0;  
}
