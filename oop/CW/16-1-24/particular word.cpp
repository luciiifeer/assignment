// program to count a particular word
#include <stdio.h>
#include <string.h>

int main()
{

    FILE *txtFile = fopen("nusrat.txt", "r");
    if (txtFile == NULL)
    {
        printf("ERROR! File not Found");
        return 1;
    }

    char search[10];
    char word[20];
    int countWord = 0;
    scanf("%s", search);

    while (fscanf(txtFile, "%s", word) == 1)
    {
        if (strcasecmp(word, search) == 0)
        {
            countWord++;
        }
    }

    printf("The word %s appears %d times", search, countWord);
    return 0;
}
