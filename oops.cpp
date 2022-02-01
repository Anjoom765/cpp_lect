#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;

class student {
    string name;
    public:

    int age;
    bool gender;
    //defualt cunstructor
    student ()
    {
        cout<<"defualt"<<endl;
    }
    //cunstructur
    student(string s,int a,int g){  
        cout<<"paramaterised cunstructur"<<endl;
        name=s;
        age=a;
        gender=g;
    }
    //copy cunstructur
    student(student &a)
    {  
        cout<<"copy cunstructur"<<endl;
        name =a.name;
        age= a.age;
        gender= a.gender;
    }
    void setName(string s)
    {
        name =s;
    }
    void getName()
    {
        cout<<name<<endl;
    }
    void printInfo()
    {
       cout<<"name =";
       cout<<name<<endl;
       cout<<"age =";
       cout<<age<<endl;
       cout<<"gender=";
       cout<<gender<<endl;
    }
    
    bool operator == (student &a){
        if(name == a.name && age==a.age && gender==a.gender)
        {
            return true;
        }
return false;    }

};
int main()
{
 

   /* student arr[3];
    for (int i = 0; i < 3; i++)
    {  
      string s;
      cout<<"name=";  
      cin>>s;
      arr[i].setName(s);
      cout<<"age=";
      cin>>arr[i].age;
      cout<<"gender=";
      cin>>arr[i].gender;
    }
       for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }
*/

    student a("Urvi",20,1);
    //a.printInfo();
    student b;
    student c=a;
    if(c==a)    
    {
        cout<<"SAME";

    }  
    else
    {
        cout<<"not same";
    }

}