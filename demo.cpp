#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    char op;
    cout<<"input operator"<<endl;
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        default:
        cout<<"enter another op"<<endl ;    
        break;
        }

}