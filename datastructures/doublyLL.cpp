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
     void insertNode(int k,Node* n)
     {
          Node* ptr=nodeExists(k);
          if(ptr==NULL)
          {
              cout<<"no node exists with the key"<<endl;
          }
          else
          {
              if(nodeExists(n->key)!=NULL)
              {
                  cout<<"node already exist with the key value"<<endl;
              }
              else
              
              {
                  Node* nextNode=ptr->next;
                   if(nextNode==NULL)
                   {
                       ptr->next=n;
                       n->previous=ptr;
                       cout<<"Node inserte at the end"<<endl;
                   }  
                  else{ 
                  n->next=ptr->next;
                  n->previous=ptr;
                  nextNode->previous=n;
                  ptr->next=n;

                  cout<<"node inserted"<<endl;

              }
          }


     }
     }
     void deleteNodeByKey(int k)
     {
        Node* ptr=nodeExists(k);
        if(ptr==NULL)
        {
            cout<<"no node exists with key value"<<endl;
        }
        else{
            if(head==NULL)
            {
                cout<<"doubly Linked list already empty"<<endl;
            }
            else if(head!=NULL)
            {
                if(head->key==k)
                {
                    head=ptr->next;
                    cout<<"Node unliked with key value"<<endl;
                }
                else{
                    Node* nextNode=ptr->next;
                    Node* prevNode=ptr->previous;
                    if(nextNode==NULL)
                    {
                        prevNode->next=NULL;
                        cout<<"Node Deleted at the end"<<endl;
                    }
                    else
                    {
                        nextNode->previous=prevNode;
                        prevNode->next=nextNode;
                        cout<<"Node unlinked with the key value "<<endl;
                    }

                }
            }
        }

     }
     void updateNodeBYKey(int k,int d)
     {
         Node* ptr=nodeExists(k);
         if(ptr!=NULL)
         {
             ptr->data=d;
             cout<<"node data pdated successfully"<<endl;

         }
         else{
             cout<<"Node doesnt exist with the key"<<k<<endl;
         }

     }
     void printList()
     {
         if(head==NULL)
         {
             cout<<"NO nodes in doubly linkedlist"<<endl;
         }
         else
         {
             cout<<endl<<"doubly Linked list value"<<endl;
             Node* temp=head;
             while(temp!=NULL)
             {
                 cout<<"("<<temp->key<<","<<temp->data<<")<-->";
                 temp=temp->next;
             }
         }
     }

};
int main() {

  doublyLinkedList obj;
  int option;
  int key1, k1, data1;
  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. prependNode()" << endl;
    cout << "3. insertNodeAfter()" << endl;
    cout << "4. deleteNodeByKey()" << endl;
    cout << "5. updateNodeByKey()" << endl;
    cout << "6. print()" << endl;
    cout << "7. Clear Screen" << endl << endl;

    cin >> option;
    Node * n1 = new Node();
    //Node n1;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      obj.appendNode(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      obj.prependNode(n1);
      break;

    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;

      obj.insertNode(k1, n1);
      break;

    case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      cin >> k1;
      obj.deleteNodeByKey(k1);

      break;
    case 5:
      cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
      cin >> key1;
      cin >> data1;
      obj.updateNodeBYKey(key1, data1);

      break;
    case 6:
      obj.printList();

      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}
