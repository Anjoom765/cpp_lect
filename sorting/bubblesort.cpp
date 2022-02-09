#include<iostream>
using namespace std;
void bubblesort(int arr[])
{
    for (int  i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10-i-1; j++)
        { 
            if(arr[j]>arr[j+1])
            {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
        
    }
    
}
int main()
{
    int arr[10]={1,2,44,22,11,88,66,44,55,99};
    bubblesort(arr);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}