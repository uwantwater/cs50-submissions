#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int key = atoi(argv[1]);
    string plaintext = get_string("plaintext:  ");
    string ciphertext = "";
    char raw[50];
    for (int i = 0, n = strlen(plaintext); i <= n; i++)
    {
        if (toupper(plaintext[i]) >= 'A' && toupper(plaintext[i]) <= 'Z')
        {
            sprintf(raw, "%c", plaintext[i]+ key);
            ciphertext = strcat(ciphertext, raw);
            //int converted = plaintext[i] + key;
            //ciphertext = strcat(ciphertext,(char) converted);
        }
    }
    printf("%s\n", ciphertext);
}