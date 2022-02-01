#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
     void makeSound()
     {
         cout<<"animal sound"<<endl;
     }
};
class Dog: public Animal{
    public:
   void makeSound()
    {
        cout<<"dogs barks"<<endl;
    }
};
/*class Cat: public Animal{
    public:
    void makeSound()
    {
        cout<<"cast meow";
    }
};*/
int main()
{
    Animal a1;
    a1.makeSound();
    cout<<endl;
    Dog d1;
    d1.makeSound();
    cout<<endl;
    /*Cat  c1;
    c1.makeSound();*/
}