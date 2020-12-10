#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>

float version = 1.0;
char inputHash[800];

void print_usage() {
    printf("Usage: dehashr -i <input> -t <type> \n");
    exit(2);
}

void print_help() {
    printf(" _|  _  |_   _.  _ |_  ._  \n");
    printf("(_| (/_ | | (_| _> | | |  ");
    printf("v%0.1f\n\n", version);
    print_usage();

    exit(0);
}

int main(int argc, char **argv) {
    int options;
    while ((options = getopt(argc, argv, "i:t:h::")) != -1) {
        switch (options) {
            case 'h':
                print_help();

            case 'i':
                printf("input: %s\n");
                break;
            
            case 't':
                printf("hashtype: %s\n");
                break;

            default:
                print_usage();
        }
    }
    
    return 0;
}

