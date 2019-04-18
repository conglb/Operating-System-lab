//
// Created by conglb on 3/4/19.
//
#include <stdlib.h>
#include "semaphore.h"
#include <signal.h>
#include <unistd.h> // to get pid

void semaphore_wait(semaphore sem) {
    sem.count--;
    if (sem.count <= 0) {
        // add to the line
        node newNode = malloc(sizeof(newHead));
        newNode.pid = getpid();
        newNode.next = NULL;
        pid_t waitPid = sem.tail->pid;
        sem.tail->next = newNode;
        waitpid(waitPid)
    }
}

void semaphore_signal(semaphore sem) {
    sem.count++;
    kill(head->pid);
}
