#include<bits/stdc++.h>
using namespace std;
#define ll long long
void sol()
{
  ll a,b;
  cin>>a>>b;
  if(b==a-1)
  {
      cout<<"-1"<<endl;
      return;
  }
  int ar[a+1];
  for(int i=1;i<=a;i++)
  {
      ar[i]=i;
  }
  int x=b+1;
  for(int i=a;i>=x+1;i--)
  {
      ar[i]=ar[i-1];
  }
  ar[b+1]=a;
  for(int i=1;i<=a;i++)
  {
      cout<<ar[i]<<" ";
  }
  cout<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}