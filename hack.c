#include <stdio.h>
int main(void)
{
    int sam;
    int index = 0;
    while (index++ < 10)
    {
        sam = 10 * index + 2;
        printf("sam = %d\n",sam);
    }

    return 0;
}
