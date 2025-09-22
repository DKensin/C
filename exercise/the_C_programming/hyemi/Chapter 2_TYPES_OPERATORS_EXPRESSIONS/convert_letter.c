/**
 * write a function to convert uppercase - lowercase without if-else
 */

#include <stdio.h>

char convert_letter(char letter)
{
    char convert = (letter >= 'A' && letter <= 'Z') ? letter + 32 : letter;
    
    return convert;
}
int main(void)
{
    char letter;

    printf("enter letter: ");
    scanf("%c", &letter);

    // if (letter >= 'A' && letter <= 'Z')
    // {
    //     letter = letter + 32;
    // }
    char convert;

    convert = convert_letter(letter);

    printf("letter = %c", convert);

    return 0;
}