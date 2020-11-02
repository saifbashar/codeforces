#include<bits/stdc++.h>


#define clear cin.clear()
#define ignore cin.ignore()
#define sp(a) setprecision(a)
#define ll long long
#define us unsigned short
#define ul unsigned long

#define ifore(a,n) for(ll i = a; i<=b ; i++)
//#define 0fore(n) for(ll i=0;i<=n;i++)
#define ifore1(n) for(ll i=1;i<=n;i++)
//#define 0for(a,n) for(ll i = a; i<n; i++)      //LOOP
//#define 0for(n) for(ll i =0; i<n ;i++)


using namespace std;
void solve(void)
{
	string x;
	ll sum = 0;
	cin>>x;
	int a = x[0] - '0' - 1;
	ifore1(x.size())
	{
		sum += i;
	}
	 
	cout<< a*10 + sum <<endl;
	
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   ll t;
   cin>>t;
   while(t--)
   {
	 solve();
   }
    return 0;
}
