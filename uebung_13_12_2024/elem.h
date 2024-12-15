#ifndef ELEM_H
#define ELEM_H

typedef struct Job {
    int prio;
    char * description;
} Job_t;


typedef struct QueueEl {
    Job_t job;
    struct QueueEl * next;
} QueueEl_t;


int InsertE(char job_description[10], int job_prio);
int DelE(int prio_to_delete);
void PrintE();

#endif
