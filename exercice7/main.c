#include <stdio.h>

void    search(float *arr,float n,int size)
{
    int i,k = 0;

    for(i = 0 ;i < size; i++)
    {
        if (arr[i] == n)
        {
            printf("The %.2f is exist",arr[i]);
            k = 1;
        }
    }
    if (k == 0)
        printf("The %.2f is not existing",n);
}

int main()
{
    float arr[8];
    float n;
    int i;

    printf("Enter 8 number floating :");
    for (i = 0;i < 8;i++)
    {
        scanf("%f",&arr[i]);
    }
    printf("Entre The number for searching about? : ");
    scanf("%f",&n);

    search(arr,n,7);

    return 0;
}
