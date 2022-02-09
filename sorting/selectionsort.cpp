#include<iostream>
using namespace std;
void selectionsort(int arr[])
{   
   for (int i = 0; i < 9; i++)
   {
       int min=i;
       for (int j = i+1; j < 10; j++)
       {
           if (arr[j]<arr[min])
           {
               min=j;
           }
           
       }
      if (min!=i)
      {   
       int temp=arr[min];
       arr[min]=arr[i];
       arr[i]=temp;
         
      }
      
       
   }
   

   
   
}
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }


    selectionsort(arr);
    for (int i = 0; i < 10; i++)
      {
       cout<<arr[i]<<"  ";

      }
      return 0;
   
}