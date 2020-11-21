#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define us unsigned short
#define ul unsigned long
#define ld long double
#define clear cin.clear()
#define ignore cin.ignore()
#define sp(a) setprecision(a)

#define size(a) sizeof(a)/sizeof(a[0])

#define ifore(a,n) for(ll i = a; i<=b ; i++)
#define zfore(n) for(ll i=0;i<=n;i++)
#define ifore1(n) for(ll i=1;i<=n;i++)
#define fori(a,n) for(ll i = a; i<n; i++)      //LOOP
#define for0(n) for(ll i =0; i<n ;i++)
#define MAX 100000000
#define clr fflush(stdin)

const long long mod = 1e9 + 7;
const double PI = acos(-1);
const double EPS = 1e-12;




 void solve(void)
{
 	ll n,count=0;
 	cin>>n;
 	while(n>2)
 	{
 		if(n%2 == 0) 
 		{
 			n /= (n/2);
			count++;	
		}
		else {
			n--;
			count++;
		}
	}
	if(n==2)
	{
		count++;
	}
	cout<<count<<endl;
 	
 	
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
