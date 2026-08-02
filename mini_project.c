#include <stdio.h>

int main()
{
    char str[200], *p;
    int words = 0;

    // Read input sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    p = str;

    // Count words using pointer
    while (*p != '\0')
    {
        if ((*p != ' ' && *p != '\n') &&
            (*(p + 1) == ' ' || *(p + 1) == '\n' || *(p + 1) == '\0'))
        {
            words++;
        }

        p++;
    }

    // Display total number of words
    printf("Total Words = %d", words);

    return 0;
}