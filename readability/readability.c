#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int letters(string text);
int letterCount = 0;

int sentences(string text);
int sentenceCount = 0;

int words(string text);
int wordCount = 0;

int main(void)
{
    string inputText = get_string("Text: ");
    int n1 = letters(inputText);
    int n2 = words(inputText);
    int n3 = sentences(inputText);
    printf("%i letters, %i words, %i sentences\n", n1, n2, n3);
}

int letters(string text)
{
    for (int i = 0, n = strlen(text); i <= n; i++)
    {
        if (toupper(text[i]) >= 'A' && toupper(text[i]) <= 'Z')
        {
            letterCount = letterCount + 1;
        }
    }
    return letterCount;
}

int sentences(string text)
{
    for (int i = 0, n = strlen(text); i <= n; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentenceCount = sentenceCount + 1;
        }
    }
    return sentenceCount;
}

int words(string text)
{
    for (int i = 0, n = strlen(text); i <= n; i++)
    {
        if (text[i] == ' ')
        {
            wordCount = wordCount + 1;
        }
    }
    return wordCount;
}