#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,position,value;
    cin>>n;//take array size
    int ar[n];//declare array
    for(int i=0;i<n;i++) {cin>>ar[i]; }// input array
    cin>>position>>value;// take postion and value
    ar[position-1]=value;// update postion by value
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";//show array
    }
    return 0;
}