 
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
    int minindex=INT_MAX;
    const int N= 1e6 + 2;
    int idx[N];
    for (int  i = 0; i < N; i++)
    {
        idx[i]=-1;
    }
    
    for (int i = 0; i < n; i++)
    {
        
        if(idx[a[i]] !=-1)
        {
            minindex=min(minindex,idx[a[i]]); 

        }
        else
        {
            idx[a[i]]=i;
        }
    }
    
    if(minindex=INT_MAX)
    {
        cout<<"-1"<<endl;

    }
    else
    
    {
        cout<<minindex+1<<endl;
    }

}