#include<bits/stdc++.h>
using namespace std;
long fact(int n)
{
    if(n==1) return 1; 
    return n*fact(n-1);
}
int main()
{
   int a,b;
    cin>>a>>b;
    cout<<fact(min(a,b))<<endl;
    return 0;
}