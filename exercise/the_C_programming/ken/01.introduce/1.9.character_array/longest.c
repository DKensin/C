/** print the longest line: below is the main idea
 * while (another line)
 *      if (longer than all previous lines)
 *          save it
 *          save it lenght
 * print the longest
 */

#include <stdio.h>

#define MAX_LINE        (1000u)

int get_line(char s[], int limit);
void copy(char to[], char from[]);

int main(void)
{
    char line[MAX_LINE];        /* current line */
    char longest[MAX_LINE];     /* store longest line */
    int len = 0;                /* current len */
    int max = 0;                /* record maximum len */

    while ((len = get_line(line, MAX_LINE)) > 0)
    {
        if (len > max)
        {
            copy(longest, line);
            max = len;
        }
    }

    if (max > 0)    /* valid input line */
    {
        printf("----------------- Longest line ---------------------------------\n");
        printf("%s\n", longest);
    }

    return 0;
}

int get_line(char s[], int limit)
{
    int i = 0;
    int c;

    /* for &&, comparison from left to right */
    for (i = 0; ((i < limit - 1) && (EOF != (c = getchar())) && (c != '\n')); i++)
    {
        s[i] = c;
    }
    if (c == '\n')  /* new-line character */
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';    /* terminate string */

    return i;
}

void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0')
    {
        i++;
    }
}