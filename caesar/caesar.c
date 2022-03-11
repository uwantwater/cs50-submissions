#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //convert given key from string type to integer type
    int key = atoi(argv[1]);
    string plaintext = get_string("plaintext:  ");
    char ciphertext[50];
    string output = "";
    for (int i = 0, n = strlen(plaintext); i <= n; i++)
    {
        if (toupper(plaintext[i]) >= 'A' && toupper(plaintext[i]) <= 'Z')
        {
            sprintf(ciphertext, "%c", plaintext[i]+ key);
            output = strcat(output, ciphertext);
        }
    }
    printf("%s\n", output);
}