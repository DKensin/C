/*  write an alternative version of squeeze (s1,s2) that delete each character
    in s1 that matches any character in the string s2
    Example Input:
            s1 = "hello world"
            s2 = "ole"
    Output: s1 = "h wrd"
*/

#include <stdio.h>
#define     SIZE    100

void squeeze(char s1[], char s2[]);
// int get_line(char *line, int max_line);
int get_line(char s[], int max_line);

int main(void)
{
    char s1[SIZE];
    char s2[SIZE];

    printf("Enter the first string: ");
    // fgets(s1, SIZE, stdin);                 /*read all character in s1 include space*/
    get_line(s1, SIZE);
    printf("Enter the second string: ");
    // fgets(s2, SIZE, stdin);                 /*read all character in s2 include space*/
    get_line(s2, SIZE);

    squeeze(s1, s2);
    printf("Character was deleted by s2: %s", s1);

    return 0;
}
int get_line(char s[], int size)
{
    int c, i;

    for (i = 0; i < size - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    s[i] = '\0';

    return i;
}

void squeeze(char s1[], char s2[])
{
    int i, j;
    int k = 0;
    int found;

    for (i = 0; s1[i] != '\0'; i++)
    {
        found = 0;
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s2[j] == s1[i])
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            s1[k] = s1[i];
            k++;
        }
    }

    s1[k] = '\0';
}
