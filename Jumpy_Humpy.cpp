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
   stack<ll>st;
   ll maxx=LONG_LONG_MIN;
   for(int i=0;i<n;i++)
   {
       if(st.empty()||ar[i]>=st.top())st.push(ar[i]);
       else
       {
           ll tem=0;
           while (!st.empty())
           {
               ll t=st.top();
               tem=tem^t;
               maxx=max(maxx,tem);
               st.pop();
           }
           st.push(ar[i]);
       }
   }
           ll tem=0;
           while (!st.empty())
           {
               ll t=st.top();
               tem=tem^t;
               maxx=max(maxx,tem);
               st.pop();
           }
   cout<<maxx<<endl;
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