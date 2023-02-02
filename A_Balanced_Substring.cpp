#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
void solve()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   string tem;
   for(int i=0;i<n;i++)
   {
       string t;
       t+=s[i];
       for(int j=i+1;j<n;j++)
       {
           t+=s[j];
           int a=0,b=0;
           for(int k=0;k<t.size();k++)
           {
               if(t[k]=='a')a++;
               else b++;
           }
           if(a==b)
           {
               cout<<i+1<<" "<<j+1<<endl;
               return;
           }
       }
   }
   cout<<"-1"<<" "<<"-1"<<endl;
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
}