#include<stdio.h>

void find(int n, int a[], int i, int max)
{
    if(max<a[i])
    {
        max=a[i];
    }

    i++;

    if(i<n)
    {
        find(n, a, i, max);
    } else if(i==n)
    {
        printf("%d\n", max);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max=a[0];

    find(n, a, 1, max);

    return 0;
}