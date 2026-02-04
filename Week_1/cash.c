#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int cents;
    do {
        cents = get_int("Change owed: ");
    }
    while(cents <= 0);

    int coin = 0;
    while(cents >= 25) {
        cents = cents - 25;
        coin++;
    }
    while(cents >= 10) {
        cents = cents - 10;
        coin++;
    }
    while(cents >= 5) {
        cents = cents - 5;
        coin++;
    }
    while(cents >= 1) {
        cents = cents - 1;
        coin++;
    }
    printf("%i\n", coin);
}
