/*************************
*Armando Sallas
*CPSC 2311 Section 1
*asallas@clemson.edu
*************************/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
//Reads in data from file in and counts the number of sentences
//The number is output to a file out
void numSentences(FILE* in, FILE* out);

//Counts the number of words from file in and outputs that number
//to file out
void numWords(FILE* in, FILE* out);

#endif
