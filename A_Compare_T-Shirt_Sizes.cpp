#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string a,b;
    cin>>a>>b;
    char c1,c2;
    c1=a.back();
    c2=b.back();
    if(a==b)cout<<"="<<endl;
    else if(c1=='L'&&(c2=='M'||c2=='S'))cout<<">"<<endl;
    else if(c1=='S'&&(c2=='M'||c2=='L'))cout<<"<"<<endl;
    else if(c1=='M'&&(c2=='L'))cout<<"<"<<endl;
    else if(c1=='M'&&(c2=='S'))cout<<">"<<endl;
    else if(c1==c2)
    {
        int x=a.size()-1;
        int y=b.size()-1;
        if(c1=='S')
        {
            if(x>y)cout<<"<"<<endl;
            else if(x<y)cout<<">"<<endl;
            else cout<<"="<<endl;
        }
        if(c1=='L')
        {
            if(x>y)cout<<">"<<endl;
            else if(x<y)cout<<"<"<<endl;
            else cout<<"="<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    //  solve();
    return 0;
}