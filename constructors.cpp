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
  //defualt cnstructor
  cars(){
    cout<<"defualt constructor"<<endl;
     
  }
  //parametrized cunstructor
  cars(string cname,string mname, string ftype,float m,double p)
  {
    cout<<"parametrized constructor"<<endl;
     company_name=cname;
     model_name=mname;
     fuel_tye=ftype;
     mileage=m;
     price= p;
  }
//copycunstructor
  cars(cars &obj)
  {
     cout<<"copy constructor"<<endl;
     company_name=obj.company_name;
     model_name=obj.model_name;
     fuel_tye=obj.fuel_tye;
     mileage=obj.mileage;
     price= obj.price;
  }

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
 //destructor
 ~cars()
 {
     cout<<"destructor called"<<endl;
 }

};
int main()
{
    cars car1,car2("toyota","fortuner","diesel",10,350000);//objects are variables of type class

    car1.setData("toyota","altis","petrol",15.5,150000);
    //car1.displayData();
   
    car1.displayData();
    car2.displayData();
    cars car3=car1;
    car3.displayData();
}