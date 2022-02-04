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
         next=NULL;
     }
   
};
class circularLinkedList{
    public:
      Node* head;
      circularLinkedList()
      {
          head=NULL;
      }
      circularLinkedList(Node *n)
      {
          head=n;
      }
      Node* nodeExists(int k)//linear search
      {
        
        Node*  temp=NULL;

        Node* ptr =head;   
        if(ptr==NULL)
        {
            return temp;
        } 
        else{
        do
        {
            if(ptr->key==k)
            {
                temp=ptr;
                
            }
            ptr=ptr->next;
            
        } while(ptr!=head);
        return temp;
      }
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
                n->next=head;
                cout<<"Node Appended"<<endl;
            }
            else
            {
                Node *ptr =head;
                while(ptr->next!=head)
                {
                    ptr=ptr->next;
                }
                ptr->next=n;
                n->next=head;
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
            if(head==NULL)
            {
                n->next=head;
                head=n;
                cout<<"node prepended"<<endl;
        }
        else{
            Node *ptr=head;
            while (ptr->next!=head){
                ptr=ptr->next;
            }
            ptr->next=n;
            n->next=head;
            head=n;
            cout<<"Node prepended"<<endl;
        }
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
                if(ptr->next==head)
                {
                  n->next=head;
                  ptr->next=n;
                  cout<<"new node appended"<<endl;
                } 
                else{
                 n->next=ptr->next;
                 ptr->next=n;
                cout<<"node inserted"<<endl;
                }
             }
         }
      }
      //delete a node with a unique key
      void deleteNodeByKey(int k)
      {    
          Node* ptr=nodeExists(k);
          if(ptr==NULL)
          {
              cout<<"No node with the key value"<<endl;
          }
          else if(ptr!=NULL)
          { 


             if(ptr==head)
             {

                if(head->next==NULL)
                { 
                head=NULL;

                 cout<<"Node unlinked by making list empty"<<endl;
                 }
            else{
                 Node* ptr1=head;
                 while(ptr1->next!=head)
                 {
                     ptr1=ptr1->next;
                  }
                 ptr1->next=head->next;
                 head=head->next;
                 cout<<"Node unlinked with keys"<<endl;
              }

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
               
                     prevptr->next=temp->next;
                     cout<<"node unlinked with keys value"<<endl;
                 
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
            cout<<endl<<"CircularLinkedList values"<<endl;
            Node*temp =head;
            while(temp!=NULL)
            {
                cout<<"("<<temp->key<<","<<temp->data<<"," << temp -> next << ")-->";
                temp=temp->next;
            }
        }
    }

      

};




int main() {

  circularLinkedList obj;
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
      obj.updateNodeNykey(key1, data1);

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