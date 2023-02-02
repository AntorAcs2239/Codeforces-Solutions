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
   int n;
   cin>>n;
   ll ar[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   vector<ll>ans;
   for(int i=0,j=n-1;i<n&&j>=0;)
   {
       if(ar[i]>ar[j])
       {
           ans.push_back(1);
           j--;
       }
       else if(ar[i]<ar[j])
       {
           ans.push_back(2);
           i++;
       }
       else 
       {
           ans.push_back(0);
           i++;
           j--;
       }
   }
   for(int i=0;i<ans.size();i++)
   {
       cout<<ans[i]<<" ";
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