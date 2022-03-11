#include <cs50.h>
#include <stdio.h>
#include <string.h>

string alphabets = "abcdefghijklmnopqrstuvwxyz";

int index_of_character(char c);

//take cipher key from command line input
int main(int argc, string argv[])
{
    int index = index_of_character((char) argv[1]);
    printf("index in alphabet is: %i", index);
}

int index_of_character(char c)
{
    for (int j = 0, k = 26; j <= k; j++)
    {
        if (alphabets[j] == c)
        {
            break;
        }
        return j;
    }
}