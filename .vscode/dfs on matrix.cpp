#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,m;
    cin>>n>>m;
    char ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cin>>ar[i][j];
    }
    if(n==1)
    {
        cout<<"-1"<<endl;
        return;
    }
    if(m==1)
    {
        int t=0;
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)t+=(ar[i][j]-'0');
        }
        if(t==n&&(t%2==0))
        {
            cout<<"0"<<endl;
        }
        else cout<<"-1"<<endl;
        return;
    }
    vector<pair<int,int>>vec;
    for(int i=0;i<m-1;i++)
    {
        int t=0;
        for(int j=0;j<n;j++)
        {
            t+=(ar[j][i]-'0');
        }
        if(t%2==1)
        {
            vec.push_back({n,i+1});
            if(ar[n-1][i]=='0')ar[n-1][i]='1';
            else ar[n-1][i]='0';
        }
    }
    for(int i=0;i<n-1;i++)
    {
        int t=0;
        for(int j=0;j<m;j++)
        {
            t+=(ar[i][j]-'0');
        }
        if(t%2==0)
        {
            vec.push_back({i+1,m});
            if(ar[i][m-1]=='0')ar[i][m-1]='1';
            else ar[i][m-1]='0';
        }
    }
    int t1=0,t2=0;
    for(int i=0;i<n;i++)
    {
       t1+=(ar[i][m-1]-'0');
    }
      for(int i=0;i<m;i++)
    {
       t2+=(ar[n-1][i]-'0');
    }
    if(t1%2==t2%2)
    {
        if(n%2==0)
        {
             vector<pair<int,int>>vecc;
              for(int i=0;i<n-1;i++)
              {
              for(int j=0;j<m-1;j++)
              {
                  if(ar[i][j]=='0')
                  {
                      vecc.push_back({i+1,j+1});
                  }
              }
               }
                for(int i=0;i<n;i++)
              {
                  if(ar[i][m-1]=='0')vecc.push_back({i+1,m});
              }
              cout<<vecc.size()<<endl;
         for(int i=0;i<vecc.size();i++)
           {
            cout<<vecc[i].first<<" "<<vecc[i].second<<endl;
           }
           return;
        }
        cout<<"-1"<<endl;
    }
    if(t1%2==0&&t2%2==1)
    {
        cout<<vec.size()<<endl;
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i].first<<" "<<vec[i].second<<endl;
        }
    }
    else 
    {
        vec.push_back({n,m});
        cout<<vec.size()<<endl;
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i].first<<" "<<vec[i].second<<endl;
        }
    }
}
int main()
{
   int t;
//    cin>>t;
//    while(t--)
//    {
//        solve();
//    }
   solve();
}