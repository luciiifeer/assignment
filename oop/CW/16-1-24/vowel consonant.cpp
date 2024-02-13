// program to separate vowel consonant
#include <stdio.h>
int main()
{
    FILE *txtFile1 = fopen("nusrat.txt", "r");
    FILE *txtFile2 = fopen("vowels.txt", "w");
    FILE *txtFile3 = fopen("consonants.txt", "w");
    if (txtFile1 == NULL || txtFile2 == NULL)
    {
        printf("ERROR! File not Found");
        return 1;
    }

    int character;
    while ((character = getc(txtFile1)) != EOF)
    {
        char letter = (char)character;
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
            letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
        {
            fputc(letter, txtFile2);
            fputc(' ', txtFile2);
        }
        else
        {
            fputc(letter, txtFile3);
            fputc(' ', txtFile3);
        }
    }

    return 0;
}
