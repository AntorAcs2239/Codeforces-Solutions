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
   ll a,b;
   cin>>a>>b;
   ll g=gcd(a,b);
   vector<ll>vec;
   for(int i=1;i<=sqrt(g);i++)
   {
       if(g%i==0)
       {
           if(g/i==i)vec.push_back(i);
           else 
           {
               vec.push_back(i);
               vec.push_back(g/i);
           }
       }
   }
   sort(vec.begin(),vec.end());
   int ans=1;
   for(int i=1;i<vec.size();i++)
   {
       if(vec[i]>0)
       {
           ans++;
           for(int j=i+1;j<vec.size();j++)
          {
              if(vec[j]%vec[i]==0)vec[j]=0;
          }
       }
   }
   cout<<ans<<endl;
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