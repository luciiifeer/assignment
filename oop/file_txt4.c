#include <stdio.h>
int main()
{
    FILE *fp = fopen("Jerry.txt", "r");
    FILE *gp = fopen("vowel.txt", "w");
    FILE *hp = fopen("consonant.txt", "w");

    int ch;
    while ((ch= getc(fp)) != EOF)
    {
        char letter = ch;
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
            letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
        {
            fputc(letter,gp);
            fputc(' ', gp);
        }
        else
        {
            fputc(letter,hp);
            fputc(' ',hp);
        }
    }

    return 0;
}
