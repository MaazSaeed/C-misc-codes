#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;

    do
    {
        printf("T minus %d and counting\n", i);
        i--;
    }while(i > 0);

    return 0;
}
