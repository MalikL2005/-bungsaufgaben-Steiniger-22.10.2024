#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elem.h"

QueueEl_t * first = NULL; // Globale Variable 

void befehlsabfrage(){
    int command;
    int buffer_prio;
    char buffer[10];
    do {
        printf("Command (1: Insert, 2: delete, 3: print list, 4: Exit)\n");
        scanf("%d", &command);
        switch(command){
            case 1:
                printf("Description (10 chars): ");
                scanf("%s", buffer);
                printf("Prio (int): " );
                scanf("%d", &buffer_prio);
                InsertE(buffer, buffer_prio);
                break;
            case 2:
                printf("Delete which prio? ");
                scanf("%d", &buffer_prio);
                DelE(buffer_prio);
                break;
            case 3:
                PrintE();
                break;
            case 4: break;
            default: printf("Unknown command\n");
        }
    } while(command != 4);
} 


int InsertE(char job_description[10], int job_prio){
    QueueEl_t * new_elem = malloc(sizeof(QueueEl_t));
    Job_t new_job; 
    new_job.prio = job_prio;
    printf("%s\n", job_description);
    new_elem->job = new_job;
    // fix char arr problem 

    if (first == NULL){
        first = new_elem;
        return 0;
    }
    QueueEl_t * pCurrent;
    for (pCurrent = first; pCurrent->next!=NULL; pCurrent = pCurrent->next){
        if (pCurrent->next->job.prio >= new_job.prio){
            new_elem->next = pCurrent->next;
            pCurrent->next = new_elem;
            return 0; 
        }
    }
    pCurrent->next = new_elem;
    return 0;
}


int DelE(int prio){
    if (first == NULL){
        printf("Could not delete element. List is empty.\n");
        return 1;
    }
    QueueEl_t * pCurrent;
    if (first->job.prio == prio){
        first = first->next;
        return 0;
    }
    for (pCurrent=first; pCurrent->next!=NULL; pCurrent=pCurrent->next){
        if (pCurrent->next->job.prio == prio){
            printf("Deleting %s...\n", pCurrent->next->job.description);
            pCurrent->next = pCurrent->next->next; 
            return 0;
        }
    }
    printf("No element with prio %d was found.\n", prio);
    return 1;
}


void PrintE(){
    if (first == NULL){
        printf("List is empty\n");
        return;
    }

    QueueEl_t * pCurrent = first;
    do {
        printf("%d, %s\n", pCurrent->job.prio, pCurrent->job.description);
        pCurrent = pCurrent->next;
    } while (pCurrent != NULL);
}



