#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
string bin(int n,int l)
{
    string tem;
    int k,c;
     for (c = l; c >= 0; c--)
    {
    k = n >> c;

    if (k & 1)
      tem+='1';
    else
      tem+='0';
   }
   return tem;
}
void solve()
{
  string a;
  cin>>a;
  map<char,int>mp;
  for(int i=0;i<a.size();i++)
  {
      mp[a[i]]++;
  }
  for(int i=1;;i++)
  {
      int odd=0;
      for(auto x:mp)
      {
          if(x.second%2==1)odd++;
      }
      if(odd<=1)
      {
          if(i%2==1)
          {
              cout<<"First"<<endl;
          }
          else cout<<"Second"<<endl;
          return;
      }
      bool flag=false;
      for(auto x:mp)
      {
          if(x.second%2==0)
          {
              flag=true;
              mp[x.first]--;
              if(mp[x.first]==0)
              {
                  mp.erase(x.first);
              }
              break;
          }
      }
      if(!flag)
      {
          for(auto x:mp)
          {
              mp[x.first]--;
              if(mp[x.first]==0)
              {
                  mp.erase(x.first);
              }
              break;
          }
      }
  }
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int tc;
    // cin>>tc;
    // while(tc--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}