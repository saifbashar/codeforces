#include<bits/stdc++.h>
#define clear cin.clear()
#define ignore cin.ignore()
#define sp(a) setprecision(a)
#define ll long long
//typedef unsigned short us
//typedef unsigned long ul
//typedef unsigned long long ull
//define unsigned int ui

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   ll n,a;
   cin>>n;
   while(n--)
   {
   	cin>>a;
    if(a%4 == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   	
   }
   
   
    return 0;

}
