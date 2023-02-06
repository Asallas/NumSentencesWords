/*************************
*Armando Sallas
*CPSC 2311 Section 1
*asallas@clemson.edu
*************************/
#include "functions.h"
int main(int argc, char* argv[])
{
    FILE* inFile;
    FILE* outFile;

    //Opens files and checks to make sure they open properly
    inFile = fopen(argv[1], "r");
    if(inFile == NULL) {
      printf("Error");
      return 1;
    }
    outFile = fopen("output.txt", "w+");
    if(outFile == NULL) {
      printf("Error");
      return 1;
    }

    //Calls the functions
    numSentences(inFile, outFile);
    numWords(inFile, outFile);

    //Closes the files
    fclose(inFile);
    fclose(outFile);

    return 0;
}
