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
    while (1)
    {
         int n;
     cin>>n;
     if(n==0)break;
     ll tem=1;
  for(ll i=1;i<=n;i++)
  {
      tem=(((tem%mod)*(i%mod))%mod)/gcd(tem,i);
      //cout<<i<<" "<<tem<<endl;
  }
  string t=to_string(tem);
  for(int i=t.size()-1;i>=0;i--)
  {
      if((t[i]-'0')>0)
      {
          cout<<t[i]<<endl;
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