#include <stdio.h>

int main()
{
    int array_size, sum = 0, i, j;

    scanf("%d", &array_size);

    int arr[array_size];

    for (i = 1; i <= array_size; i++)
    {
        /* code */

        scanf("%d", &arr[i]);
    }

    for (j = 1; j <= i-1; j++)
    {
        /* code */
        sum = sum + arr[j];
    }

    printf("The sum of this array is : %d", sum);

    return 0;
}