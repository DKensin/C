/**
 * Exercise 1-16. Revise the main routine of the longest-line program
 * so it will correctly print the length of arbitrarily long input lines,
 * and as much as possible of the text.
 */

#include <stdio.h>
#include <stdlib.h>

#define CHUNK       (100u)

int get_line(char **line);
void copy(char **to, char *from);

int main(void)
{
    char *line = NULL;
    char *longest = NULL;
    int len = 0;
    int max = 0;

    while ((len = get_line(&line)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(&longest, line);
        }
        free(line);
    }

    if (max > 0)
    {
        printf("------------------ longest line ---------------------\n");
        printf("%s\n", longest);
    }

    free(longest);

    return 0;
}

int get_line(char **line)
{
    int c;
    int len = -1;
    int capacity = CHUNK;

    *line  = (char *)malloc(capacity * sizeof(char));

    if (NULL != (*line))
    {
        while ((EOF != (c = getchar())) && (c != '\n'))
        {
            if (len >= (capacity - 1))
            {
                capacity += CHUNK;
                *line = realloc(*line, capacity * sizeof(char));
                if (NULL == (*line))
                {
                    len = -1;
                    break;
                }
            }
            (*line)[++len] = c;
        }
    }
    if (c == '\n')
    {
        (*line)[len] = c;
        len++;
    }
    (*line)[len] = '\0';

    return len;
}

void copy(char **to, char *from)
{
    int len = 0;
    *to = NULL;

    while (from[len] != '\0')
    {
        len++;
    }

    *to = (char *)realloc(*to, (len + 1) * sizeof(char));
    len = 0;

    if (NULL != *to)
    {
        while (from[len] != '\0')
        {
            (*to)[len] = from[len];
            len++;
        }
    }
}