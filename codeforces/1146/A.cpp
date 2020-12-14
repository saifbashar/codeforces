#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
   int a=0;
    for(auto i:s)
    {
        if(i=='a')
            ++a;
    }
    cout << min(2 * a - 1, (int)s.length()) << endl;

}