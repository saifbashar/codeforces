#include<bits/stdc++.h>
#define clear cin.clear()
#define ignore cin.ignore()
#define sp(a) setprecision(a)
#define ll long long
//typedef unsigned short us
//typedef unsigned long ul
//typedef unsigned long long ull
//define unsigned int ui

using namespace std;
double Area(ll dX0, ll dY0, ll dX1, ll dY1, ll dX2, ll dY2)
{
    double dArea = ((dX1 - dX0)*(dY2 - dY0) - (dX2 - dX0)*(dY1 - dY0))/2.0;
    return (dArea > 0.0) ? dArea : -dArea;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   ll n, m, d, xAxis, yAxis, zero=0;
   double area1, area2, area3, area4, area5;
   cin>>n>>d;
   xAxis = n-d;
   yAxis = n-d;
   area5 = Area(0,d,d,0,n,xAxis) * 2.0;
   cin>>m;
   while(m--)
   {
   	ll x1, y1;
   	cin>>x1>>y1;
   	area1 = Area(0,d,x1,y1,xAxis,n);
   	area2 = Area(xAxis,n,x1,y1,n,yAxis);
   	area3 = Area(n,yAxis,x1,y1,d,0);
   	area4 = Area(x1,y1,d,0,0,d);
   	double total = 0.0;
   	total = area1 + area2 + area3 + area4;
   	if(total> area5) cout<<"NO"<<endl;
   	else cout<<"YES"<<endl;
   }
   
   
    return 0;

}
