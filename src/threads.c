#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

int numberOfThreads() {
    int numberOfThreads = (int)sysconf(_SC_NPROCESSORS_CONF);

    return numberOfThreads;
}

void launchThreads() {
    for(int i = numberOfThreads(); i > 0; i--) {
        // THEADS LAUNCH
    }

}
