#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

#include "threads.h"

int calc_thread_amount() {
    return (int)sysconf(_SC_NPROCESSORS_CONF);
}

void launchThreads() {
    for(int i = numberOfThreads(); i > 0; i--) {
        // THEADS LAUNCH
    }
}
