#include <stdio.h>
#define SPACE 5
int main(void)
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
        ch = getchar();

    }
    putchar(ch);

    return 0;
}
