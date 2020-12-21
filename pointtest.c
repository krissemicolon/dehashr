#include <stdio.h>
#include <gcrypt.h>

void hashing(int algorithm, char *inputString) {
    // Lenght of specified Algorithm
    unsigned char digest[256];
    char outputHash[32+1] = {0,};

    // Getting the lenght of the specified algorithm
    int digest_length = gcry_md_get_algo_dlen(algorithm);

    // Specify algorythm
    gcry_md_hash_buffer(algorithm, digest, inputString, strlen(inputString));

    for (int i=0; i < digest_length; i++) {
            sprintf(outputHash+(i*2), "%02x", digest[i]);
            printf(outputHash+(i*2), "%02x", digest[i]);
            printf("\n");
    }
    printf("hash=%s\n", outputHash);
}

int main() {
    hashing(GCRY_MD_SHA256, "litgang");

    return 0;
}
