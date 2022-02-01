#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    /*string str="kdjfnggn";
    cout<<'a'+'A'<<endl;;
    //convert to upper case
    for (int i=0;i<str.size();i++)
    if(str[i]>='a'&&str[i<='z'])
    {
        str[i]-=32;
    }
    cout<<str<<endl;
    //lower case
    for (int i=0;i<str.size();i++)
    if(str[i]>='A'&&str[i<='Z'])
    {
        str[i]+=32;
    }
    cout<<str<<endl;
*/
string s="dfghsehg";
transform(s.begin(),s.end(),s.begin(),::toupper);
cout<<s<<endl;
transform(s.begin(),s.end(),s.begin(),::tolower);
cout<<s<<endl;
}