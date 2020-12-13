#include <pthread.h>
#include <unistd.h>

// Detect number of threads
int numberOfThreads() {
    int logicalCores;
    logicalCores = sysconf(_SC_NPROCESSORS_CONF);

    return logicalCores;
}



