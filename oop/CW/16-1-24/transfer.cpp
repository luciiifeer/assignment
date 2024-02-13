// program to transfer the first characters
#include <stdio.h>
int main()
{
    FILE *f1 = fopen("nusrat.txt", "r");
    FILE *f2 = fopen("getFirstLetters.txt", "w");

    char word[15];
    while (fscanf(f1, "%s", word) == 1)
    {
        char FL = word[0];

        fputc(FL, f2);
    }

    return 0;
}
