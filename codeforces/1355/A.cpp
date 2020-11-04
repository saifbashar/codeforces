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
int add(ll n) 
{ 
    int largest = 0; 
    int smallest = 9; 
  
    while (n) { 
        int r = n % 10; 
  
        // Find the largest digit 
        largest = max(r, largest); 
  
        // Find the smallest digit 
        smallest = min(r, smallest); 
  
        n = n / 10; 
    } 
    return largest * smallest;
} 
  
 void solve(void)
{
  ll a,b,i=1;
  cin>>a>>b;
  b--;
  while(b--)
  {
  	ll y = add(a); 
  	if (y == 0) break;
	a += y;
  }
  cout<<a<<"\n";
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
