//
// Created by conglb on 3/4/19.
//

#ifndef OS_LAB_SEMAPHORE_H
#define OS_LAB_SEMAPHORE_H


typedef node {
    pid_t pid;
    node* next = NULL;
} node;

typedef semaphore{
    // number of process run critical section at the same time. Eg: 1 if just one process allow run in critical section
    int count = 1;
    // linklist of process
    node* head = NULL;
    node* tail = NULL;
} semaphore;

/**
 * All process call this function will waiting for run critical section
 * @param sem is a semaphore variable
 */
void semaphore_wait(semaphore sem);

/**
 * Signal that process have finished critical section
 * @param sem
 */
void semaphore_signal(semaphore sem);

#endif //OS_LAB_SEMAPHORE_H
