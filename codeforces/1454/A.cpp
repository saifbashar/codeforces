#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned short us;
typedef unsigned long ul;
typedef long double ld;




#define clear cin.clear()
#define ignore cin.ignore(32767, '\n')
#define sp(a) setprecision(a)
#define clr fflush(stdin)

#define ifore(a,n) for(ll i = a; i<=b ; i++)
#define zfore(n) for(ll i=0;i<=n;i++)
#define ifore1(n) for(ll i=1;i<=n;i++)
#define fori(a,n) for(ll i = a; i<n; i++)      //LOOP
#define for0(n) for(ll i =0; i<n ;i++)


#define MAX 100000000
const long long mod = 1e9 + 7;
const double PI = acos(-1);
const double EPS = 1e-12;

ll temp=0;


 void solve(void)
{
 	ll n,i;
 	cin>>n;
 	ll a[n],j=0;
 	for(i=n;i>0;i--)
 	{
 		a[j] = i;
 		j++;
	 }
	 j=1;
	 for(i=0;i<n;i++)
	 {
	 	if(a[i] == j)
	 	{
	 	   swap(a[i],a[i+1]);	
	 	   
		}
		j++;
	 }
	 for(j=0;j<n;j++)
	 {
	 	cout<<a[j]<<" ";
	 }
	 cout<<"\n";
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
