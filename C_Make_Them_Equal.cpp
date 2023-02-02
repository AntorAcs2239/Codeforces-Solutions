#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    char ch;
    cin>>n>>ch;
    string s;
    cin>>s;
    bool flag=true;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=ch)
        {
            flag=false;
        }
        else c++;
    }
    if(flag)
    {
        cout<<"0"<<endl;
        return;
    }
    for(int i=n-1;i>=n/2;i--)
    {
        if(s[i]==ch)
        {
            cout<<"1"<<endl;
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<"2"<<endl;
    cout<<n-1<<" "<<n<<endl;
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
    // solve();
    return 0;
}