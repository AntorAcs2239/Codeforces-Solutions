#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,m;
    cin>>n>>m;
     if(n>m)
        {
            cout<<"No"<<endl;
            return;
        }
    if(n%2==1)
    {
        cout<<"Yes"<<endl;
            for(int i=1;i<n;i++)
            {
                cout<<m/n<<" ";
            }
            cout<<(m/n)+m%n<<endl;
    }
    else if(m%2==0)
    {
         cout<<"Yes"<<endl;
        vector<ll>vec;
        for(int i=1;i<=n;i++)vec.push_back(m/n);
        int j=0;
        for(int i=1;i<=m%n;i++)
        {
            vec[j]++;
            j++;
        }
        for(int i=0;i<n;i++)cout<<vec[i]<<" ";
        cout<<endl;
    }
    else 
    {
        cout<<"No"<<endl;
            return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
  //  solve();
    return 0;
}