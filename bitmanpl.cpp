#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
bool getBit(int n,int pos)
{
    return(n&(1<<pos))!=0;
}
int setBit(int n, int pos)
{
    return (n|(1<<pos));
}
int clearBit(int n,int pos)
{    
    int mask=~(1<<pos);
    return (n&mask);
}
int updateBit(int n, int pos,int value)

{
  int mask=~(1<<pos);
  n=n&mask;
  return n|(value<<pos); 

}

int main()
{
   cout<<getBit(5,2)<<endl;
   cout<<setBit(5,2)<<endl;
   cout<<clearBit(5,0)<<endl;
   cout<<updateBit(5,0,0);
}