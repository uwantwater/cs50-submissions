#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

string cipherblock(string text);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage : ./caesar key");
        return 1;
    }
    string plaintext = get_string("plaintext:  ");
}

string cipherblock(string text)
    //get required string that is supposed to be ciphered from user
    char ciphertext[64];
    char output[64];
    for (int i = 0, n = strlen(text); i <= n; i++)
    {
        //convert given key from string type to integer type
        int key = atoi(argv[1]);
        if (key > 26)
        {
            key = key - 26;
        }
        if (toupper(text[i]) >= 'A' && toupper(text[i]) <= 'Z')
        {
            if (toupper((text[i] + key)) > 'Z')
            {
                key = key - 26;
                //cipher character and store it in variable ciphertext
                sprintf(ciphertext, "%c", text[i] + key);
                //concatenate required output and ciphered character
                strcat(output, ciphertext);
            }
            else
            {
                //cipher character and store it in variable ciphertext
                sprintf(ciphertext, "%c", text[i] + key);
                //concatenate required output and ciphered character
                strcat(output, ciphertext);
            }
        }
        else
        {
            sprintf(ciphertext, "%c", text[i]);
            strcat(output, ciphertext);
        }
    }
    return output;
}