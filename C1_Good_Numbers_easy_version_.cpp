#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define ld long double
#define mod 1000000007        
#define gcd __gcd
vector<int>graph[200005];
vector<int>visited(200005,0);
vector<int>final;
void printSubsequences(int arr[], int n)
{
    unsigned int opsize = pow(2, n);
 
    for (int counter = 1; counter < opsize; counter++)
    {
        int sum=0;
        for (int j = 0; j < n; j++)
        {
            if (counter & (1<<j))
            {
                sum+=arr[j];
            }
        }
       final.push_back(sum);
    }
}
void solve()
{
    ll n;
    cin>>n;
    for(int i=0;i<final.size();i++)
    {
        if(final[i]>=n)
        {
            cout<<final[i]<<endl;
            break;
        }
    }
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ar[10];
    for(int i=0;i<39;i++)
    {
        ll t=pow(3,i);
        if(t<=19683)ar[i]=t;
        else break;
    }
    printSubsequences(ar,10);
    sort(final.begin(),final.end());
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
   //solve();
    return 0;
}