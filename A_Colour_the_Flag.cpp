#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define gcd __gcd
ll power(ll x, ll y, ll p)
{
    ll res = 1; 
    x = x % p;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
int sum(ll n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int test=1;
ll indexlow(ll ar[],ll n,ll t)
{
    ll res=0;
    ll low=0;
    ll high=n-1;
    ll mid=0;
    while (low<=high)
    {
        mid=(low+high)/2;
        if(ar[mid]>t)
        {
            high=mid-1;
        }
        else if(ar[mid]<t)
        {
            low=mid+1;
        }
        else high=mid-1;
    }
    return low+1;
}
ll indexhigh(ll ar[],ll n,ll t)
{
    ll res=0;
    ll low=0;
    ll high=n-1;
    ll mid=0;
    while (low<=high)
    {
        mid=(low+high)/2;
        if(ar[mid]>t)
        {
            high=mid-1;
        }
        else if(ar[mid]<=t)
        {
            low=mid+1;
        }
    }
    return low+1;
}
double find_sqrt_step1(ll x)
{
     ll low=1,high=x;
     ll mid;
     double ans;
     while (low<high)
     {
         mid=(low+high)/2;
         if(mid*mid==x)
         {
             ans=mid;
             break;
         }
         else if(mid*mid<x)
         {
             ans=mid;
             low=mid+1;
         }
         else 
         {
             high=mid-1;
         }
     }
     double tem=0.1;
     for(int i=1;i<=10;i++)
     {
         while (ans*ans<x)
         {
             ans+=tem;
         }
         ans-=tem;
         tem=tem/10;
     }
     return ans;
}
double find_sqrt_step2(ll x)
{
    double low=1,high=x,ans,mid,abs=1e-10;
    while (high-low>abs)
    {
        mid=(low+high)/2;
        if(mid*mid>x)
        {
           high=mid;
        }
        else 
        {
            low=mid;
        }
    }
    return mid;
}
bool cmp(pair<int,int>a,pair<int,int>b)
{
   if(a.second!=b.second)
   {
       return a.first<b.first;
   }
   return false;
}
ll pro(ll a)
{
    ll p=1;
    if(a<10)return a;
    while (a>0)
    {
       if(a%10)p*=a%10;
       a/=10;
    }
    return pro(p);
}
bool cmpa(pair<int,double>a,pair<int,double>b)
{
    if(a.first==b.first)
    {
        return a.second<b.second;
    }
    return a.first<b.first;
}
void solve()
{
    int n,m;
    cin>>n>>m;
    char ar[n][m];
    int count=0;
    pair<int,int>pr[100];
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ar[i][j];
            if(ar[i][j]=='R'||ar[i][j]=='W')
            {
                count++;
                pr[k].first=i;
                pr[k].second=j;
            }
        }
    }
     vector<pair<int,int>>vec;
     int i,j;
    if(count==0)
    {
        ar[0][0]='R';
        vec.push_back(make_pair(0,0));
    }
    else 
    {
        for(auto a:pr)
       {
               int x=a.first;
            int y=a.second;
              char ch=ar[x][y];
        if(ch=='W')
        {
            if(x+1<n)
            {
                if(ar[x+1][y]=='W')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else if(ar[x+1][y]=='.')
                {
                    ar[x+1][y]='R';
                    vec.push_back(make_pair(x+1,y));
                }
            }
            if(x-1>=0)
            {
                if(ar[x-1][y]=='W')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else if(ar[x-1][y]=='.')
                {
                    ar[x-1][y]='R';
                    vec.push_back(make_pair(x-1,y));
                }
            }
            if(y+1<m)
            {
                if(ar[x][y+1]=='W')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else  if(ar[x][y+1]=='.')
                {
                    ar[x][y+1]='R';
                    vec.push_back(make_pair(x,y+1));
                }
            }
            if(y-1>=0)
            {
                if(ar[x][y-1]=='W')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else  if(ar[x][y-1]=='.')
                {
                    ar[x][y-1]='R';
                    vec.push_back(make_pair(x,y-1));
                }
            }
        }
        else if(ch=='R')
        {
            if(x+1<n)
            {
                if(ar[x+1][y]=='R')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else  if(ar[x+1][y]=='.')
                {
                    ar[x+1][y]='W';
                    vec.push_back(make_pair(x+1,y));
                }
            }
            if(x-1>=0)
            {
                if(ar[x-1][y]=='R')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else  if(ar[x-1][y]=='.')
                {
                    ar[x-1][y]='W';
                    vec.push_back(make_pair(x-1,y));
                }
            }
            if(y+1<m)
            {
                if(ar[x][y+1]=='R')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else  if(ar[x][y+1]=='.')
                {
                    ar[x][y+1]='W';
                    vec.push_back(make_pair(x,y+1));
                }
            }
            if(y-1>=0)
            {
                if(ar[x][y-1]=='R')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else  if(ar[x][y-1]=='.')
                {
                    ar[x][y-1]='W';
                    vec.push_back(make_pair(x,y-1));
                }
            }
        }
       }
    }
    for(int i=0;i<vec.size();i++)
    {
        int x=vec[i].first;
        int y=vec[i].second;
        char ch=ar[x][y];
        if(ch=='W')
        {
            if(x+1<n)
            {
                if(ar[x+1][y]=='W')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else if(ar[x+1][y]=='.')
                {
                    ar[x+1][y]='R';
                    vec.push_back(make_pair(x+1,y));
                }
            }
            if(x-1>=0)
            {
                if(ar[x-1][y]=='W')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else if(ar[x-1][y]=='.')
                {
                    ar[x-1][y]='R';
                    vec.push_back(make_pair(x-1,y));
                }
            }
            if(y+1<m)
            {
                if(ar[x][y+1]=='W')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else  if(ar[x][y+1]=='.')
                {
                    ar[x][y+1]='R';
                    vec.push_back(make_pair(x,y+1));
                }
            }
            if(y-1>=0)
            {
                if(ar[x][y-1]=='W')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else  if(ar[x][y-1]=='.')
                {
                    ar[x][y-1]='R';
                    vec.push_back(make_pair(x,y-1));
                }
            }
        }
        else if(ch=='R')
        {
            if(x+1<n)
            {
                if(ar[x+1][y]=='R')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else  if(ar[x+1][y]=='.')
                {
                    ar[x+1][y]='W';
                    vec.push_back(make_pair(x+1,y));
                }
            }
            if(x-1>=0)
            {
                if(ar[x-1][y]=='R')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else  if(ar[x-1][y]=='.')
                {
                    ar[x-1][y]='W';
                    vec.push_back(make_pair(x-1,y));
                }
            }
            if(y+1<m)
            {
                if(ar[x][y+1]=='R')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else  if(ar[x][y+1]=='.')
                {
                    ar[x][y+1]='W';
                    vec.push_back(make_pair(x,y+1));
                }
            }
            if(y-1>=0)
            {
                if(ar[x][y-1]=='R')
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else  if(ar[x][y-1]=='.')
                {
                    ar[x][y-1]='W';
                    vec.push_back(make_pair(x,y-1));
                }
            }
        }
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ar[i][j]=='.')flag=false;
            }
        }
        if(flag)break;
    }
    for(int x=0;x<n;x++)
    {
        for(int y=0;y<m;y++)
        {
         char ch=ar[x][y];
        if(ch=='W')
        {
            if(x+1<n)
            {
                if(ar[x+1][y]=='W')
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
            if(x-1>=0)
            {
                if(ar[x-1][y]=='W')
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
            if(y+1<m)
            {
                if(ar[x][y+1]=='W')
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
            if(y-1>=0)
            {
                if(ar[x][y-1]=='W')
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
        else if(ch=='R')
        {
            if(x+1<n)
            {
                if(ar[x+1][y]=='R')
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
            if(x-1>=0)
            {
                if(ar[x-1][y]=='R')
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
            if(y+1<m)
            {
                if(ar[x][y+1]=='R')
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
            if(y-1>=0)
            {
                if(ar[x][y-1]=='R')
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
        }
    }
      cout<<"YES"<<endl;
      for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
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
   // solve();
    return 0;
}