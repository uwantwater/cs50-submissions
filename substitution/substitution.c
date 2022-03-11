#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    string plaintext = get_string("plaintext: ");
    string text = "%c%s", argv[0], plaintext;
    printf("%s\n", text);
}