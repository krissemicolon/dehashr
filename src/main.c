#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <stdbool.h>
#include <gcrypt.h>

#include "include/cli.h"
#include "include/hashing.h"
#include "include/bruteforce.h"
#include "include/main.h"

// User Input & settings
char *inputHash;
char *algorithm;
char *outputFilename;
bool outputToFile = false;
int threadAmount;

int main(int argc, char **argv) {
    int options;
    while ((options = getopt(argc, argv, "hli:a:o:g:t:")) != -1) {
        switch (options) {
            case 'h':
                print_help();

            case 'l':
                print_algorithms();

            case 'i':
                inputHash = optarg;
                break;

            case 'a':
                algorithm = optarg;
                printf("algorithm: %s\n", algorithm);
                break;

            case 'o':
                outputFilename = optarg;
                outputToFile = true;
                printf("OutFilename: %s\n", outputFilename);
                break;

            case 'g':
                //printf("Feature not available yet.\n");
                //puts(hash(GCRY_MD_SHA256, optarg));
                bruteforce();
                break;

            case 't':
                threadAmount = atoi(optarg); 
                printf("%i\n", threadAmount);
                break;
        }
    }

    if(optind == 1) {
        print_usage();
        puts("dehashr -h for more information");
        exit(2);
    }

    return 0;
}
