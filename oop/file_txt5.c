#include<stdio.h>
#include<string.h>

int main( )
{
    FILE *fp;
    FILE *fpo;
    char dr[50];

    fp = fopen("input.txt ", "r");
    fpo = fopen("output.txt", "a") ;

    if ( fp == NULL )
    {
        printf( "failed to open." ) ;
    }
    else
    {
        while( fgets(dr, 50, fp) != NULL )
        {
            if ( strlen ( dr ) > 0 )
            {

                fputs(dr, fpo) ;
                fputs("hello", fpo) ;
                fputs("\n", fpo) ;
            }
        }

        fclose(fp) ;
    }

    return 0;
}


//read and paste
