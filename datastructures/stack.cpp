#include<iostream>
using namespace std;
class Stack{
    private:
     int top;
     int arr[5];
    public:
     Stack()
     {
         top=-1;
         for (int i = 0; i < 5; i++)
         {
             arr[i]=0;
         }
         
     } 
     bool isEmpty()
     {
       if(top==-1)
       {
           return true;
       }
       else{
           return false;
       }
     }
     bool isFull()
     {
         if(top==4)
          return true;
         else
          return false; 
     }
     void Push(int val)
     {
         if(isFull())
         {
             cout<<"stack overflow"<<endl;

         }
         else{
             top++;
             arr[top]=val;
         }

     }
     int pop()
     {
         if(isEmpty())
         {
             cout<<"stack underflow"<<endl;
             return 0;
         }
         else
         {
         int popValue=arr[top];
         arr[top]=0;
         top--;
         return popValue;
         }
     }
     int count()
     {
         return top+1;
     }
     int peek(int pos)
     {
         if(isEmpty())
         {
             cout<<"stack underflow"<<endl;
         }
         else
         {
             return arr[pos];
         }
     }
     void change(int pos,int val)
     {
        arr[pos]=val;
        cout<<"value changed at location"<<pos<<endl;
     }
     void Dispay()
     {
         cout<<"all values in the stack are"<<endl;
         for (int i = 4; i>=0 ; i--)
         {
             cout<<arr[i]<<endl;
         }
         
     }

   
};
int main()
{
 Stack s1;
 int option,position, value;
 do
 {
   cout<<"what operation"<<endl;
   cout<<"1 push"<<endl;
   cout<<"2 pop"<<endl;
   cout<<"3 isEmpty"<<endl;
   cout<<"4 isfull"<<endl;
   cout<<"5 peek" <<endl;
   cout<<"6 count"<<endl;
   cout<<"7 display"<<endl;
   cout<<"8 change"<<endl;
   cout<<"9 clear screen"<<endl;
   cin>>option;
   
   switch(option)
   {   case 0:
        break;
       case 1:
         cout<<"enter value"<<endl;
         cin>>value;
         s1.Push(value);
         break;
       case 2:
         cout<<"poped "<<s1.pop()<<endl;
         break;
       case 3:
         if(s1.isEmpty())
         {
             cout<<"empty"<<endl;
         }
         else
         {
             cout<<"not empty"<<endl;
         }
         break;
       case 4:
         if (s1.isFull())
         {
            cout<<"full"<<endl;
         }
         else
         {
            cout<<"not full"<<endl;
         }
         break;
       case 5:
         cout<<"enter value to peek";
         cin>>position;
         cout<<s1.peek(position);
         break;
       case 6:
         cout<<"count is"<<s1.count()<<endl;  
         break;
       case 7:

         cout<<"displayed elements"<<endl;
         s1.Dispay();
         break;
       case 8:
         cout<<"enter pos value to change";
         cin>>position;
         cout<<"enter val value to change";
         cin>>value;
         s1.change(position,value);
         break;
        case 9:
         system("cls");
         break;
        default:
         cout<<"enter proper option num"<<endl;


               
   }
 }while(option!=0);


}