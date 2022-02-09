#include<iostream>
using namespace std;
int binarySearch(int a[],int left,int right,int x)
{
    while (left<=right)
    {
       int mid=(left+right)/2;
       if (a[mid]==x)
       {
           return mid;
       }
       else if(a[mid]<x)
       {
           left=mid+1;
       }
       else
       {
           right=mid-1;
       }
       
    }
    return -1;
    
}
int main()
{
  int num;
  int output;
  int arr[10];
  cout<<"enter the integers"<<endl;
  for (int i = 0; i < 10; i++)
  {
      cin>>arr[i];
  }
  cout<<"enter one number "<<endl;
  cin>>num;
  output=binarySearch(arr,0,9,num);
  if (output==-1)
  {
      cout<<"No otput found"<<endl;
  }
  else{
      cout<<"element found"<<endl;
  }
  

  return 0;


}