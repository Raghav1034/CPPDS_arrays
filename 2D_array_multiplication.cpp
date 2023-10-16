#include<iostream>

using namespace std;

int main()
{     

    int i,j,k,l;
    cout<<"Please Enter the number of Rows for the first Matrix"<<endl;
    cin>>i;   
    cout<<"Please Enter the number of Columns for the first Matrix"<<endl;
    cin>>j;
    cout<<"Please Enter the number of Rows for the second Matrix"<<endl;
    cin>>k;   
    cout<<"Please Enter the number of Columns for the second Matrix"<<endl;
    cin>>l;

    int matA[i][j];
    int matB[k][l];
    int matC[i][l];

    if(j == k )
    {

    

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
            matC[r][c] = matA[r][c]*matB[r][c];
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


    }
    else
    cout<<" the Multiplication of the two matrices are not possible"<<endl;
  return 0;  
}
