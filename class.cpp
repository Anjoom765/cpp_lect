#include<iostream>
#include<string>
using namespace std;
class cars{
private:
  //memeber variable or data member    
  string company_name;
  string model_name;
  string fuel_tye;
  float mileage;
  double price;
public:
// memeber functions
  void setData(string cname,string mname,string ftype,float m,double p)
  {
     company_name=cname;
     model_name=mname;
     fuel_tye=ftype;
     mileage=m;
     price= p;
  }
  void displayData()
  {
      cout<<"car prop"<<endl<<endl;
      cout<<"name"<<company_name<<endl;
      cout<<"model"<<model_name<<endl;
      cout<<"fuel type"<<fuel_tye<<endl;
      cout<<"mileage"<<mileage<<endl;
      cout<<"price"<<price<<endl;

  }


};
int main()
{
    cars car1;//objects are variables of type class
    car1.setData("toyota","altis","petrol",15.5,150000);
    car1.displayData();


}