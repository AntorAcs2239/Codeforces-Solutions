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
   ll a,b;
   cin>>a>>b;
   vector<ll>vec;
   int k=1;
   for(ll i=a;i<=b;i++)
   {
       if(k>2019)break;
       vec.push_back(i%2019);
       k++;
   }
   ll minn=INT_MAX;
   for(int i=0;i<vec.size();i++)
   {
       for(int j=i+1;j<vec.size();j++)
       {
           ll tem=(vec[i]*vec[j])%2019;
           minn=min(minn,tem);
       }
   }
   cout<<minn<<endl;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}