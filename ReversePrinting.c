#include <stdio.h>

int main()
{
    int k = 5, arr[k];

    scanf("%d", &k);

    for (int i = 0; i < k; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    for (int j = k-1; j >= 0; j--)
    {
        /* code */
        printf("%d ", arr[j]);
    }

    return 0;
}