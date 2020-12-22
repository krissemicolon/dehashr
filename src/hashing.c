#include <stdio.h>
#include <gcrypt.h>

char *hash(int algorithm, char *inputString) {
    // Lenght of specified Algorithm
    unsigned char digest[256];
    char outputHash[32+1] = {0,};

    // Getting the lenght of the specified algorithm
    int digest_length = gcry_md_get_algo_dlen(algorithm);

    // Hashing with selected algorithm
    gcry_md_hash_buffer(algorithm, digest, inputString, strlen(inputString));

    for (int i=0; i < digest_length; i++) {
            sprintf(outputHash+(i*2), "%02x", digest[i]);
    }
    printf("hash=%s\n", outputHash);

    return outputHash;
}

