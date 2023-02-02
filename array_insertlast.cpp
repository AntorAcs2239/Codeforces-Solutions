#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,search_value;
    cin>>n;// input array size and postion
    int ar[n];//declared array
    for(int i=0;i<n;i++) {cin>>ar[i]; }//take input
    sort(ar,ar+n);//in binary search array should sorted
    cin>>search_value;// take input of search value
    bool check=false;
    int mid;
    int left,right;
    left=0;
    right=n-1;
    while (left<=right)
    {
       mid=(left+right)/2;
       if(ar[mid]==search_value)
       {
           check=true;
           break;
       }
       else if(ar[mid]<search_value)left=mid+1;
       else if(ar[mid]>search_value)right=mid-1;
    }
    if(check==true)cout<<"Congrates Value present in array";
    else cout<<"Sorry value is not present in array";
    return 0;
}