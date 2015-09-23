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
    // say hello to the user
    printf("Hello, %s!\n", argv[1]);
}

