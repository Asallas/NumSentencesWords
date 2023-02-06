/*************************
*Armando Sallas
*CPSC 2311 Section 1
*asallas@clemson.edu
*************************/
#include "functions.h"
void numSentences(FILE* in, FILE* out)
{
    char i;
    char prev = ' ';
    int count = 0;

    //Checks for puntuation marks and only counts them if the previous
    //character is not a puntuation mark
    while((i = fgetc(in)) != EOF) {
      if(i == '!' || i == '?' || i == '.') {
        if((prev != '!' && prev != '?' && prev != '.')) {
          count += 1;
        }
      }
      prev = i;
    }
    //Writes the number of sentences to the file
    fprintf(out, "Total number of sentences: %d\n", count);
    //puts the file pointer to the beggining
    fseek(in, 0, SEEK_SET);

    return;
}

void numWords(FILE* in, FILE* out)
{
    char i = ' ';
    int count = 0;

    //Checks for whitespace and newlines to count the number of numWords
    //Assumes that the file is properly written with a space after the
    //puntuation mark and no space before the mark.
    while((i = fgetc(in)) != EOF) {
      if(i == ' ' || i == '\n' || i == '\0' || i == '\t') {
        count += 1;
      }
    }
    //Writes the number of words to the file
    fprintf(out, "Total number of words: %d\n", count);

    return;
}
