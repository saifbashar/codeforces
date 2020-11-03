#include<bits/stdc++.h>


#define clear cin.clear()
#define ignore cin.ignore()
#define sp(a) setprecision(a)
#define ll long long
#define us unsigned short
#define ul unsigned long

#define ifore(a,n) for(ll i = a; i<=b ; i++)
#define zfore(n) for(ll i=0;i<=n;i++)
#define ifore1(n) for(ll i=1;i<=n;i++)
#define fori(a,n) for(ll i = a; i<n; i++)      //LOOP
#define for0(n) for(ll i =0; i<n ;i++)


using namespace std;
void solve(void)
{
  		ll x,y,a,b,total=0;
  		cin>>x>>y>>a>>b;
  		ll max = (x>y)?x:y;
  		ll min = x<y?x:y;
  		ll dif1 = min;
  		ll dif2 = max-min;
  		if(2*a < b)
  		{
  			total += 2*a*dif1;
  			total += a*dif2;
		}
		else
		{
			total += b*dif1;
			total += a*dif2;
		}
		cout<<total<<endl;
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
