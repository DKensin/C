/*  🧩 Given:   Two strings (character arrays): s1[] and s2[].
    🎯 Goal:
    Search through s1, one character at a time.
    Check: "Is this character also in s2?"
    If yes → return the position (index) where that happens in s1.
    If never found → return -1.
    ====
    input:
    s1 = "hello"
    s2 = "world"

    output: 'l' -> index 2 (s1)
*/

#include <stdio.h>
#define     SIZE    100

int is_match(char s1[], char s2[]);
// int get_line(char *line, int max_line);
int get_line(char s[], int max_line);

int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    int pos;

    printf("Enter the first string: ");
    // fgets(s1, SIZE, stdin);                 /*read all character in s1 include space*/
    get_line(s1, SIZE);
    printf("Enter the second string: ");
    // fgets(s2, SIZE, stdin);                 /*read all character in s2 include space*/
    get_line(s2, SIZE);

    pos = is_match(s1, s2);
    if (pos != -1)
    {
        printf("Position of the character is matched: %d\n", pos);
    }
    else
    {
        printf("No character is not match\n");
    }
    // printf("Character was deleted by s2: %s", s1);

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

int is_match(char s1[], char s2[])
{
    int i, j;

    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                return i;
            }
        }
    }
    return -1;
}
