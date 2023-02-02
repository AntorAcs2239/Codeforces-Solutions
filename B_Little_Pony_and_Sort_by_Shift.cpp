#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define gcd __gcd
ll tem[200005];
void solve()
{
    int n;
    cin>>n;
    deque<int>dq;
    vector<int>vec;
    vector<int>tem;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int idx=-1;
    for(int i=0;i<n-1;i++)
    {
        if(vec[i]>vec[i+1])
        {
            idx=i+1;
            break;
        }
    }
    if(idx==-1)
    {
        cout<<"0"<<endl;
        return;
    }
    for(int i=idx;i<n;i++)tem.push_back(vec[i]);
    for(int i=0;i<idx;i++)tem.push_back(vec[i]);
    for(int i=0;i<n-1;i++)
    {
        if(tem[i]>tem[i+1])
        {
            cout<<"-1"<<endl;
            return;
        }
    }
    cout<<n-idx<<endl;
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
}