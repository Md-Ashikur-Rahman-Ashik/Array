#include <stdio.h>

int main()
{
    int array_size, i, j, max = -1000000000;

    scanf("%d", &array_size);

    int arr[array_size];

    for (i = 0; i < array_size; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    for (j = 0; j < i; j++)
    {
        /* code */
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }
    printf("The maximum value is : %d", max);

    return 0;
}