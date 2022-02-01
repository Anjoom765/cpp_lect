#include<iostream>
#include<string>
using namespace std;
class Mybase{
    public:
      void show()
      {
          cout<<"base class show"<<endl;

      }
     virtual void print()
      {
          cout<<"base class print"<<endl;

      }
};
class Myderived : public Mybase{
  void show()
  {
      cout<<"derived class show"<<endl;

  }  
void print()
  {
      cout<<"derived class print"<<endl;
  }
  
};
int main()
{
    Mybase *baseptr;
    Myderived derivedobj;
    baseptr=&derivedobj;
    //run time polymorphism
    baseptr->show();
    baseptr->print();
}