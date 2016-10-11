#include <stdio.h>
#define SIZE 8
int main(void)
{
    int by_twos[SIZE];
    int index;

    for (index = 1; index <= SIZE; index++)
    {
        by_twos[index - 1] = 2 * index;
        printf("%d\n", by_twos[index - 1]);

    }

    return 0;

}
