#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
void solve()
{
    int n;
    cin>>n;
    vector<int>vec[50005];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=5;j++)
        {
            int x;
            cin>>x;
            vec[i].push_back(x);
        }
    }
     if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    map<int,int>mp;
    map<int,int>check;
    int idx=1;
    for(int i=2;i<=n;i++)
    {
        auto a=vec[i];
        auto b=vec[idx];
        int s=0;
        for(int j=0;j<5;j++)
        {
            if(a[j]<b[j])s++;
        }
        if(s>=3)idx=i;
    }
    for(int i=1;i<=n;i++)
    {
        if(i!=idx)
        {
            int s=0;
            auto a=vec[idx];
            auto b=vec[i];
            for(int j=0;j<5;j++)
            {
                if(b[j]<a[j])s++;
            }
            if(s>=3)
            {
                cout<<
            }
        }
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