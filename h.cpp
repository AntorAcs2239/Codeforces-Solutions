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
    vector<double>vec;
    double n;
    while(cin>>n)
    {
        vec.push_back(n);
    }
    double v;
    cin>>v;
    double x=vec[vec.size()-1];
    double mid=x/(vec.size()-1);
    double take=0;
    double c=0;
    double maxx=-1;
    double minn=INT_MAX;
    vector<double>tem;
    for(int i=0;i<vec.size()-1;i++)
    {
        tem.push_back(vec[i]);
    }
    double ans=-1;
    sort(tem.begin(),tem.end());
    for(int i=0;i<tem.size();i++)
    {
        if(tem[i]<x)
        {
            ans=max(ans,tem[i]);
            x=x-tem[i];
        }
    }
    cout<<fixed<<setprecision(2)<<ans<<endl;
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