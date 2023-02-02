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
   char ar[n+1][n+1];
   map<char,int>mp;
   for(int i=0;i<n;i++)
   {
       if(s[i]=='1')mp[i+1]=1;
       else mp[i+1]=2;
   }
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           if(i==j)ar[i][j]='X';
           else ar[i][j]='=';
       }
   }
   for(int i=0;i<n;i++)
   {
       if(s[i]=='2')
       {
            int p=i+1;
            bool flag=false;
           for(int j=1;j<=n;j++)
           {
               if(ar[p][j]=='=')
               {
                   if(mp[j]!=1&&(p!=j))
                   {
                       ar[p][j]='+';
                       if(ar[j][p]=='='&&mp[j]!=1)ar[j][p]='-';
                       flag=true;
                       break;
                   }
               }
           }
           if(!flag)
           {
               cout<<"NO"<<endl;
               return;
           }
       }
   }
   cout<<"YES"<<endl;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           cout<<ar[i][j];
       }
       cout<<endl;
   }
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