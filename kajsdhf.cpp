#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        long double a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        long double sum = (a[0]+a[1])/2;
        int c=2;

        for(int i=2;i<n;i++){
            if(sum==0){
                    c++;
                    sum+=(a[i])/c;
                }

        else break;

        }

        for(int i=c;i<n;i++){
            sum+=a[i];
        }
        printf("%.9Lf\n",sum);
    }
}