#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b);

int main()
{
    int i = 1, j = 2;

    swap(i, j);
    printf("i = %d, j = %d", i, j);

    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

