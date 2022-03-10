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
    float l = letters(inputText);
    float w = words(inputText);
    float s = sentences(inputText);
    //letters per hundred words
    float L = l / w * 100;
    //sentences per hundred words
    float S = s / w * 100;
    float rawIndex = 0.0588 * L - 0.296 * S - 15.8;
    //rounding index to the nearest integer
    int index = round(rawIndex);
    //check if index is less than one or greater then 15 or between one and 16
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i", index);
    }
}

//convert to uppercase and count ascii characters from A to Z for number of letters
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

//count number of fullstops, exclamation and question marks to count number of sentences
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

//count number of spaces and add one to it for number of words
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