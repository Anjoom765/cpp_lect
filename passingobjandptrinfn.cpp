#include<iostream>
#include<string>
using namespace std;
class complexNumber
{
  private:
    int real;
    float imaginary;
 public:
    complexNumber()
    {

    }
    complexNumber(int r, int i)
    {
        real=r;
        imaginary=i;
    }
    void displayData()
    {
        cout<<"complex number is:"<<real<<"+"<<imaginary<<"i"<<endl<<endl;    
        
    }
    int getRealpart()
    {
        return real;
    }
    float getImgpart()
    {
        return imaginary;
    }
     

};
complexNumber add2number(complexNumber n1, complexNumber n2)
{
  int r;
  float i;
  r=n1.getRealpart()+ n2.getRealpart();
  i=n1.getImgpart()+ n2.getImgpart();
  complexNumber temp(r,i);
  return temp;
}

int main()
{
  complexNumber comp1(5,4),comp2(5,4),comp3;
  
  comp1.displayData();
  comp2.displayData();
  cout<<"result"<<endl<<endl;
  comp3=add2number(comp1,comp2);
  comp3.displayData();
  cout<<"pointer to object"<<endl;
  complexNumber *ptr1;
  ptr1= &comp3;
  ptr1->displayData();

  cout<<ptr1;
}