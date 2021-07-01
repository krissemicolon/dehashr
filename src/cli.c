#include <stdlib.h>
#include <stdio.h>

#include "main.h"
#include "cli.h"

const char algorithms[][15] = {
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
        "(_| (/_ | | (_| _> | | |  " VERSION "\n"
        "Performant Hash-Cracker\n\n"
    );
}

void print_usage() {
    printf("Usage: dehashr -i <hash> -t <algorithm> \n");
}

void print_help() {
    print_logo();

    print_usage();

    printf(
        "Options:\n"
        "-h              Prints this help page\n"
        "-l              Lists hashing algorithms\n" 
        "-b              Select Bruteforce mode\n"
        "-w              Select Wordlist mode\n"
        "-i <hash>       Input the hash\n"
        "-a <algorithm>  Input the algorithm\n"
        "-o <filename>   [Optional] Enable saving result in file.\n"
        "                (Filename needs to be specified)\n"
        "-g <guess>      Guess the hash\n"
        "-t <threads>    [Optional] Specify amount of threads.\n"
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
