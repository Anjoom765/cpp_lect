#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1][n2],b[n2][n3];
    for (int i = 0; i < n1; i++)
    {
        for ( int j = 0; j < n2; j++)
        {
            cin>>a[i][j];
        }
        
    }

    for (int i = 0; i < n2; i++)
    {
        for ( int j = 0; j < n3; j++)
        {
            cin>>b[i][j];
        }
        
    }


    //multiplication

    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for ( int j = 0; j < n3; j++)
        {
           ans[i][j]=0;
        }
        
    }
    for (int row = 0; row < n1; row++)
    {
        for (int col  = 0; col< n3; col++)
        {
            for (int i = 0; i < n2; i++)
            {
                ans[row][col]+=a[row][i]*b[i][col];
            }
            
        }
        
    }
    for (int i = 0; i < n1; i++)
    {
        for ( int j = 0; j < n3; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
        
    }

    


}