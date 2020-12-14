#include<bits/stdc++.h>
using namespace std;
int main()
{
   int l,k,temp = 0,sum = 0;
   cin>>l;
   while(l--)
   {
    cin>>k;
    if(k>0) sum += k;
    else temp += k;
   }
   cout<<sum - temp<<endl;
    return 0;
}