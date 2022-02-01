#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
class A{
    public:
     void Afunc(){
         cout<<"funcA\n";
     }
};
class B: public A { 
   public:
    void Bfunc()
    {
        cout<<"funcB\n";
    }
};
class C {
public:
  void Cfunc()
  {
      cout<<"funcC\n";
  }

};
class D:public C,public B{

};
int main()
{
    D d;
    d.Afunc();
    d.Bfunc();
    d.Cfunc();
}