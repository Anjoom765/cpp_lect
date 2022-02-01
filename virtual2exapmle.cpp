#include<iostream>
#include<string>
using namespace std;
class Mybase{
    public:
       virtual void show()
      {
          cout<<"base class show"<<endl;

      }
    
};
class Myderived : public Mybase{
public:
  void show()
  {
      cout<<"derived class show"<<endl;
  }

};
int main()
{
    Mybase *baseptr;
    Myderived derivedobj;
    baseptr=&derivedobj;
    //run time polymorphism
    baseptr->show();

}
    