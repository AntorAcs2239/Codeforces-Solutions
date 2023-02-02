#include<bits/stdc++.h>
using namespace std;
#define ll long long
void sol()
{
  ll si;
  cin>>si;
  ll tem[si+1];
  for(int i=1;i<=si;i++)
  {
      cin>>tem[i];
  }
  deque<ll>d;
  d.push_front(tem[1]);
  for(int i=2;i<=si;i++)
  {
      ll x=d.front();
      if(tem[i]<x)d.push_front(tem[i]);
      else d.push_back(tem[i]);
  }
  while(!d.empty())
  {
      cout<<d.front()<<" ";
      d.pop_front();
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