#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{
    //representing digits and alphabets via SEVEN-SEGMENT-DISPLAY
    const int segments[10][7] =  {{1, 1, 1, 1, 1, 1, 0},   // 0
                                  {0, 1, 1},               // 1
                                  {1, 1, 0, 1, 1, 0, 1},   // 2
                                  {1, 1, 1, 1, 0, 0, 1},   // 3
                                  {0, 1, 1, 0, 0, 1, 1},   // 4
                                  {1, 0, 1, 1, 0, 1, 1},   // 5
                                  {1, 0, 1, 1, 1, 1, 1},   // 6
                                  {1, 1, 1},               // 7
                                  {1, 1, 1, 1, 1, 1, 1},   // 8
                                  {1, 1, 1, 1, 1, 0, 1}}; // 9

    char digit[] = {'_', '|', '|', '_', '|', '|', '_'};

    return 0;
}
