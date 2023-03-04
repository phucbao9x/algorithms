#include "stdio.h"
#include "stdlib.h"

int findMaximumProductSubarray(int *vector, int n)
{
    int result = *(vector + 0);
    return result;
}

int main(void)
{
    int *a;
    int N;
    scanf("%d", N);
    a = (int *)malloc(N);
    if (!a)
    {
        printf("Memeries not enough!!");
    }
    for (int _ = 0; _ < N; _++)
    {
        scanf(">>", a[_]);
    }
    int result = findMaximumProductSubarray(a, N);
    printf("result: %d", result);
    return 0;
}