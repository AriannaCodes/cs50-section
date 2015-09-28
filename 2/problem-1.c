#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool search(int value, int values[], int n)
{
    // Set values for the top and the bottom of the search
    int lower = 0;
    int upper = n - 1;

    // Binary search
    while (lower <= upper)
    {
        // insert code here
    }

    return false;
}


int main(void)
{
    int values[] = {3, 2, 10, 1, 5};
    if (search(1, values, 5))
    {
        printf("Success!\n");
    }
    else
    {
        printf("Failure.\n");
    }
}
