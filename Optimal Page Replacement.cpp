#include <bits/stdc++.h>
using namespace std;
int main()
{
    int frame_num;
    cout<<"Enter the number of Frame"<<endl;
    cin >> frame_num;
    cout<<"Enter the size of reference string"<<endl;
    int si;
    cin >> si;
    int ref_string[si];
    cout<<"Enter the ref_string"<<endl;
    for (int i = 0; i < si; i++)
        cin >> ref_string[i];
    int ar[frame_num];
    for (int i = 0; i < frame_num; i++)
        ar[i] = -1;
    int m = 0, h = 0;
    cout<<"Placement of every String in frames"<<endl;
    for (int i = 0; i < frame_num; i++)
    {
        ar[i] = ref_string[i];
        for (int j = 0; j < frame_num; j++)
        {
            if (ar[j] == -1)
            {
                cout << "B"
                     << " ";
            }
            else
                cout << ar[j] << " ";
        }
        cout << "(MISS)" << endl;
    }
    m = frame_num;
    for (int i = frame_num; i < si; i++)
    {
        bool flag = false;
        for (int j = 0; j < frame_num; j++)
        {
            if (ar[j] == ref_string[i])
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            h++;
            for (int j = 0; j < frame_num; j++)
                cout << ar[j] << " ";
           cout << "(HIT)" << endl;
        }
        else
        {
            m++;
            map<int, int> distance;
            for (int j = si - 1; j > i; j--)
            {
                distance[ref_string[j]] = j;
            }
            int idx;
            int maxx = -1;
            for (int j = 0; j < frame_num; j++)
            {
                if (distance[ar[j]] == 0)
                {
                    idx = j;
                    break;
                }
                if (distance[ar[j]] > maxx)
                {
                    maxx = distance[ar[j]];
                    idx = j;
                }
            }
            ar[idx] = ref_string[i];
            for (int j = 0; j < frame_num; j++)
                cout << ar[j] << " ";
           cout << "(MISS)" << endl;
        }
    }
    cout<<"Number of HIT: "<<h<<endl;
    cout<<"Number of MISS/page fault: "<<m<<endl;
    return 0;
}