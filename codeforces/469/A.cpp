#include<iostream>
using namespace std;
int main()
{
  int n,p,q,i,j,count=0;
  cin>>n;
  int ar[2*n];
  cin>>p;
  for( i=0;i<p;i++)
  {
    cin>>ar[i];
  }
  cin>>q;
  for( ;i<p+q;i++ )
  {
    cin>>ar[i];
  }
  for(j=1;j<=n;j++)
  {
    for(i=0;i<p+q;i++)
    {
      if(ar[i] == j)
      {
        count++;
        break;
      }
    }
  }
  if(count == n) cout<<"I become the guy."<<endl;
  else cout<<"Oh, my keyboard!"<<endl;
  return 0;


}
