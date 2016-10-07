#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extraordinary being"
int main(void)
{
    char name[40];

    printf("What's your name?");
    scanf("%s",name);
    printf("Hell,%s.%s\n",name,PRAISE);
    printf("Your name of %Lu letters occupies %u memory cells.\n",
           strlen(name),sizeof(PRAISE));
    printf("The phrase of phrase has %Lu letters",strlen(PRAISE));
    printf("and occupies %Lu memory cells.\n",sizeof(PRAISE));

    return 0;

}
