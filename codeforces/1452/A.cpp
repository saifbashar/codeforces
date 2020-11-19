#include<bits/stdc++.h>
using namespace std;

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




 void solve(void)
{
    ll a,b;
    cin>>a>>b;
    if(a==b) cout<<2*a<<endl;
    else if(a==b-1)
    {
        cout<<a+b<<endl;
    }
    else if(b==a-1)
    {

        cout<<a+b<<endl;
    }
    else
    {
        if(a>b)
        {
            cout<< a+b+(a-b-1)<<endl;
        }
        else
        {
            cout<< a+b+(b-a-1)<<endl;
        }
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
