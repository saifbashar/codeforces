    #include<bits/stdc++.h>
    using namespace std;
    const int N = 2e5 + 10;
    int a[N],b[N];
    int main()
    {
        int T;
        cin>>T;
        while(T--){
        	int a, b, c, d, k;
        	cin>>a>>b>>c>>d>>k;
        	int t = a / c + (a % c != 0) + b / d + (b % d != 0);
        	if(t > k) puts("-1");
        	else printf("%d %d\n", a / c + (a % c != 0), b / d + (b % d != 0));
    	} 
    }