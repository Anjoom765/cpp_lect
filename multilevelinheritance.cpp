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
class B : public A{ 
   public:
    void Bfunc()
    {
        cout<<"funcB\n";
    }
};
class C : public B{


};
int main()
{
    C c;
    c.Afunc();
    c.Bfunc();
}