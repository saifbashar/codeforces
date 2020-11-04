#include<bits/stdc++.h>


#define clear cin.clear()
#define ignore cin.ignore()
#define sp(a) setprecision(a)
#define ll long long
#define us unsigned short
#define ul unsigned long
#define ld long double

#define ifore(a,n) for(ll i = a; i<=b ; i++)
#define zfore(n) for(ll i=0;i<=n;i++)
#define ifore1(n) for(ll i=1;i<=n;i++)
#define fori(a,n) for(ll i = a; i<n; i++)      //LOOP
#define for0(n) for(ll i =0; i<n ;i++)


using namespace std;
int divisor(ll n)
{
	ll i;
	for(i=2;i<=n;i++)
	{
		if(n%i == 0)
		{
			break;
		}
	}
	return i;
}
void solve(void)
{
   
   ll n,k,div;
   cin>>n>>k;
   if(n%2==0) cout<< n+ k*2<<endl;
   else cout<<n+ divisor(n) + 2*(k-1) <<endl;
   
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   ll t;
   cin>>t;
   while(t--) solve();
  
    return 0;
}
