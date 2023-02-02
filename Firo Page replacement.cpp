#include <bits/stdc++.h>
using namespace std;
int freq[100];
int main()
{
    int frame_num;
    cout << "Enter the number of frame " << endl;
    cin >> frame_num;
    int si;
    cout << "Enter the size of reference String" << endl;
    cin >> si;
    int ref_string[si];
    cout << "Enter the reference string Values" << endl;
    for (int i = 0; i < si; i++)
        cin >> ref_string[i];
    int m = 0, h = 0;
    int ar[frame_num];
    for (int i = 0; i < frame_num; i++)
        ar[i] = -1;
    cout << "Placement of every String in frames" << endl;
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
        bool flag = true;
        for (int j = 0; j < frame_num; j++)
        {
            if (ar[j] == ref_string[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            int fid, maxx = -1;
            for (int j = 0; j < frame_num; j++)
            {
                if (freq[ar[j]] > maxx)
                {
                    maxx = freq[ar[j]];
                    fid = j;
                }
            }
            freq[ar[fid]] = 0;
            ar[fid] = ref_string[i];
            m++;
            for (int j = 0; j < frame_num; j++)
                cout << ar[j] << " ";
            cout << "(MISS)" << endl;
        }
        else
        {
            h++;
            for (int j = 0; j < frame_num; j++)
                cout << ar[j] << " ";
            cout << "(HIT)" << endl;
        }
        for (int j = 0; j < frame_num; j++)
        {
            freq[ar[j]]++;
        }
    }

    cout << "Number of HIT: " << h << endl;
    cout << "Number of Miss/page fault : " << m << endl;
    return 0;
}