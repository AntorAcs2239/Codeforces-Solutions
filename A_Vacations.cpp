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
     int zero=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int tem=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==0||(i>0&&ar[i]==tem))
        {
            zero++;
            tem=0;
        }
        else if(ar[i]!=3)tem=ar[i];
        else if(tem!=0)tem=3-tem;
    }
    cout<<zero<<endl;
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