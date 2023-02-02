#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
typedef pair<int, int> pi;
vector<int>vec[200005];
void solve()
{
    char ar[10][10];
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            cin>>ar[i][j];
            if(ar[i][j]=='5')ar[i][j]='9';
        }
    }
     for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
           cout<<ar[i][j];
        }
        cout<<endl;
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