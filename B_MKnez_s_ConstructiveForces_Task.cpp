#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    if(n%2==1)
    {
        if(n==3)
        {
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;
        int t1=5,t2=t1-(n/2)*t1;
        for(int i=1;i<=n;i++)
        {
            if(i&1)cout<<t2<<" ";
            else cout<<t1-t2<<" ";
        }
        cout<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<"1"<<" ";
        }
        else cout<<"-1"<<" ";
    }
    cout<<endl;
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