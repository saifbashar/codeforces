//Practice vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
  //   freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  // freopen("error.txt", "w", stderr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0;
        cin>>n;
        string k;
        cin>>k;
        int i;
        i = k.length();
       while(k[i-1] == ')')
       {
        a++;
        i--;
       }

       if(a>(k.length() - a)) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }
    return 0;

}