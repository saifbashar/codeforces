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
  ll n;
		cin>>n;
		ll a[n],ev = 2,od = 1 ,i,sumE =0, sumO = 0;
		for(i=0;i<n/2;i++)
		{
		   a[i] = ev;
		   sumE += a[i];
		   ev += 2;
		}
		for(;i<n-1;i++)
		{
			a[i] = od;
			sumO += a[i];
			od += 2;
		}
		ll dif = sumE - sumO;
		a[i] = dif;
		if(a[i] %2 == 0) {
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
			for(i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<"\n";
		}
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
