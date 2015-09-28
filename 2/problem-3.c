#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void sort(int array[], int n)
{
    // insert your code here
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
