#include <stdio.h>
#include <assert.h>

void inplace_swap(int* x, int* y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

#define X 10
#define Y 90

int main(int argc, char* argv[])
{
    int x = X;
    int y = Y;

    inplace_swap(&x, &y);

    assert(x == Y);
    assert(y == X);

    fprintf(stdout, "Good\n");

    return 0;
}