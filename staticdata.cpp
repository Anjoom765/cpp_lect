#include<iostream>
#include<string>
using namespace std;
class Myclass{
    private:
      int x;
      static int count;
    public:
     
      Myclass()
      {
          count++;
      }
      static int getCount()
      {
          return count;
      }   
};
int Myclass::count=0;
int main()
{
    cout<<"initial"<<Myclass::getCount()<<endl;
    Myclass obj1,obj2,obj3;
    cout<<"count after 3"<<Myclass::getCount()<<endl;
    return  0;
}