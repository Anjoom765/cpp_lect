#include<iostream>
using namespace std;
void linearSearch(int ar[],int n)
{
   int temp=-1;
   for (int i = 0; i < 5; i++)
   {
       if(ar[i]==n)
       {
           cout<<"element found "<<i+1<<endl;
           temp=0;
       }
    
   }
    if(temp==-1)
    {
           cout<<"no element found"<<endl;
    }
   
}
int main()
{
    int ar[5]={1,23,44,5,7};
    cout<<"enter the elelmenr"<<endl;
    int num;
    cin>>num;
    linearSearch(ar,num);
    return 0;

}