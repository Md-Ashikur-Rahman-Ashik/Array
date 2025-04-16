#include <stdio.h>

int main()
{
    int arr[5];
    // scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    // printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4]);

    for (int i = 0; i < 5; i++)
    {
        /* code */
        // printf("a[%d]\n", i);

        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        /* code */
        printf("%d ", arr[j]);
    }

    return 0;
}