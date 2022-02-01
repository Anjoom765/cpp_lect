#include<iostream>
#include<string>
using namespace std;
struct person{
     string name;
     int age;
     double salary;
};
int main()
{
  person p1;//array of structures

  cout<<"enter details"<<endl;

      cin>>p1.name;
      cin>>p1.age;
      cin>>p1.salary;
  
  cout<<"deatils are"<<endl;

   
      cout<<p1.name<<endl;
      cout<<p1.age<<endl;
      cout<<p1.salary<<endl;
  
  person *ptr=&p1;
  
  cout<<"enter details"<<endl;

      cin>>ptr->name;
      cin>>ptr->age;
      cin>>ptr->salary;
  cout<<"deatils are"<<endl;
      cout<<ptr->name<<endl;
      cout<<ptr->age<<endl;
      cout<<ptr->salary<<endl;
      
  

}