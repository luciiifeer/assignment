#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("Jerry.txt", "r");

    char sword[10];
    char txt[20];
    int countWord = 0;
    printf("Which word you want to search? ");
    scanf("%s", sword);

    while (fscanf(fp, "%s", txt) == 1)
    {
        if (strcasecmp(txt, sword) == 0)
        {
            countWord++;
        }
    }

    if(countWord==0)
        printf("word not found");
    else
        printf("The word %s in the text is %d times", sword, countWord);

    return 0;
}
