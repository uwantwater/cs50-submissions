#include <cs50.h>
#include <stdio.h>

void block_height(int n)
{
    for (int i = 0; i < n; i++)
    {
            int k = (n-2) - i;
            while (k >= 0)
            {
                printf(".");
                k = k - 1;
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
    int n;
    do
    {
        n = get_int("Height?\n");
    }
    while (n < 1 || n > 8);
    block_height(n);
}