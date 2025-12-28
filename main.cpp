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

    // Sort by arrival time (using cmp from scheduler.cpp)
    sort(processes.begin(), processes.end(), cmp);

    // For now, just print input (as in your original code)
    for (int i = 0; i < n; i++) {
        cout << processes[i].pid << " " << processes[i].arrival_time << " "
             << processes[i].burst_time << "\n";
    }

    // fcfs_scheduling(processes);

    return 0;
}
