#include <cs50.h>
#include <stdio.h>
#include <string.h>

string alphabets = "abcdefghijklmnopqrstuvwxyz"

string cipher(string text);

//take cipher key from command line input
int main(int argc, string argv[])
{
    string plaintext = get_string("plaintext:  ");
    string ciphertext = cipher(plaintext);
    printf("ciphertext: %s\n", ciphertext);
}

string cipher(string text)
{
    for (i = 0, n = strlen(plaintext); i <= n; i++)
    {

    }
    return text;
}