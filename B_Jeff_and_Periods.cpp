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
    int ar[n];
    vector<int>vec[100005];
    set<int>st;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        vec[ar[i]].push_back(i+1);
        st.insert(ar[i]);
    }
    sort(vec->begin(),vec->end());
    pair<int,int>pr[n];
    int i=0;
    int t=0;
    for(auto a:st)
    {
        if(vec[a].size()>=1)
        {
            auto x=vec[a];
            if(vec[a].size()==1)
            {
                pr[i].first=a;
                pr[i].second=0;
                i++;
                t++;
            }
            else 
            {
                bool flag=true;
                int p=x[1]-x[0];
                for(int i=1;i<x.size();i++)
                {
                    if((x[i]-x[i-1])!=p)
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                   pr[i].first=a;
                   pr[i].second=p;
                   i++;
                   t++;
                }
            }
        }
    }
    cout<<t<<endl;
    for(auto a:pr)
    {
       if(a.first!=0) cout<<a.first<<" "<<a.second<<endl;
    }
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