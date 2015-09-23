#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // check that we have enough arguments
    if (argc < 2) {
        printf("You don't have enough arguments!\n");
        return 1;
    }
    // print out the first character of the second element
    printf("%c\n", argv[1][0]);
}

