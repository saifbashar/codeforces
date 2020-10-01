#include<iostream>
using namespace std;
int main()
{
  int a,b,c,r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,result1,result2,result3;
  cin>>a>>b>>c;
  r1 = (a+b+c);
  r2 = ((a*b)*c);
  result1= (r1>=r2)?r1:r2;
  r3= a*(b*c);
  r4 = a*b*c;
  result2=(r3>=r4)?r3:r4;
  r5 =(a+b)*c;
  r6 = a*(b+c);
  result3= (r5>=r6)?r5:r6;
  if(result1>=result2 && result1>=result3)
  {
    cout<<result1<<endl;
  }
  else if(result2>=result3 && result2>=result1)
  {
    cout<<result2<<endl;
  }
  else
  {
    cout<<result3<<endl;
  }
  return 0;
}
