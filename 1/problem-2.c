#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string greeting = "hello";
    // iterate over all characters in the word
    // remember, a string is just an array!
    for (int i = 0; i < strlen(greeting); i++) {
        printf("%c*", greeting[i]);
    }
    printf("\n");
}
