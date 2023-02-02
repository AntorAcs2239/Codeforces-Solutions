#include<bits/stdc++.h>
using namespace std;
int numofmove;
void towerofhenoi(int n,char from,char to,char medium)
{
    if(n==0)return;
    towerofhenoi(n-1,from,medium,to);
    numofmove++;
    cout<<"Move Disk: "<<n<<" From "<<from<<" To "<<to<<endl;
    towerofhenoi(n-1,medium,to,from);
}
int main()
{
    int n;
    cin>>n;
    towerofhenoi(n,'A','C','B');
    cout<<numofmove<<endl;
    return 0;
}