#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
//fun overloading
class ApnaCollage
{
    public:
    void fun()
    {
        cout<<"no arg"<<endl;

    }
    void fun(int x)
    {
        cout<<"int arg"<<endl;
    }
    void fun(double x)
    {
        cout<<"double arg"<<endl;

    }
};
int main()
{
    ApnaCollage a;
    a.fun();
    a.fun(1);
    a.fun(4.6634);
}