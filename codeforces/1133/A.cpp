#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    scanf("%d:%d",&a,&b);
    scanf("%d:%d",&c,&d);
    int sum = a*60+b+c*60+d;
    printf("%02d:%02d\n",sum/120,(sum/2)%60);
    return 0;
}