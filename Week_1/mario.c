#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");         //Asking the height for the user!
    }
    while(n < 1);

    for (int i = 0; i < n; i++) //lines loop
    {
        for (int j = 0; j < n - 1 - i; j++) //spaces loop
        {
            printf(" ");
        }
        for (int h = 0; h < i + 1; h++) //# loop
        {
            printf("#");
        }
        printf("\n"); //next line
    }
}

