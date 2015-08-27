/*****************************************************************
* Consoants and Vowels 						                     *
* 								                                 *
* POC: $./cv <text>                                              *
*                                                                *
* Autor: Elton Fonseca                                           *
* http://www.fb.com/elton.junior6                                *
******************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char word[80];
    char vowels[] = "aeiou";
    char consoants[] = "bcdfghjklmnpqrstvxz";
    int i, j, k, vowel, consoant;

    void help();

    if(argc < 2 || argc > 2)
    {
        printf("Error! for more informations: --help\n");
    }
    else if(strcmp(argv[1], "--help") == 0)
    {
        help();
    }
    else if(strlen(argv[1]) > 80)
    {
        printf("Excess Characters! for more informations: --help\n");
    }
    else
    {
        strcpy(word, argv[1]);
        i = 0;
        j = 0;
        k = 0;
        while(i < strlen(word))
        {
            j = 0;
            while(j < strlen(vowels))
            {
                if(word[i] == vowels[j])
                {
                    vowel++;
                }
                j++;
            }
            k = 0;
            while(k < strlen(consoants))
            {
                if(word[i] == consoants[k])
                {
                    consoant++;
                }
                k++;
            }
            i++;
        }
        printf("Vowels: %d - Consoants: %d\n", vowel, consoant);
    }
}
void help()
{
    printf("+----------------------------+\n");
    printf("|    Consoants and Vowels    |\n");
    printf("| -------------------------- |\n");
    printf("| Usage: $./cv <word>   |\n");
    printf("| -------------------------- |\n");
    printf("| Autor: Elton Fonseca       |\n");
    printf("| www.fb.com/elton.junior6   |\n");
    printf("+----------------------------+\n");
}
