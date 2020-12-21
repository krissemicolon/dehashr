#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <stdbool.h>

float version = 1.0;

// User Input & settings
char *inputHash;
char *algorithm;
char *outputFilename;
bool outputToFile = false;
char algorithms[][15] = {
    "MD4",
    "MD5",
    "RIPEMD-160",
    "TIGER",
    "TIGER1",
    "TIGER2",
    "SHA-1",
    "SHA-224",
    "SHA-256",
    "SHA-384",
    "SHA-512",
    "SHA3-224",
    "SHA3-256",
    "SHA3-384",
    "SHA3-512",
    "SHAKE-128",
    "SHAKE-256",
    "WHIRLPOOL",
    "GOSTR-34.11-94",
    "STRIBOG-256",
    "STRIBOG-512",
    "BLAKE2B-160",
    "BLAKE2B-256",
    "BLAKE2B-384",
    "BLAKE2B-512",
    "BLAKE2S-128",
    "BLAKE2S-160",
    "BLAKE2S-224",
    "BLAKE2S-256"
};

void print_logo() {
    printf(
        " _|  _  |_   _.  _ |_  ._  \n"
        "(_| (/_ | | (_| _> | | |  v%0.1f\n"
        "Performant Hash-Cracker\n\n",
        version
    );
}

void print_usage() {
    printf(
        "Usage: dehashr -i <inputHash> -t <algorithm> \n"
        "dehashr -h for more information\n"
        );
}

void print_help() {
    print_logo();

    printf("Usage: dehashr -i <inputHash> -t <algorithm> \n\n");

    printf(
        "Options:\n"
        "-h              Print the help page\n"
        "-l              list all available inputHashing algorithms\n" 
        "-i <inputHash>  inputHash\n"
        "-a <algorithm>  hash algorithm\n"
        "-o <filename>   [Optional] Enable saving result in file.\n"
        "                (Filename needs to be specified)\n"
        "-t <amount>     [Optional] Specify amount of threads. \n"
        "                Default: Calculates most efficient amount\n"
        );

    exit(0);
}

void print_algorithms() {
    print_logo();

    printf("Hashing Algorithms:\n");

    for (int i = 0; i < 29; i++) {
        printf("%s\n", algorithms[i]);
    }

    exit(0);
}

int main(int argc, char **argv) {
    int options;
    while ((options = getopt(argc, argv, "hli:t:o:")) != -1) {
        switch (options) {
            case 'h':
                print_help();

            case 'l':
                print_algorithms();

            case 'i':
                inputHash = optarg;
                printf("input: %s\n", inputHash);
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

            default:
                print_usage();
                exit(2);
        }
    }
    
    return 0;
}

