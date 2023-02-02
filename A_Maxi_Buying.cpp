#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define gcd __gcd
void solve()
{
    double a;
    cin>>a;
    int t=a*(1.08);
    if(t<206)
    {
        cout<<"Yay!"<<endl;
    }
    else if(t==206)cout<<"so-so"<<endl;
    else cout<<":("<<endl;
   
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