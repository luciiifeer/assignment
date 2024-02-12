#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp = fopen("Jerry.txt", "r");

    if (fp == NULL)
    {
        printf("File not Found");
        return 1;
    }

    char wd[50];
    int count = 0;
    while (fscanf(fp, "%s", wd) == 1)
    {
        count++;
    }

    printf("total number of words are: %d",count);
    fclose(fp);
    return 0;
}
