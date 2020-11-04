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
   
   ll a,b,c,d;
   cin>>a>>b>>c>>d;
   ll max1, max2, min1,min2;
   max1 = max(a,b);
   max2 = max(c,d);
   min1 = min(a,b);
   min2 = min(c,d);
   float k;
   ll j;
   j = (a*b) + (b*c);
   k = sqrt(j);
   if(j = k*k  && (max1== max2) && min1+min2==max1)
   {
   	cout<<"YES"<<endl;
   }
   else 
   {
   	cout<<"NO"<<endl;
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
