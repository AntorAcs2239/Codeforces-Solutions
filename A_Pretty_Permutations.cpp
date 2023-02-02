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
    if(n%2==1)
    {
        cout<<n<<" ";
        for(int i=1;i<=n-1;i+=1)
        {
            cout<<i<<" ";
        }
    }
    else 
    {
         int ar[n];
        for(int i=1;i<=n;i++)
        {
            ar[i]=i;
        }
        for(int i=1;i<=n;i+=2)
        {
            cout<<ar[i+1]<<" "<<ar[i]<<" ";
        }
    }
    cout<<endl;
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
    //solve();
    return 0;
}