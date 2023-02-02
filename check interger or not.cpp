#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {
            bool flag=true;
            for(int j=i+1;j<s.size();j++)
            {
                if(s[j]!='0')
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                cout<<"INTEGER"<<endl;
            }
            else cout<<"NOT INTEGER"<<endl;
            return;
        }
    }
    cout<<"INTEGER"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
     solve();
    return 0;
}