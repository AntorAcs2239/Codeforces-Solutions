#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
void solve()
{
    ll n, k;
    cin >> n;
    vector<ll> a, b;
    if (n == 1)
    {
        cout << "1" << endl;
        cout << "1" << endl;
        return;
    }
    if(n%2==1)
    {
        cout<<"-1"<<endl;
        return;
    }
    map<ll, ll> mp;
    for (int i = n; i >= 1; i--)
    {
        if (mp[i] == 0)
        {
            string t;
            ll tem = i;
            while (tem > 0)
            {
                if (tem % 2 == 0)
                    t += '1';
                else
                    t+= '0';
                tem= tem / 2;
            }
            if(t.size()>1) t.pop_back();
            reverse(t.begin(),t.end());
            ll num=stoll(t);
            num=binaryToDecimal(num);
            mp[num]=1;
            mp[i]=1;
            a.push_back(i);
            a.push_back(num);
            b.push_back(num);
            b.push_back(i);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
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
    // solve();
    return 0;
}