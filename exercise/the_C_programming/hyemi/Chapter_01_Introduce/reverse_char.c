/* reverse its input a line at a time */

#include <stdio.h>
#define SIZE 1000

int myString(char arr[], int lim);
void reverse(char to[], char from[]);

int main(void)
{
    int len;                    /* current line length */
    char line[SIZE];            /* current input line */
    char swap_char[SIZE];         /* input line reversed */

    while ((len = myString(line, SIZE)) > 0)
    {
        reverse(swap_char, line);
        printf("%s\n", swap_char);
    }

    return 0;
}

/* read a line into arr */
int myString(char arr[], int lim)
{
    int ch, i;

    for (i = 0; i < lim - 1 && (ch = getchar()) != EOF && ch != '\n'; i++)
    {
        arr[i] = ch;              //save each element in array
    }
    if (ch == '\n')
    {
        arr[i] = ch;
        i++;
    }
    arr[i] = '\0';

    return i;
}

void reverse(char to[], char from[])
{
    int i = 0;
    while (from[i] != '\0')
    {
        i++;  // i = 13
    }

    int j = 0;
    for (j = 0; j < i; j++)
    {
        to[j] = from[i - 1 - j];
    }
    to[j] = '\0';
}
