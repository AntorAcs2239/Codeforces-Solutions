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
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   int br[n];
   for(int i=0;i<n;i++)br[i]=ar[i];
   sort(br,br+n);
   int minn=br[0];
   bool flag=true;
   for(int i=0;i<n;i++)
   {
       if(ar[i]!=br[i])
       {
           int t=gcd(ar[i],br[i]);
           if(t%minn!=0)
           {
               flag=false;
               break;
           }
       }
   }
   if(flag)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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
   // solve();
    return 0;
}