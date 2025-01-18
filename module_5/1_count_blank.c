/* count blanks and new lines in input */

/* Input:

But soft what light through yonder window breaks
It is the east and Juliet is the sun
Arise fair sun and kill the envious moon
Who is already sick and pale with grief

*/

#include <stdio.h>

int main() {
    char c;
    int bl, nl;
    nl = 0;
    bl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        } else if (c == ' ') {
            ++bl;
        }
    }
    printf("%d %d\n", bl, nl);
}
