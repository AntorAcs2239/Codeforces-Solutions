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
    int a;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++)cin>>ar[i];
    int br[a];
    for(int i=0;i<a;i++)cin>>br[i];
    map<pair<int,int>,int>mp;
    for(int i=0;i<a;i++)
    {
        mp[make_pair(ar[i],br[i])]=1;
    }
    int count=0;
    for(int i=0;i<a;i++)
    {
        int a=ar[i];
        int b=br[i];
        if(mp[make_pair(b,a)]==1)
        {
            count++;
            mp[make_pair(a,b)]=0;
        }
    }
    if(count==0)count=1;
    ll ans=power(3,count,mod);
    cout<<ans-1<<endl;
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