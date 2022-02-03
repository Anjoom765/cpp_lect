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

                 cout<<"Node unlinked with key vlue"<<endl;
             }
             else
             {
                 Node* temp=NULL;
                 Node* prevptr=head;
                 Node* currentptr=head->next;
                 while(currentptr!=NULL)
                 {
                     if(currentptr->key==k)
                     {
                        temp=currentptr;
                        currentptr=NULL;
                     }
                     else
                     {
                        prevptr=prevptr->next;
                        currentptr=currentptr->next;
                     }
                 }
                 if(temp!=NULL)
                 {
                     prevptr->next=temp->next;
                     cout<<"node unlinked with keys value"<<endl;
                 }
                 else{
                     cout<<"Node doesnt exist with key value"<<endl;
                 }
             }
          }

      }
    void updateNodeNykey(int k,int d)
    {
        Node*ptr=nodeExists(k);
        if(ptr!=NULL)
        {
            ptr->data=d;
            cout<<"Node Data Updated Successfully"<<endl;
        }
        else
        {
            cout<<"Node doesnt exist with key value"<<endl;
        }
    }
    void printList()
    {
        if(head==NULL)
        {
            cout<<"no Nodes in LL";
        }
        else{
            cout<<endl<<"singlyLinkedList values"<<endl;
            Node*temp =head;
            while(temp!=NULL)
            {
                cout<<"("<<temp->key<<","<<temp->data<<")-->";
                temp=temp->next;
            }
        }
    }

      

};




int main()
{
  singlyLinkedList s;
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
    cin>>option;
    Node* n1=new Node();
    switch(option)
    {   case 0:
         break;
        case 1:
          cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
          cin>>key1;
          cin>>data1;
          n1->key=key1;
          n1->data=data1;
          s.appendNode(n1);//n1 already a pointer by heap
          break;
        case 2:
         cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
         cin >> key1;
         cin >> data1;
         n1->key=key1;
         n1->data=data1;
         s.prependNode(n1);
         break;
        case 3:
         cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
         cin >> k1;
         cout << "Enter key & data of the New Node first: " << endl;
         cin >> key1;
         cin >> data1;
         n1 -> key = key1;
         n1 -> data = data1;
    
        s.insertNode(k1, n1);
        break;
       case 4:
         cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
         cin >> k1;
         s.deleteNodeByKey(k1);
 
          break;
       case 5:
         cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
         cin >> key1;
         cin >> data1;
         s.updateNodeNykey(key1, data1);

         break;
       case 6:
         s.printList();
         break;
       case 7:
         system("cls");
         break;
       default:
         cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);
    
    
}



