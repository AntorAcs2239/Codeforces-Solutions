#include<bits/stdc++.h>
using namespace std;
vector<pair<pair<int,int>,pair<int,int>>>graph[20005];

int main()
{
    int m;
    cin>>m;
    while (m--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        graph[make_pair(x1,y1)].push_back(make_pair(x2,y2));
    }
    
    return 0;
}