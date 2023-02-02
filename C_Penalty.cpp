#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
vector<pair<int,int>>unorder[100005];
void push(int u,int v,int wt)
{
    unorder[u].push_back(make_pair(v,wt));
    unorder[v].push_back(make_pair(u,wt));
}
int visited[100005];
vector<int>ans(100005,INT_MAX);
void shortestpath()
{
      queue<int>q;
      q.push(1);
      visited[1]=1;
      ans[1]=0;
      while (!q.empty())
     {
          int t=q.front();
          q.pop();
          for(auto a:unorder[t])
          {
              if(visited[a.first]==0)
              {
                  visited[a.first]=1;
                  ans[a.first]=a.second+ans[t];
                  q.push(a.first);
              }
          }
     }
}
bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
void solve()
{
    string a;
    cin>>a;
    int fi=0,se=0;
    pair<int,int>ar[11];
    int f1=0,s1=0;
    int k=1;
    for(int i=1;i<=10;i++)
    {
       if(a[i-1]=='1')
       {
           if(i%2==1)
           {
               fi++;
           }
           else se++;
       }
       else if(a[i-1]=='?')
       {
           if(i%2==1)
           {
               f1++;
           }
           else s1++;
       }
       if(fi>se)
       {
            int q=10-i+1;
            int s=q/2;
            int f=10-s;
            if((s+se)<(fi+f1))
            {
                cout<<i<<endl;
                return;
            }
       }
       else if(se>fi)
       {
            int q=10-i+1;
            int s=q/2;
            int f=10-s;
            if((fi+f)<(se+s1))
            {
                cout<<i<<endl;
                return;
            }
       }
       else 
       {
           
       }
    }
    int p=-100;
    // for(int i=1;i<=10;i++)
    // {
    //     cout<<ar[i].first<<" "<<ar[i].second<<endl;
    // }
    // cout<<endl;
    // for(int i=1;i<=10;i++)
    // {
    //     int t=ar[i].first;
    //     int t2=ar[i].second;
    //     if(t>t2)
    //     {
    //         int q=10-i+1;
    //         int s=q/2;
    //         int f=10-s;
    //         if((s+t2)<t)
    //         {
    //             cout<<i<<endl;
    //             return;
    //         }
    //     }
    //     else if(t2>t)
    //     {
    //         int q=10-i+1;
    //         int s=q/2;
    //         int f=10-s;
    //         if((f+t)<t2)
    //         {
    //             cout<<i<<endl;
    //             return;
    //         }
    //     }
    // }
     cout<<"10"<<endl;
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