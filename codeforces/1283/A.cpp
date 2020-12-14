#include<iostream>
using namespace std;
int main()
{
    int t,h,m;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        cout<<(24*60)-((60*h)+m)<<endl;
    }
    return 0;
}