#include<iostream>
using namespace std;
struct person{
    char name[50];
    int age;
    double salary;
};
int main()
{  
  person p1;
  cout<<"enter person details"<<endl<<"enter person name:"<<endl;
  cin.getline(p1.name,100);
  cout<<"enter age"<<endl;

  cin>>p1.age;
  cout<<endl<<"enter salary"<<endl;
  cin>>p1.salary;
  cout<<endl<<"person details are as follows"<<endl;
  cout<<"person name:"<<p1.name<<endl;
  cout<<"person age:"<<p1.age<<endl;
  cout<<"person salary"<<p1.salary<<endl;
  
}