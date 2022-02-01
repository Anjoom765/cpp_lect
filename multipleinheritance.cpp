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
    void Bfunc()
    {
        cout<<"funcB\n";
    }
};
class C : public A,public B{


};
int main()
{
    C c;
    c.Afunc();
    c.Bfunc();
}