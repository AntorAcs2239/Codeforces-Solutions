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
   ll ar[n+1];
   for(int i=1;i<=n;i++)cin>>ar[i];
   int t1,t2;
   for(int i=1;i<=n;i++)
   {
       if(ar[i]>=i-1)
       {
           t1=i;
       }
       else break;
   }
   for(int i=n;i>=1;i--)
   {
       if(ar[i]>=n-i)
       {
           t2=i;
       }
       else break;
   }
   //cout<<t1<<" "<<t2<<endl;
   if(t1>=t2)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
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
    //solve();
    return 0;
}