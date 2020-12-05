#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
const int maxn=(int)2e5+100;
const int mod=(int)1e9+7;
int n;
char s[1010];
void solve(){
	int i;
	scanf("%d%s",&n,s+1);
	int ans=0,num=0;
	for(i=1;i<=n;++i) if(s[i]=='1') ans=max(ans,i*2),num++;
	for(i=n;i>=1;--i) if(s[i]=='1') ans=max(ans,(n-i+1)*2);
	ans=max(ans,n+num);
	printf("%d\n",ans);
}
int main(){
	int T;cin>>T;
	while(T--) solve();
}