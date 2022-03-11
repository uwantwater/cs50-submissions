#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //convert given key from string type to integer type
    int key = atoi(argv[1]);
    //get the string that is to be converted
    string plaintext = get_string("plaintext:  ");
    string ciphertext = "";
    for (int i = 0, n = strlen(plaintext); i <= n; i++)
    {
        if (toupper(plaintext[i]) >= 'A' && toupper(plaintext[i]) <= 'Z')
        {
            sprintf(ciphertext, "%s%c", ciphertext, plaintext[i]+ key);
            //int converted = plaintext[i] + key;
            //ciphertext = strcat(ciphertext,(char) converted);
        }
    }
    printf("%s\n", ciphertext);
}