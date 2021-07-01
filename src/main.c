/* 
 * This file is part of the dehashr distribution (https://github.com/krissemicolon/dehashr).
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

typedef struct {
    char *input_hash;
    char *algorithm;
    char *output_filename;
    char *guess;
    bool output_to_file;
    mode selected_mode;
    int thread_amount;
} settings;

int main(int argc, char **argv) {
    // Init settings struct with default values
    settings stg = {
        .output_to_file = false,
        .selected_mode = BRUTEFORCE,
    };

    int options;
    while ((options = getopt(argc, argv, "hlbwi:a:o:g:t:")) != -1) {
        switch (options) {
            /* [-h] Prints Help Page */
            case 'h':
                print_help();
                break;

            /* [-l] Lists hashing algorithms */
            case 'l':
                print_algorithms();
                break;

            /* [-b] Select Bruteforce mode */            
            case 'b':
                stg.selected_mode = BRUTEFORCE;
                break;

            /* [-w] Select Wordlist mode */ 
            case 'w':
                stg.selected_mode = WORDLIST;
                break

            /* [-i] Input the hash */
            case 'i':
                stg.input_hash = optarg;
                break;

            /* [-a] Input the algorithm */
            case 'a':
                stg.algorithm = optarg;
                printf("algorithm: %s\n", algorithm);
                break;

            /* [-o] Enable output to File and choose filename */
            case 'o':
                stg.output_filename = optarg;
                stg.output_to_file = true;
                break;

            /* [-g] Guess the hash */
            case 'g':
                puts("Feature not available yet.");
                stg.guess = optarg;
                break;

            /* [-t] Input the amount of threads you wish to use */
            case 't':
                puts("Feature not available yet.");
                if(optarg == NULL) {
                    stg.thread_amount = calc_thread_amount();
                } else {
                    srg.thread_amount = atoi(optarg); 
                }
                break;
        }
    }

    if(optind == 1) {
        print_usage();
        puts("dehashr -h for more information");
        exit(1);
    }

    switch(stg.selected_mode) {
        BRUTEFORCE:
            break;
        
        WORDLIST:
            puts("Mode not available yet.");
            break;
    }

    return 0;
}
