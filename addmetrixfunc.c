#include<stdio.h>

int add(int n, int m, int a[n][m], int b[n][m], int i, int j, int c[n][m])
{
    c[i][j]=a[i][j]+b[i][j];

    if(j<m)
    {
        j++;
        add(n, m, a, b, i, j, c);
    } else if(i<n)
    {
        i++;
        j=0;
        add(n, m, a, b, i, j, c);
    } else return c[n][m];
}

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    int a[n][m], b[n][m], c[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    c[n][m]=add(n, m, a, b, 0, 0, c);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}