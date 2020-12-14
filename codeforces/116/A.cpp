#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,temp{0},high{0};
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        temp -= a;
        temp += b;
        if(temp>high)
        {
            high = temp;
        }
    }
    cout<<high<<endl;
}