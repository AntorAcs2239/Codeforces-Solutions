#include <bits/stdc++.h>
using namespace std;
class PS
{
public:
    int process, burst_time, priority;
};
bool cmp(PS a, PS b)
{
    return a.priority > b.priority;
}
int main()
{
    int n;
    cout << "Enter the Number of process" << endl;
    cin >> n;
    PS ar[n];
    cout << "Enter Process , burst time , priority of processes" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].process >> ar[i].burst_time >> ar[i].priority;
    }
    sort(ar, ar + n, cmp);
    int wt[n], tt[n];
    int wait = 0;
    for (int i = 0; i < n; i++)
    {
        wt[ar[i].process - 1] = wait;
        tt[ar[i].process - 1] = ar[i].burst_time + wt[ar[i].process - 1];
        wait += ar[i].burst_time;
    }
    double averagewt = 0, averagett = 0;
    cout << "Process , Burst Time , Priority , Waiting Time , Turn around Time" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ar[i].process << " " << ar[i].burst_time << " " << ar[i].priority << " " << wt[ar[i].process - 1] << " " << tt[ar[i].process - 1] << endl;
        averagewt += wt[ar[i].process - 1];
        averagett += tt[ar[i].process - 1];
    }
    cout << "Average Waiting Time: " << averagewt << endl;
    cout << "Avarage Turn around Time: " << averagett << endl;
    return 0;
}