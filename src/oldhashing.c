#include <gcrypt.h>

void stringToMD4() {
    // Lenght of specified Algorithm
    unsigned char digest[128];
    char hashed[32+1] = {0,};

    // Getting the lenght of the specified algorithm
    int digest_length = gcry_md_get_algo_dlen(GCRY_MD_MD4);
    int i;

    // String that gets hashed
    char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_MD4, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToMD5(char *hash) {
        // Lenght of specified Algorithm
        unsigned char digest[128];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_MD5);
        int i;

        // String that gets hashed
        char *inputString = "test";

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
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_RMD160, digest, inputString, strlen(inputString));

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
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_TIGER, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToTIGER1() {
        // Lenght of specified Algorithm
        unsigned char digest[192];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_TIGER1);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_TIGER1, digest, inputString, strlen(inputString));

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
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_TIGER2, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToSHA1() {
        // Lenght of specified Algorithm
        unsigned char digest[160];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_SHA1);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_SHA1, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToSHA224() {
        // Lenght of specified Algorithm
        unsigned char digest[224];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_SHA224);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_SHA224, digest, inputString, strlen(inputString));

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
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_SHA256, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        /* printf("hash=%s\n", hashed); */
    }

    void stringToSHA384() {
        // Lenght of specified Algorithm
        unsigned char digest[384];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_SHA384);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_SHA384, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToSHA512() {
        // Lenght of specified Algorithm
        unsigned char digest[512];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_SHA512);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_SHA512, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToSHA3_224() {
        // Lenght of specified Algorithm
        unsigned char digest[224];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_SHA3_224);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_SHA3_224, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToSHA3_256() {
        // Lenght of specified Algorithm
        unsigned char digest[256];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_SHA3_256);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_SHA3_256, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToSHA3_384() {
        // Lenght of specified Algorithm
        unsigned char digest[384];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_SHA3_384);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_SHA3_384, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToSHA3_512() {
        // Lenght of specified Algorithm
        unsigned char digest[512];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_SHA3_512);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_SHA3_512, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToSHAKE128() {
        // Lenght of specified Algorithm
        unsigned char digest[128];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_SHAKE128);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_SHAKE128, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToSHAKE256() {
        // Lenght of specified Algorithm
        unsigned char digest[256];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_SHAKE256);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_SHAKE256, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToWHIRLPOOL() {
        // Lenght of specified Algorithm
        unsigned char digest[64];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_WHIRLPOOL);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_WHIRLPOOL, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToGOSTR3411_94() {
        // Lenght of specified Algorithm
        unsigned char digest[256];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_GOSTR3411_94);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_GOSTR3411_94, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToSTRIBOG_256() {
        // Lenght of specified Algorithm
        unsigned char digest[256];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_STRIBOG256);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_STRIBOG256, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToSTRIBOG_512() {
        // Lenght of specified Algorithm
        unsigned char digest[512];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_STRIBOG512);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_STRIBOG512, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToBLAKE2B_160() {
        // Lenght of specified Algorithm
        unsigned char digest[160];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_BLAKE2B_160);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_BLAKE2B_160, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToBLAKE2B_256() {
        // Lenght of specified Algorithm
        unsigned char digest[256];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_BLAKE2B_256);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_BLAKE2B_256, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToBLAKE2B_384() {
        // Lenght of specified Algorithm
        unsigned char digest[384];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_BLAKE2B_384);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_BLAKE2B_384, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToBLAKE2B_512() {
        // Lenght of specified Algorithm
        unsigned char digest[512];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_BLAKE2B_512);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_BLAKE2B_512, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToBLAKE2S_128() {
        // Lenght of specified Algorithm
        unsigned char digest[128];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_BLAKE2S_128);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_BLAKE2S_128, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToBLAKE2S_160() {
        // Lenght of specified Algorithm
        unsigned char digest[160];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_BLAKE2S_160);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_BLAKE2S_160, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToBLAKE2S_224() {
        // Lenght of specified Algorithm
        unsigned char digest[224];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_BLAKE2S_224);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_BLAKE2S_224, digest, inputString, strlen(inputString));

        for (i=0; i < digest_length; i++) {
                sprintf(hashed+(i*2), "%02x", digest[i]);
        }
        printf("hash=%s\n", hashed);
    }

    void stringToBLAKE2S_256() {
        // Lenght of specified Algorithm
        unsigned char digest[256];
        char hashed[32+1] = {0,};

        // Getting the lenght of the specified algorithm
        int digest_length = gcry_md_get_algo_dlen(GCRY_MD_BLAKE2S_256);
        int i;

        // String that gets hashed
        char *inputString = "test";

        // Specify algorythm
        gcry_md_hash_buffer(GCRY_MD_BLAKE2S_256, digest, inputString, strlen(inputString));

    for (i=0; i < digest_length; i++) {
            sprintf(hashed+(i*2), "%02x", digest[i]);
    }
    printf("hash=%s\n", hashed);
}

int main() {
    for (int i =0; i < 10000000; i++) {
        stringToSHA256();
    }

}

