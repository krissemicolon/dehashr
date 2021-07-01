#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <stdbool.h>
#include <gcrypt.h>
#include <ctype.h>

#include "cli.h"
#include "hashing.h"
#include "bruteforce.h"
#include "main.h"

// User Input & settings
char *inputHash;
char *algorithm;
char *outputFilename;
char *guess;
bool outputToFile = false;
int threadAmount;

int main(int argc, char **argv) {
    int options;
    while ((options = getopt(argc, argv, "hli:a:o:g:t:")) != -1) {
        switch (options) {
            /* [-h] Prints Help */
            case 'h':
                print_help();
                break;

            /* [-l] Lists hashing algos */
            case 'l':
                print_algorithms();
                break;

            /* [-i] Input the hash */
            case 'i':
                input_hash = optarg;
                bruteforce(inputHash);
                break;

            /* [-a] Input the algorithm */
            case 'a':
                algorithm = optarg;
                printf("algorithm: %s\n", algorithm);
                break;

            /* [-o] Enable output to File and choose filename */
            case 'o':
                output_filename = optarg;
                output_to_file = true;
                break;

            /* [-g] Guess the hash */
            case 'g':
                puts("Feature not available yet.");
                guess = optarg;
                break;

            /* [-t] Input the amount of threads you wish to use */
            case 't':
                puts("Feature not available yet.");
                thread_amount = atoi(optarg); 
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
