#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    int x;
    cin>>x;
    int mod;
    mod =x%5;
    if(x<=5)
    {
        cout<<"1"<<endl;
    }
    else if(mod==0)
    {
        cout<<x/5<<endl;
    }
    else
    {
        cout<<x/5 + 1<<endl;
    }
    return 0;
}
