#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        int ar[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        int total=(int)pow(2,n);
        int ans=0;
        for(int i=1;i<=total-1;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i&(1<<j)))
                {
                   cout<<ar[j]<<" ";
                }
            }
            cout<<endl;
        }
    }
	return 0;
}