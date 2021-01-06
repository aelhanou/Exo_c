#include <stdio.h>
#define max 50

int main()
{
    int arr[max];
    int n;
    int count = 0;
    int i;

    for (i = 0; i < max ; i++)
    {
        printf("Entre positif number : ");
        scanf("%d",&n);

        if (n >= 0)
        {
            arr[i] = n;
            count++;
        }
        else
        {
            break;
        }
    }
    for (i = 0; i < count ;i++)
    {
        printf("%d ",arr[i]);
    }



    return 0;
}

