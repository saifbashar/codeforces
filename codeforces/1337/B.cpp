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
  ll n,x,y;
  cin>>n>>x>>y;
  while(n>0 && x && (n/2 + 10) < n)
  {
  	n = n/2 + 10;
  	x--;
  }
  if(n <= y*10) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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
