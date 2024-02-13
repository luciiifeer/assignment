// program to count total number of spaces
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fg = fopen("nusrat.txt", "r");
    if (fg == NULL)
    {
        printf("ERROR! File not Found");
        return 1;
    }

    int cC, sc = 0;

    while ((cC = fgetc(fg)) != EOF)
    {
        if (cC == ' ')
        {
            sc++;
        }
    }

    printf("Total number of spaces are: %d", sc);
    fclose(fg);
    return 0;
}
