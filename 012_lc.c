#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int count_chars;

    if (argc == 1)
    {
        count_chars = 0;
    }
    else if (argc == 2 && strcmp(argv[1], "-c") == 0)
    {
        count_chars = 1;
    }
    else
    {
        fprintf(stderr, "%s : syntax error\n", argv[0]);
        exit(1);
    }

    long line_count = 0;
    long char_count = 0;

    int c;
    while ((c = getchar()) != EOF)
    {
        char_count++;
        if (c == '\n')
        {
            line_count++;
        }
    }

    if (count_chars)
    {
        printf("%ld\n", char_count);
    }
    else
    {
        printf("%ld\n", line_count);
    }

    return 0;
}
