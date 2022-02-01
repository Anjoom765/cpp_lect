#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
class A{
    protected:
     int val;
    
     
};
class derived1: public A { 
   public:
     derived1()
    {
        val=1;
    }
    void getvalue()
    {
        cout<<"derived 2 is "<<val;
    }
};
class derived2:public A{
public:
  derived2()
  {
      val=2;
  }
   void getvalue()
  {
        cout<<"derived 2 is "<<val;
  }

};
class derived3:public derived2,public derived1{
 public:
   void getvalue()
   {
       cout<<"value is ";
       derived1::getvalue();
   }
};
int main()
{
    derived3 d3;
    d3.getvalue();

}