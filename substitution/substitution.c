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

int index_of_character(char c)
{
    for (int j = 0,int k = 26; j <= k; j++)
    {
        if (alphabet[j] == c)
        {
            return j;
            break;
        }
    }

string cipher(string text)
{
    string cipheredText;
    for (int i = 0, n = strlen(text); i <= n; i++)
    {
        cipheredText = text[i]
    }
    return cipheredText;
}