#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,count=0;
    cin>>n;
    long long mod;
    while(n>=4)
    {
        mod = n%10;
        n = ceil(n/10);
        if(mod == 7 || mod ==4)
        {
            count++;
        }
    }
    if(count==4 || count ==7)
    {

        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
