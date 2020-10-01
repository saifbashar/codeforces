#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int c1=0,c2=0;
  string s;
  cin>>s;
  for(int i=0;i<n;i++)
  {
    if(s[i]=='A')
    {
      c1 += 1;
    }
    else
    {
      c2 += 1;
    }
  }
  if(c1==c2)
  {
    cout<<"Friendship"<<endl;

  }
  else if(c1>c2)
  {
    cout<<"Anton"<<endl;

  }
  else
  {
    cout<<"Danik"<<endl;
  }
  return 0;
 }
