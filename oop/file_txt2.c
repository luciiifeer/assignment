#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("Jerry.txt", "r");

    int ch, spaceCount = 0;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == ' ')
        {
            spaceCount++;
        }
    }

    printf("Total number of spaces are: %d", spaceCount);
    fclose(fp);
    return 0;
}
