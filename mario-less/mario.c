#include <cs50.h>
#include <stdio.h>

void block_height(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k = i; k++)
        {
            
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int main(void)
{
    int n = get_int("Height?\n");
    block_height(n);
}