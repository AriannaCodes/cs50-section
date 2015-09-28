#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void sort(int array[], int n)
{
    // cycle through array
    for (int k = 0; k < n - 1; k++)
    {
        // optimize; check if there are no swaps
        int swaps = 0;

        // swap adjacent elements if out of order
        for(int i = 0; i < n - 1 - k; i++)
        {
            // insert your code here
        }

        if (!swaps)
            break;
    }
}

int main(void)
{
    int values[] = {3, 2, 10, 1, 5};
    sort(values, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", values[i]);
    }
    printf("\n");
}
