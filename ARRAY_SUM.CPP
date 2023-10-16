#22070123138

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
    int matC[i][j];
    

    cout<<"enter values for each Element for the First Matrix"<<endl;

    for (int r = 0; r < i ; r++)
    {
        for (int c = 0; c < j ; c++)
        {
            cin>>matA[r][c];
        }
        
    }

    cout<<"enter values for each Element for the Second Matrix"<<endl;

    for (int r = 0; r < i ; r++)
    {
        for (int c = 0; c < j ; c++)
        {
            cin>>matB[r][c];
        }
        
    }


    for (int r = 0; r < i ; r++)
    {
        for (int c = 0; c < j ; c++)
        {
            matC[r][c] = matA[r][c] + matB[r][c];
        }
        
    }

    for (int r = 0; r < i ; r++)

    {
        cout<<endl;

        for (int c = 0; c < j ; c++)
        {
            cout<<"   "<< matC[r] [c];
        }
        
    }
  return 0;  
}
