#include <stdio.h>

double *sort(double *arr,int size)
{
    int i,j;
    float c;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size ; j++)
        {
            if (arr[i] < arr[j])
            {
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }
    return arr;
}


void showArray(double *ar,int size)
{
    int i;

    i = 0;
    while (i < size )
        printf("%.2lf\n",ar[i++]);

}

int main()
{
    double arr[8] = {7,88,23,8,1,3.44,100};
    double *a;

    a = sort(arr,7);
    showArray(a,7);
    return (0);
}
