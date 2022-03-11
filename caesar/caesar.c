#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //convert given key from string type to integer type
    int key = atoi(argv[1]);
    if (key > 26)
    {
        key = key - 26;
    }
    //get required string that is supposed to be ciphered from user
    string plaintext = get_string("plaintext:  ");
    char ciphertext[64];
    char output[64];
    for (int i = 0, n = strlen(plaintext); i <= n; i++)
    {
        if (toupper(plaintext[i]) >= 'A' && toupper(plaintext[i]) <= 'Z')
        {
            //cipher character and store it in variable ciphertext
            sprintf(ciphertext, "%c", plaintext[i] + key);
            //concatenate required output and ciphered character
            strcat(output, ciphertext);
        }
    }
    printf("ciphertext: %s\n", output);
}