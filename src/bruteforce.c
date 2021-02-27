#include <stdio.h>
#include <gcrypt.h>

#include "include/hashing.h"
#include "include/bruteforce.h"

#define MAX_SIZE 30
#define CHAR_COUNT 92

void bruteforce() {
    const char characters[CHAR_COUNT+1] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1203495687.!-@*_$#/,+%&?;=~^)[\\]`(:<'>|\"";
    int i;
	int j;
    int guessCount[MAX_SIZE] = {0};
    char guess[MAX_SIZE+1];

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

        printf("%s\n", hash(GCRY_MD_SHA256, guess));

        ++guessCount[0];
    }
}
