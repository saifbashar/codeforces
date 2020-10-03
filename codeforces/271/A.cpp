#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int n,a,b,c,k,i;
 cin>>n;
 for(i=n+1;i>n;i++)
 {
   k=i;
   a = k%10;
   k /= 10;
   b = k%10;
   k /= 10;
   c = k%10;
   k /= 10;
  if(a != b && a != c && a != k && b != c && b !=k && c != k)
  {
    break;
  }
 }
 cout<<i<<endl;
  return 0;
}
