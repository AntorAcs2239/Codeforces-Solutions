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
    vector<int>vec[10];
    vec[1].push_back(1);
     vec[1].push_back(2);
    vec[2].push_back(3);
     vec[2].push_back(4);
      vec[2].push_back(5);
       vec[2].push_back(6);
       cout<<vec[2][3]<<endl;
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