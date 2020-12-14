#include<bits/stdc++.h>
using namespace std;
int main()
{
    int days,c=0,b=0,i;
    string a;
    cin>>days>>a;
    for(i=0;i<days-1;i++)
    {
        if(a[i] == 'S' && a[i+1] =='F') c++;
        if(a[i] == 'F' && a[i+1] =='S') b++;
    }

    if(c>b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}