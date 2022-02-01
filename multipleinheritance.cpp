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
class B { 
   public:
    void Afunc(){
         cout<<"funcB\n";
     }
    void Bfunc()
    {
        cout<<"funcB\n";
    }
};
class C : public A,public B{
  public:
   void Afunc(){
         A::Afunc();
         B::Afunc();
     }

};
int main()
{
    C c;
    c.Afunc();
    c.Bfunc();
}