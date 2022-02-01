#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
class A{
    public:
     int a;
     void funcA(){
         cout<<"func \n";
     }
    private :
     int b;
     void funcB(){
         cout<<"func \n";
     }
    protected:
     int c;
     void funcC(){
     cout<<"func \n";
     }

};
int main()
{
    A obj;
    obj.funcA();
   
}