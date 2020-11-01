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
   ll a,sum = 0;
   cin>>a;
   while(a--)
   {
   	ll b;
   	cin>>b;
   	if(b==1)
   	{
   		sum = 1;
	}
   }
   if(sum == 1) cout<<"HARD"<<endl;
   else cout<<"EASY"<<endl;
    return 0;

}
