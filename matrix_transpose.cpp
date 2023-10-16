#include<iostream>

using namespace std;

int main()
{     

    int i,j;
    cout<<"Please Enter the number of Rows"<<endl;
    cin>>i;   
    cout<<"Please Enter the number of Columns"<<endl;
    cin>>j;
    int matA[i][j];
    int matB[i][j];
    cout<<"enter Matrix element value to transpose "<<endl;

    for (int r = 0; r < i ; r++)
    {
        for (int c = 0; c < j ; c++)
        {
            cin>>matA[r][c];
        }
        
    }
    for (int r = 0; r < i ; r++)
    {
        for (int c = 0; c < j ; c++)
        {
            matB[r][c] = matA[c][r];
        }
        
    }
    for (int r = 0; r < i ; r++)

    {
        cout<<endl;

        for (int c = 0; c < j ; c++)
        {
            cout<<"   "<< matB[r][c];
        }
        
    }
  return 0;  
}