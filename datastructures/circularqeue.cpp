#include<iostream>
using namespace std;
class circularQueue{
  private:
   int arr[5];
   int front;
   int rear;
   int itemcount;
  public: 
   circularQueue()
   {
     itemcount=0;
     front=-1;
     rear=-1;
     for (int i = 0; i < 5; i++)
     {
         arr[i]=0;
     }
     
   }
   bool isEmpty()
   {
    if(front==-1&&rear==-1)
      return true;
    else
      return false; 
   }
   bool isFull()
   {
     if((rear+1)%5==front)
       return true;
     else
       return false;
   }
  void enqeue(int val)

  {
     if (isFull())
     {
         cout<<"full"<<endl;
         return;
     }
     else if(isEmpty())
     {  
        rear=0;
        front=0;
        arr[rear]=val;
     }
     else
     {
         rear=(rear+1)%5;
         arr[rear]=val;
     }
     itemcount++;
   } 

  int deqeue()
  { 
    int x=0;
    if(isEmpty())
    {
        cout<<"queue is empty"<<endl;
        return 0;
    }
    else if(front==rear)
    {
      x=arr[front];
      arr[front]=0;
      rear=-1;
      front=-1;
      return x;
      itemcount--;
    }
    else
    {
        x=arr[front];
        arr[front]=0;
        front=(front+1)%5;
        return x;
        itemcount--;
    }
  }
  int count()
  {
      return itemcount;
  }
  void Dispay()
     {
         cout<<"all values in the stack are"<<endl;
         for (int i = 0; i<=4 ; i++)
         {
             cout<<arr[i]<<endl;
         }
         
     }

};

int main()
{ 
 circularQueue q1;
 int option,value;
 do
  {
   cout<<"what operation"<<endl;
   cout<<"1 enqeue"<<endl;
   cout<<"2 deqeue"<<endl;
   cout<<"3 isEmpty"<<endl;
   cout<<"4 isfull"<<endl;
   cout<<"5 count" <<endl;
   cout<<"6 display"<<endl;
   cout<<"7 clear screen"<<endl;
   cin>>option;
   
   switch(option)
   {   case 0:
        
        break;
       case 1:
         cout<<"enter the value"<<endl;
         cin>>value;
         q1.enqeue(value);
         break;
       case 2:
         cout<<"deqeue operation"<<endl;
         cout<<q1.deqeue()<<endl;
         break;
       case 3:
         if(q1.isEmpty())
           cout<<"Empty"<<endl;
         else
           cout<<"not empty"<<endl;
         break;
       case 4:
         if (q1.isFull())
         {
             cout<<"full"<<endl;
         }
         else
         {
             cout<<"not full"<<endl;
         }
         break;
       case 5:
         cout<<"count"<<q1.count()<<endl;
         break;
       case 6:
         cout<<"display"<<endl;
         q1.Dispay();
         break;
       case 7:
         system("cls");
         break;
       default:
         cout<<"eneter correct value"<<endl;
         }
 }while(option!=0);
}