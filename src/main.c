#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include <string.h>

float version = 1.0;
char *inputHash;
char *hashType;

void print_usage() {
    printf("Usage: dehashr -i <input hash> -t <hash type> \n");
    exit(2);
}

void print_help() {
    printf(
        " _|  _  |_   _.  _ |_  ._  \n"
        "(_| (/_ | | (_| _> | | |  v%0.1f\n"
        "Performant Hash cracker\n"
        "\n"
        "Options:\n"
        "-i        Input Hash\n"
        "-t        Hashing algorithm type\n"
        "-l        list all available hashing algorithms\n",
        version
    );

    exit(0);
}

void print_hashing_algorithms() {
    printf(
        "Hashing Algorithms:\n"
        "MD2\n"
        "MD4\n"
        "MD5\n"
        "RIPEMD160\n"
        "TIGER\n"
        "TIGER1\n"
        "TIGER2\n"
        "HAVAL\n"
        "SHA-1\n"
        "SHA-224\n"
        "SHA-256\n"
        "SHA-384\n"
        "SHA-512\n"
        "SHA3-224\n"
        "SHA3-256\n"
        "SHA3-384\n"
        "SHA3-512\n"
        "SHAKE128\n"
        "SHAKE256\n"
        "WHIRLPOOL\n"
        "GOSTR-34.11-94\n"
        "STRIBOG256\n"
        "STRIBOG512\n"
        "BLAKE2B-160\n"
        "BLAKE2B-256\n"
        "BLAKE2B-384\n"
        "BLAKE2B-512\n"
        "BLAKE2S-128\n"
        "BLAKE2S-160\n"
        "BLAKE2S-224\n"
        "BLAKE2S-256\n"
    );

    exit(0);
}

int main(int argc, char **argv) {
    int options;
    while ((options = getopt(argc, argv, "i:t:h::l::")) != -1) {
        switch (options) {
            case 'h':
                print_help();

            case 'l':
                print_hashing_algorithms();

            case 'i':
                inputHash = optarg;
                printf("input: %s\n", inputHash);
                break;

            case 't':
                hashType = optarg;
                printf("hashtype: %s\n", hashType);
                break;

            default:
                print_usage();
        }
    }
    
    return 0;
}

