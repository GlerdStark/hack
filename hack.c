#include <stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
    int index, score[SIZE];
    int sum = 0;
    float average;

    printf("Enter %d golf scores:\n",SIZE);
    for (index = 0; index < SIZE; index++)
    {
        scanf("%d",&score[index]);
        printf("The score is:");
        printf("%5d\n",score[index]);
        sum += score[index];

    }
    average = (float) sum / SIZE;
    printf("Sum of scores = %d, average = %.2f\n", sum, average);
    printf("That's a handicap of %.0f",average - PAR);

    return 0;
}
