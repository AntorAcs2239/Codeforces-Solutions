#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
void solve()
{
  string s;
  cin>>s;
  int zero=0;
  for(int i=0;i<s.size();i++)if(s[i]=='0')zero++;
  if(zero==0)
  {
      cout<<"0"<<endl;
      return;
  }
  bool flag=false;
  bool flag1=false;
  int t=0;
  for(int i=0;i<s.size()-1;i++)
  {
      if(s[i]=='0'&&s[i+1]=='1')
      {
          flag=true;
          t=i+1;
          break;
      }
  }
   for(int i=t;i<s.size()-1;i++)
  {
      if(s[i]=='1'&&s[i+1]=='0')
      {
          flag1=true;
          break;
      }
  }
  if(flag1&&flag)cout<<"2"<<endl;
  else cout<<"1"<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}