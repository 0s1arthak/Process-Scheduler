#include "scheduler.h"
#include <algorithm>
#include <iostream>

bool cmp(Process a, Process b) {
    return a.arrival_time < b.arrival_time;
}

// FCFS implementation will go here later
void fcfs_scheduling(vector<Process>& processes) {
    // Placeholder for logic
}
