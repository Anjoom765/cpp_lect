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
  person p[2];//array of structures
  cout<<"enter details"<<endl;
  for (int i = 0; i < 2; i++)
  {
      cin>>p[i].name;
      cin>>p[i].age;
      cin>>p[i].salary;
  }
  cout<<"deatils are"<<endl;
  for (int i = 0; i < 2; i++)
  {
      cout<<"person"<<(i+1)<<endl;
      cout<<p[i].name<<endl;
      cout<<p[i].age<<endl;
      cout<<p[i].salary<<endl;
  }
  
  

}