#include<iostream>
using namespace std;
void insertionsort(int arr[])
{
    for (int  i = 1; i < 10; i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
        

    }
    
}
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    insertionsort(arr);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}