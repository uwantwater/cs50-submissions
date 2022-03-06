#include <cs50.h>
#include <stdio.h>

void block_height(int n)
{
    //for column
    for (int i = 0; i < n; i++)
    {
        int k = (n - 2) - i;
        //generating required no. of spaces to right align the hashes
        while (k >= 0)
        {
            printf(" ");
            k = k - 1;
        }
        //for left pyramid block
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        //space of one unit between the 2 pyramid blocks
        printf(" ");
        //for right pyramid block
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
    //requiring input to be positive numbers between 0 and 9
    do
    {
        n = get_int("Height?\n");
    }
    while (n < 1 || n > 8);
    //calling the function
    block_height(n);
}