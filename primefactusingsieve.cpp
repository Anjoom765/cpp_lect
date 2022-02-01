#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
void primefactor(int n)
{
    int spf[100]={0};
    for (int i =2; i <=n; i++)
    {
    spf[i]=i;
    }
    
    for (int i = 2; i <=n; i++)
    {
        if (spf[i]==i)
        {
            for (int j = i*i;j <=n; j+=i)
            {
              
            }
            
        }
        
    }
    

}
