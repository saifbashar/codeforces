#include <iostream>
#include<iomanip>
#include<string>
#include<cstdint>
#define sp(a) setprecision(a)
#define ll long long
#define us unsigned short
#define ul unsigned long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
#include <iostream>

int main()
{
   ll n,a,b,i;
    cin>>n;
   ll sum =0;
   while(n--)
   {
       cin>>a>>b;
       int ar[a];
       for(i=0;i<a;i++)
       {
           cin>>ar[i];
       }
       for(i=0;i<a;i++)
       {
           sum += ar[i];
       }
       if(sum == b)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }

       sum =0;

   }
    return 0;

}
