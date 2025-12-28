#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <vector>
#include "process.h"
using namespace std;

// Comparison function for sorting by arrival time
bool cmp(Process a, Process b);

// FCFS function prototype
void fcfs_scheduling(vector<Process>& processes);

#endif
