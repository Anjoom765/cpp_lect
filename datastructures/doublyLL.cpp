#include<iostream>
using namespace std;

class Node{
  public:
     int key;
     int data;
     Node* next;
     Node* previous;

     Node()
     {
         key=0;
         data=0;
         next=NULL;
         previous=NULL;

     }
     Node(int k,int d)
     {
         key=k;
         data=d;
         next=NULL;
         previous=NULL;
     }
   
};
class doublyLinkedList{

     public:
      Node* head;
      doublyLinkedList()
      {
          head=NULL;
      }
      doublyLinkedList(Node *n)
      {
          head=n;
      }
      Node* nodeExists(int k)
      {
          Node* temp=NULL;
          Node* ptr1=head;
          while(ptr1!=NULL)
          {
              if(ptr1->key==k)
              {
                 temp=ptr1;
                 break;
                                 
              }
              else
              {
                  ptr1=ptr1->next;
              }

          }
          return temp;
      }

     void appendNode(Node* n)
     {
         if(nodeExists(n->key)!=NULL)
         {
             cout<<"Node already exists with key value"<<endl;
         }
         else{
            
            if(head==NULL)
            {
                head=n;
                cout<<"node appended as Head NOde"<<endl;
            }
            else{
                Node* ptr=head;
                while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=n;
                n->previous=ptr;
                cout<<"Node appended"<<endl;
            }


         }


        


     }
     void prependNode(Node* n)
     {
        if(nodeExists(n->key)!=NULL)
        {
            cout<<"Node aready exists with key value"<<endl;
        }
        else{
            head->previous=n;
            
            n->next=head;
            head=n;
            cout<<"NOde prepended"<<endl;
        }


     }
};