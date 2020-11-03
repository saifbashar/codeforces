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
   int n;
   cin>>n;
   ll p=0,c=0,k = 0 ;
   ll x,y;
   for(ll i =0; i<n;i++)
   {
       cin>>x>>y;
       if(x<p || y<c || y-c > x-p)
       {
           k = 1;
       }
       p = x;
       c = y;
   }
   if(k==1) cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
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
