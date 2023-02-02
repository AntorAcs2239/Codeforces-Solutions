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
    int ar[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    vector<int>vec;
    vec.push_back(0);
    string ans;
    for(int i=1,j=n;i<=j;)
    {
        int b=vec.back();
        if(i==j)
        {
            if(ar[i]>b)
            {
                ans+='L';
                break;
            }
        }
        if((ar[i]>b)||(ar[j]>b))
        {
            if((ar[i]>b)&&(ar[j]>b))
            {
                if(ar[i]<=ar[j])
                {
                    ans+='L';
                    vec.push_back(ar[i]);
                    i++;
                }
                else 
                {
                    ans+='R';
                    vec.push_back(ar[j]);
                    j--;
                }
            }
            else 
            {
                if(ar[i]>b)
                {
                    ans+='L';
                    vec.push_back(ar[i]);
                    i++;
                }
                else 
                {
                    ans+='R';
                    vec.push_back(ar[j]);
                    j--;
                }
            }
        }
        else 
        {
           break;
        }
    }
    int b=vec.back();
    cout<<ans.size()<<endl;
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