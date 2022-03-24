#include <stdio.h>
 
int main(void) {
    FILE *fptr;
    char file[15] = "quine.c";
    char ch;

    fptr = fopen(file, "r");
    ch = fgetc(fptr);
    while (ch != EOF) {
        printf ("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
}
