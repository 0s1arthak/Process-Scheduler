#include "scheduler.h"
#include <algorithm>
#include <iostream>

bool cmp(Process a, Process b) {
    return a.arrival_time < b.arrival_time;
}

// FCFS implementation will go here later
void fcfs_scheduling(vector<Process>& processes) {
    // Placeholder for logic
    sort(processes.begin(), processes.end(), cmp);
    int current_time=0;
    for(int i=0;i<processes.size();i++){
        if(current_time>=processes[i].arrival_time){
            processes[i].start_time=current_time;
        }
        else{
            processes[i].start_time=processes[i].arrival_time;
            current_time=processes[i].arrival_time;
        }
        current_time+=processes[i].burst_time;
        processes[i].completion_time=current_time;
        processes[i].turnaround_time=processes[i].completion_time-processes[i].arrival_time;
        processes[i].waiting_time=processes[i].turnaround_time-processes[i].burst_time;
    }
}
