#include<iostream>
using namespace std;
class Node{
  public:
     int key;
     int data;
     Node* next;

     Node()
     {
         key=0;
         data=0;
         next=NULL;

     }
     Node(int k,int d)
     {
         key=k;
         data=d;
     }
   
};
class singlyLinkedList{
    public:
      Node* head;
      singlyLinkedList()
      {
          head=NULL;
      }
      singlyLinkedList(Node *n)
      {
          head=n;
      }
      Node* nodeExists(int k)//linear search
      {
        
        Node*  temp=NULL;

        Node* ptr =head;    
 
        while(ptr!=NULL)
        {
            if(ptr->key==k)
            {
                temp=ptr;
                break;
            }
            else{
                ptr=ptr->next;
            }
        } 
        return temp;
      }
      //append the node
      void appendNode(Node *n)
      {
        if(nodeExists(n->key)!=NULL)
        {
            cout<<"node already exists"<<endl;
        }
        else{
            if(head==NULL)
            {
                head=n;
                cout<<"Node Appended"<<endl;
            }
            else
            {
                Node *ptr =head;
                while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=n;
                cout<<"node appended"<<endl;
            }
        }
      }
      //prepend node - attach a node at start
      void prependNode(Node *n)
      {
        if(nodeExists(n->key)!=NULL)
        {
            cout<<"node already exists"<<endl;
        }
        else{
            n->next=head;
            head=n;
            cout<<"node prepended"<<endl;
        }

      }
      //insert a node after a particular node
      void insertNode(int k, Node *n)
      {
         Node* ptr=nodeExists(k);
         if(ptr==NULL)
         {
             cout<<"no node exists with key value k"<<endl;

         }
         else
         {
             if(nodeExists(n->key)!=NULL)
             {
                 cout<<"Node already exists with the key value, provide another key value"<<endl;
             }
             else
             {
                 
                 n->next=ptr->next;
                 ptr->next=n;
                 cout<<"node inserted"<<endl;
             }
         }
      }
      //delete a node with a unique key
      void deleteNodeByKey(int k)
      {
          if(head==NULL)
          {
              cout<<"already empty"<<endl;
          }
          else if(head!=NULL)
          {
             if(head->key==k)
             {
                 head=head->next;
                 
             }
          }
      }
      

};




int main()
{

}