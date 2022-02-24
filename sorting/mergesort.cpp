#include<iostream>
using namespace std;
void merge(int arr[],int l, int m ,int r)
{
  int i=l,j=m+1,k=l;
  int temp[5];
  while(i<=m&&j<=r)
  {
      if(arr[i]<=arr[j])
      {
          temp[k]=arr[i];
          i++;
          k++;

      }
      else{
          temp[k]=arr[j];
          j++;
          k++;
      }
  }
  while(i<=m)
  {
      temp[k]=arr[i];
      i++;
      k++;
  }
  while(j<=r)
  {
    temp[k]=arr[j];
    j++;
    k++;
  }
for (int i = l; i<=r; i++)
{
    arr[i]=temp[i];
}

}
void mergeSort(int arr[], int l,int r)
{
    if(l<r)
    {
    int m=(l+r)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
   }
}


    int main()
{
  
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
      cin>>arr[i];
  }
  cout<<"before merge sort"<<endl;
  for (int i = 0; i < 5; i++)
  {
      cout<<arr[i]<<" "<<endl;
  }
  mergeSort(arr,0,4);
  cout<<"after merge sort"<<endl;
  for (int i = 0; i <5; i++)
  {
      cout<<arr[i]<<" ";
  }
   
  
}