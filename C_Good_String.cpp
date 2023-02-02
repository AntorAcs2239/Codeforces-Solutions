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
    string a;
    cin>>a;
    int k=1;
    for(int i=0;i<n;i++)
    {
        if(k%2==1)
        {
            while((i+1)<n&&(a[i]==a[i+1]))
            {
                a[i]='*';
                i++;
            }
            k++;
        }
        else k++;
    }
    string ans;
    for(int i=0;i<n;i++)
    {
        if(a[i]!='*')ans+=a[i];
    }
    if(ans.size()%2==1)ans.pop_back();
    cout<<n-ans.size()<<endl;
    cout<<ans<<endl;
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