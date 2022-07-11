#include <stdio.h>

int fib(int Y)
{
    if (Y == 1 || Y == 2) {
        return 1;
    }

    return fib(Y - 1) + fib(Y - 2);
}
