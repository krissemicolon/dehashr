#include <stdio.h>
#include <bool.h>
#include <string.h>
#include <gcrypt.h>

#include "main.h"
#include "hashing.h"
#include "bruteforce.h"

#define MAX_SIZE 30
#define CHAR_COUNT 94

void bruteforce(char *hash_str) {
    const char characters[CHAR_COUNT + 1] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1203495687.!-@*_$#/,+%&?;=~^)[\\]`(:<'>|\"";
    bool cracked = false;
    int i;
	int j;
    register int guessCount[MAX_SIZE] = {0};
    static char guess[MAX_SIZE+1];

    for(i = 1; i < MAX_SIZE; guessCount[i++] = -1);
    for(i = 1; i <= MAX_SIZE; guess[i++] = '\0');

    while(!cracked) {
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
        
        if (val == 0) {
            printf("Result: %s\n", gus);
            exit(0);
        } 

        //puts(guess);
        puts(hash(ggus, GCRY_MD_SHA256, 256));
        ++guessCount[0];
    }
    

}

void threaded_bruteforce(int thread_amount, char *hash_str) {}