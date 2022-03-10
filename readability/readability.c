#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int letters(string text);
int letterCount = 0;

int sentences(string text);
int sentenceCount = 0;

int words(string text);
int wordCount = 1;

int main(void)
{
    string inputText = get_string("Text: ");
    int L = letters(inputText);
    int W = words(inputText);
    int S = sentences(inputText);
    float rawIndex = 0.0588 * ((L / W) * 100) - 0.296 * ((S / W) * 100) - 15.8;
    int index = round(rawIndex);
    printf("%i", index);
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