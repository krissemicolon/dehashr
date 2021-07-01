/* 
 * This file is part of the dehash distribution (https://github.com/krissemicolon/dehashr).
 * Copyright (c) 2021 Kris Huber.
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <stdbool.h>
#include <gcrypt.h>
#include <ctype.h>

#include "cli.h"
#include "threads.h"
#include "hashing.h"
#include "bruteforce.h"
#include "main.h"

// User Input & settings
char *input_hash;
char *algorithm;
char *output_filename;
char *guess;
bool output_to_file = false;
mode selected_mode = BRUTEFORCE;
int thread_amount;

int main(int argc, char **argv) {
    int options;
    while ((options = getopt(argc, argv, "hlbwi:a:o:g:t:")) != -1) {
        switch (options) {
            /* [-h] Prints Help */
            case 'h':
                print_help();
                break;

            /* [-l] Lists hashing algorithms */
            case 'l':
                print_algorithms();
                break;

            /* [-b] Select Bruteforce mode */            
            case 'b':
                selected_mode = BRUTEFORCE;
                break;

            /* [-w] Select Wordlist mode */ 
            case 'w':
                selected_mode = WORDLIST;
                break

            /* [-i] Input the hash */
            case 'i':
                input_hash = optarg;
                break;

            /* [-a] Input the algorithm */
            case 'a':
                algorithm = optarg;
                printf("algorithm: %s\n", algorithm);
                break;

            /* [-o] Enable output to File and choose filename */
            case 'o':
                output_filename = optarg;
                output_to_file = true;
                break;

            /* [-g] Guess the hash */
            case 'g':
                puts("Feature not available yet.");
                guess = optarg;
                break;

            /* [-t] Input the amount of threads you wish to use */
            case 't':
                puts("Feature not available yet.");
                if(optarg == NULL) {
                    thread_amount = calc_thread_amount();
                } else {
                    thread_amount = atoi(optarg); 
                }
                break;
        }
    }

    if(optind == 1) {
        print_usage();
        puts("dehashr -h for more information");
        exit(2);
    }

    switch(selected_mode) {
        BRUTEFORCE:
            break;
        
        WORDLIST:
            puts("Mode not available yet.");
            break;
    }

    return 0;
}
