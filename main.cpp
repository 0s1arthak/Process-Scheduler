#include <bits/stdc++.h>
#include "process.h"
#include "scheduler.h"
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<Process> processes(n);
    for (int i = 0; i < n; i++) {
        cin >> processes[i].arrival_time >> processes[i].burst_time;
        processes[i].pid = i + 1;
    }
    fcfs_scheduling(processes);
    for (int i = 0; i < n; i++) {
        cout<<processes[i].start_time<<" "<<processes[i].completion_time<<" "<<processes[i].turnaround_time<<" "<<processes[i].waiting_time<<endl;
    }

    return 0;
}
