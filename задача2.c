#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>


//Програма рахує слова
int countin(int counter);

int main(void)
{
    string String = get_string("Text: ");
    int words = 1;

    for (int i = 0; i < strlen(String); i++)
    {
        if (String[i] == ' ')
        {
            if (String[i++] == ' ')
            {
                continue;
            }

            words++;
        }

    }
    printf("words: %i", words);
}