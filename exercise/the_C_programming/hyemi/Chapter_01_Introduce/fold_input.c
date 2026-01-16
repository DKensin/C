/** write a program to fold long input lines into two or more shorter lines after the last non-blanks character that occurs before the n-th column of input
 * make sure your program does something intelligent with very long inputs, and if there are no blanks or tabs before the specified column
 * example:
 * input:   Hello how are you doing today
 * output:  Hello how
            are you
            doing
            today
*/

#include <stdio.h>
#define MAX_LINE    1000
#define MAX_PER_LINE    10

int get_line(char *line, int limit_line);

int main(void)
{
    int len;
    int i;
    char arr[MAX_LINE];

    while ((len = get_line(arr, MAX_LINE)) > 0)
    {
        if (len < MAX_PER_LINE)
        {
            printf("%s", arr);
        }
        else
        {
            for (i = MAX_PER_LINE; i < len; i += MAX_PER_LINE)
            {
                if (arr[i] != ' ')
                {
                    while(i > 0 && arr[i] != ' ')
                    {
                        i--;
                    }
                    arr[i + 1] = '\n';
                }
                else if (arr[i] == ' ')
                {
                    arr[i] = '\n';
                }
                else if (i > len)
                {
                    break;
                }
            }
            printf("%s", arr);
        }
    }

    return 0;

}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}