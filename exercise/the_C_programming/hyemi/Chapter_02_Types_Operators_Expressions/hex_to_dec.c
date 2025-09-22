/*  write a function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X)
    into its equivalent integer value
    The allowable digits arre 0 through 9, a through z and A through F
*/

#include <stdio.h>

int htoi (char s[]);

int main (void)
{
    char string[100];
    int result;

    printf("enter hexadecimal: ");
    scanf("%s", string);

    result = htoi(string);
    if (result == -1)
    {
        printf("Invalid value");
    }
    else
    {
        printf("Result = %d\n", result);
    }

    return 0;
}

int htoi (char s[])
{
    int i, n, value;

    n = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '0' && (s[i + 1] == 'x' || s[i + 1] == 'X'))
        {
            i++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            value = s[i] - '0';
            n = 16 * n + value;
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            value = s[i] - 'A' + 10;
            n = 16 * n + value;
        }
        else if (s[i] >= 'a' && s[i] <= 'f')
        {
            value = s[i] - 'a' + 10;
            n = 16 * n + value;
        }
        else
        {
            return -1;
        }

    }

    return n;
}