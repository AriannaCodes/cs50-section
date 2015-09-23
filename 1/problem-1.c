#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int ages[] = {3, 12, 14, 5, 55};
    int sum = 0;
    // iterate over ages, adding them to sum
    for (int i = 0; i < 5; i++) {
        sum += ages[i];
    }
    printf("The sum of the ages is %i\n", sum);
}
