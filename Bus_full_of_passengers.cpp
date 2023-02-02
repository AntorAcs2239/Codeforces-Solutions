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
    int n,m,q;
    cin>>n>>m>>q;
    int count=0;
    vector<char>vec;
    while(q--)
    {
        char ch;
        int x;
        cin>>ch>>x;
        vec.push_back(ch);
    }
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]=='+')
        {
           
            if(count==m)
            {
                cout<<"Inconsistent"<<endl;
                return;
            }
            count++;
            cout<<count<<endl;
        }
        else 
        {
             
            if(count<m)
            {
                cout<<"Inconsistent"<<endl;
                return;
            }
            count--;
            cout<<count<<endl;
        }
    }
    cout<<"Consistent"<<endl;
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