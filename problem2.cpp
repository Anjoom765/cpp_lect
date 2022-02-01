 
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int s;
    cin>>s;
    int curr=0;
    for (int  i = 0; i < n; i++)
   
    {
        curr=0;
        for (int j = i; j< n; j++)
        {
            curr+=a[j];
            if(curr==s)
            {
                cout<<i<<j<<endl;
                
            }
        }
     
        
    }
    
}