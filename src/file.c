#include <stdio.h>
#include <sys/stat.h>

#include "file.h"

/*

int filesize(char *filename) {
    struct stat st;
    stat(filename, &st);
    static size = st.st_size;

    return size;
}

#define FILENAME "test.txt"
int main() {
   FILE *fp;
   char ch;
   int linesCount=0;
   //open file in read more
   fp=fopen(FILENAME,"r");
   if(fp==NULL) {
      printf("File \"%s\" does not exist!!!\n", FILENAME);
      return -1;
   }
   //read character by character and check for new line
   while((ch=fgetc(fp))!=EOF) {
      if(ch=='\n')
         linesCount++;
   }
   //close the file
   fclose(fp);
   //print number of lines
   printf("Total number of lines are: %d\n", linesCount);
   return 0;
}
*/