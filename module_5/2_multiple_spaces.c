// Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

/* Input:

But soft  what light     through yonder window breaks
It is    the east and  Juliet is the sun
Arise fair sun   and kill the envious moon
Who  is  already  sick  and  pale  with  grief

*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int c;
    bool prevBlank = false;

    while((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
            prevBlank = false;
            continue;
        } 
        if (prevBlank == false) {
            putchar(c);
            prevBlank = true;
        }
    }

}

