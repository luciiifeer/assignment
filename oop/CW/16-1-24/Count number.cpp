//program to count total number of words
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *f1 = fopen("nusrat.txt", "r");
    char text[50];
    int Tw = 0;
    while (fscanf(f1,"%s",text) == 0);
    {
        printf("%s\n",text);
        Tw++;
    }
    printf("total number of words are: %d", Tw);
    fclose(f1);
    return 0;

}
