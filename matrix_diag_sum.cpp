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
    
    int trace;

  
    

    cout<<"enter values for each Element for the First Matrix"<<endl;

    for (int r = 0; r < i ; r++)
    {
        for (int c = 0; c < j ; c++)
        {
            cin>>matA[i][j];
        }
        
    }

     for (int r = 0; r < i ; r++)
    {
        for (int c = 0; c < j ; c++)
        {
            if (i==j)
            {
                trace+=matA[i][j] ;
            }
        }
        
    }


     cout<<"   "<< trace;

  return 0;  
}