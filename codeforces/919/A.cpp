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
void solve(void)
{
  	ll n,m;
  	cin>>n>>m;
  	long double a=1000.0,temp =0.0;
	ll b,c;
  	for(ll i=0;i<n;i++)
  	{
  		cin>>b>>c;
  		temp = (b/(c*1.0))*1.0 <= a? (b/(c*1.0))*1.0 : a;
  		a = temp;
	}
	cout<<fixed<<setprecision(8)<<a*m*1.0<<endl;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   ll t;
   //cin>>t;
   //while(t--) solve();
   solve();
  
    return 0;
}