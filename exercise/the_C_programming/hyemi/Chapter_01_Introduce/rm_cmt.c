#include <stdio.h>

#define NORMAL              0
#define IN_STRING           1
#define IN_CHAR             2
#define IN_LINE_COMMENT     3
#define IN_BLOCK_COMMENT    4

int main(void)
{
    int c, next;
    int prev = 0;
    int cnt = 0;
    int state = NORMAL;

    while ((c = getchar()) != EOF)
    {
        if (c == '"')
        {
            putchar(c);
            state = IN_STRING;
        }
        else if (c == '/')
        {
            next = getchar();
            if (next == '/')
            {
                state = IN_LINE_COMMENT;
                break;
            }
            else if (next == '*')
            {
                state = IN_BLOCK_COMMENT;
                prev = 0;
                while ((c = getchar()) != EOF)
                {
                    if (prev == '*' && c == '/')
                    {
                        break;
                    }
                    prev = c;
                }
                state = NORMAL;
            }
        }
        else
        {
            putchar(c);
        }

    }

    return 0;
}