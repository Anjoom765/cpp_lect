#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
class complex
{
    private:
       int real,imag;
      public:
         complex (int r=0,int i=0)
        {
          real=r;
          imag=i;
        }
         complex operator + (complex c)
           {
               complex res;
               res.imag= imag + c.imag;
               res.real= real + c.real;
               return res;
            }  
        void display()
        {
            cout<<real <<" +i"<<imag;
        } 
}; 
int main()
{
 complex c1(12,7),c2(5,7),c3(1,2);
 complex c4= c1+c2+c3;
 c4.display();

}