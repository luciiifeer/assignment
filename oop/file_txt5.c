#include <stdio.h>
int main()
{
    FILE *fp = fopen("Jerry.txt", "r");
    FILE *gp = fopen("Zerin.txt", "w");

    char wd[15];
    while (fscanf(fp, "%s", wd)!=EOF)
    {
        char FL = wd[0];

        fputc(FL, gp);
    }

    return 0;
}
