#include <gcrypt.h>
#include <stdio.h>

void SHA256() {
        // Lenght of specified Algorithm
        unsigned char digest[256];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_SHA256);
        int i;
        
        // String that gets hashed
        char *hash = "litgang";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_SHA256, digest, hash, strlen(hash));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);

}

void stringToSHA256() {
    // Lenght of specified Algorithm
    unsigned char digest[256];
    char hashed[32+1] = {0,};

    // Getting the lenght of the specified algorithm
    int digest_length = gcry_md_get_algo_dlen(GCRY_MD_SHA256);
    int i;

    // String that gets hashed
    char *hash = "litgang";

    // Specify algorythm
    gcry_md_hash_buffer(GCRY_MD_SHA256, digest, hash, strlen(hash));

    for (i=0; i < digest_length; i++) {
            sprintf(hashed+(i*2), "%02x", digest[i]);
    }
    printf("hash=%s\n", hashed);
}

void stringToMD4() {
    // Lenght of specified Algorithm
    unsigned char digest[128];
    char hashed[32+1] = {0,};

    // Getting the lenght of the specified algorithm
    int digest_length = gcry_md_get_algo_dlen(GCRY_MD_MD4);
    int i;

    // String that gets hashed
    char *hash = "litgang";

    // Specify algorythm
    gcry_md_hash_buffer(GCRY_MD_MD4, digest, hash, strlen(hash));

    for (i=0; i < digest_length; i++) {
            sprintf(hashed+(i*2), "%02x", digest[i]);
    }
    printf("hash=%s\n", hashed);
}

void stringToMD5() {
    // Lenght of specified Algorithm
    unsigned char digest[128];
    char hashed[32+1] = {0,};

    // Getting the lenght of the specified algorithm
    int digest_length = gcry_md_get_algo_dlen(GCRY_MD_MD5);
    int i;

    // String that gets hashed
    char *hash = "litgang";

    // Specify algorythm
    gcry_md_hash_buffer(GCRY_MD_MD5, digest, hash, strlen(hash));

    for (i=0; i < digest_length; i++) {
            sprintf(hashed+(i*2), "%02x", digest[i]);
    }
    printf("hash=%s\n", hashed);
}

void stringToRIPEMD160() {
    // Lenght of specified Algorithm
    unsigned char digest[128];
    char hashed[32+1] = {0,};

    // Getting the lenght of the specified algorithm
    int digest_length = gcry_md_get_algo_dlen(GCRY_MD_RMD160);
    int i;

    // String that gets hashed
    char *hash = "litgang";

    // Specify algorythm
    gcry_md_hash_buffer(GCRY_MD_RMD160, digest, hash, strlen(hash));

    for (i=0; i < digest_length; i++) {
            sprintf(hashed+(i*2), "%02x", digest[i]);
    }
    printf("hash=%s\n", hashed);
}

void stringToTIGER() {
    // Lenght of specified Algorithm
    unsigned char digest[192];
    char hashed[32+1] = {0,};

    // Getting the lenght of the specified algorithm
    int digest_length = gcry_md_get_algo_dlen(GCRY_MD_TIGER);
    int i;

    // String that gets hashed
    char *hash = "litgang";

    // Specify algorythm
    gcry_md_hash_buffer(GCRY_MD_TIGER, digest, hash, strlen(hash));

    for (i=0; i < digest_length; i++) {
            sprintf(hashed+(i*2), "%02x", digest[i]);
    }
    printf("hash=%s\n", hashed);
}

void stringToTIGER1() {
    // Lenght of specified Algorithm
    unsigned char digest[128];
    char hashed[32+1] = {0,};

    // Getting the lenght of the specified algorithm
    int digest_length = gcry_md_get_algo_dlen(GCRY_MD_TIGER1);
    int i;

    // String that gets hashed
    char *hash = "litgang";

    // Specify algorythm
    gcry_md_hash_buffer(GCRY_MD_TIGER1, digest, hash, strlen(hash));

    for (i=0; i < digest_length; i++) {
            sprintf(hashed+(i*2), "%02x", digest[i]);
    }
    printf("hash=%s\n", hashed);
}

void stringToTIGER2() {
    // Lenght of specified Algorithm
    unsigned char digest[128];
    char hashed[32+1] = {0,};

    // Getting the lenght of the specified algorithm
    int digest_length = gcry_md_get_algo_dlen(GCRY_MD_TIGER2);
    int i;

    // String that gets hashed
    char *hash = "litgang";

    // Specify algorythm
    gcry_md_hash_buffer(GCRY_MD_TIGER2, digest, hash, strlen(hash));

    for (i=0; i < digest_length; i++) {
            sprintf(hashed+(i*2), "%02x", digest[i]);
    }
    printf("hash=%s\n", hashed);
}

void stringToHAVAL() {
    // Lenght of specified Algorithm
    unsigned char digest[160];
    char hashed[32+1] = {0,};

    // Getting the lenght of the specified algorithm
    int digest_length = gcry_md_get_algo_dlen(GCRY_MD_HAVAL);
    int i;

    // String that gets hashed
    char *hash = "litgang";

    // Specify algorythm
    gcry_md_hash_buffer(GCRY_MD_HAVAL, digest, hash, strlen(hash));

    for (i=0; i < digest_length; i++) {
            sprintf(hashed+(i*2), "%02x", digest[i]);
    }
    printf("hash=%s\n", hashed);
}

int main(int argc, char *argv[]) {
    stringToHAVAL();
}

