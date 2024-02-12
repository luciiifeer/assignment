#include <stdio.h>

int main()
{
    FILE *file;
    FILE *file2;
    int num;
    file = fopen("nayem.txt", "r");

    file2 = fopen("testing.txt", "a");

    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) != EOF)
    {
        if (num % 2 == 0)
        {
            fprintf(file2,"%d\n", num);
        }
    }

    fclose(file);
    fclose(file2);

    return 0;
}
