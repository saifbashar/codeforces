#include<bits/stdc++.h>
using namespace std;
int main()
{
	// freopen("input.txt", "r", stdin);
 //  freopen("output.txt", "w", stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,k;
		cin>>a>>b>>c>>d>>k;
		 a = ceil(a*1.0/c);
		 b = ceil(b*1.0/d);
		 if(a+b <= k) cout<<a<<" "<<b<<endl;
		 else cout<<"-1"<<endl;
	}

	return 0;
}