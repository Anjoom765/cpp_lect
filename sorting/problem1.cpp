#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[2*n];
    for (int i = 0; i < 2*n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+2*n);
    int k=0;
    for (int i = 0; i < 2*n; i+=2)
    {
        k+=min(arr[i],arr[i+1]);
    }
    cout<<k;
    
}



