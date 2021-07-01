#include <stdio.h>
#include <string.h>
#include <gcrypt.h>

#include "main.h"
#include "hashing.h"
#include "bruteforce.h"

#define MAX_SIZE 30
#define CHAR_COUNT 92

void bruteforce(char *hashinput) {
    const char characters[CHAR_COUNT+1] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1203495687.!-@*_$#/,+%&?;=~^)[\\]`(:<'>|\"";
    int i;
	int j;
    int guessCount[MAX_SIZE] = {0};
    static char guess[MAX_SIZE+1];

    for(i = 1; i < MAX_SIZE; guessCount[i++] = -1);
    for(i = 1; i <= MAX_SIZE; guess[i++] = '\0');

    for(;;) {
        i = 0;
        while(guessCount[i] == CHAR_COUNT) {
            guessCount[i] = 0;
            guessCount[++i] += 1;
        }

        for(j = 0; j <= i; ++j) {
            if(j < MAX_SIZE) {
				guess[j] = characters[guessCount[j]];
			}
        }
        
        char gus[256];
        char ggus[256];
        char hgus[256];
        strcpy(gus, guess);
        strcpy(ggus, guess);

        strcpy(hgus, hash(ggus, GCRY_MD_SHA256, 256));
        int val = memcmp(hgus, inputHash, 5 * sizeof(char));
        //int val = 1; 

        if (val == 0) {
            printf("Result: %s\n", gus);
            exit(0);
        } 

        //puts(guess);
        puts(hash(ggus, GCRY_MD_SHA256, 256));
        ++guessCount[0];
    }
    

}
