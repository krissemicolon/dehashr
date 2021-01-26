#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <stdbool.h>
#include <gcrypt.h>

/* If the compiler fucks up, catch it. */
#ifndef VERSION
#define VERSION "Something went wrong with version"
#endif

// User Input & settings
char *inputHash;
char *algorithm;
char *outputFilename;
bool outputToFile = false;
int threadAmount;
short algorithmSelectedNum;
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
char gcryAlgorithms[][20] = {
    "GCRY_MD_MD4",
    "GCRY_MD_MD5",
    "GCRY_MD_RMD160",
    "GCRY_MD_TIGER",
    "GCRY_MD_TIGER1",
    "GCRY_MD_TIGER2",
    "GCRY_MD_SHA1",
    "GCRY_MD_SHA224",
    "GCRY_MD_SHA256",
    "GCRY_MD_SHA384",
    "GCRY_MD_SHA512",
    "GCRY_MD_SHA3_224",
    "GCRY_MD_SHA3_256",
    "GCRY_MD_SHA3_384",
    "GCRY_MD_SHA3_512",
    "GCRY_MD_SHAKE128",
    "GCRY_MD_SHAKE256",
    "GCRY_MD_WHIRLPOOL",
    "GCRY_MD_GOSTR3411_94",
    "GCRY_MD_STRIBOG256",
    "GCRY_MD_STRIBOG512",
    "GCRY_MD_BLAKE2B_160",
    "GCRY_MD_BLAKE2B_256",
    "GCRY_MD_BLAKE2B_384",
    "GCRY_MD_BLAKE2B_512",
    "GCRY_MD_BLAKE2S_128",
    "GCRY_MD_BLAKE2S_160",
    "GCRY_MD_BLAKE2S_224",
    "GCRY_MD_BLAKE2S_256"
};

// Prototypes
void print_logo(void);
void print_usage(void);
void print_help(void);
void print_algorithms(void);

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
                printf("Feature not available yet.\n");
                break;

            case 't':
                threadAmount = optarg; 
                printf("%i\n", threadAmount);
                break;

            default:
                print_usage();
                printf("dehashr -h for more information\n");
                exit(2);
        }
    }

    // generate(4);

/*
    for(int i = 0; i < 29; i++) {
        if(strcmp(algorithm, algorithms[i]) == 0) {
            algorithmSelectedNum = i + 1;
            break;
        }
    }
*/
    return 0;
}

// --------------------------------------------
// CLI Functions
// --------------------------------------------

void print_logo() {
    printf(
        " _|  _  |_   _.  _ |_  ._  \n"
        "(_| (/_ | | (_| _> | | |  " VERSION "\n"
        "Performant Hash-Cracker\n\n"
    );
}

void print_usage() {
    printf("Usage: dehashr -i <inputHash> -t <algorithm> \n");
}

void print_help() {
    print_logo();

    print_usage();

    printf(
        "Options:\n"
        "-h              Print the help page\n"
        "-l              list all available inputHashing algorithms\n" 
        "-i <inputHash>  inputHash\n"
        "-a <algorithm>  hash algorithm\n"
        "-o <filename>   [Optional] Enable saving result in file.\n"
        "                (Filename needs to be specified)\n"
        "-g <guess>      guess the result\n"
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
