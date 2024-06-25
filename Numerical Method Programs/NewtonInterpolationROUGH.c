// Newton's Interpolation Method by using Divided Difference Method
#include <stdio.h>
#include <conio.h>

#define max 5

int main()
{
    float x[max], table[max][max];
    int i, j, n,k,l;

    printf("Enter the number of data points: (max %d supported) ", max);
    scanf("%d", &n);

    printf("Enter the data points x: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }

    // Initializing table
    for (i = 0; i < n; i++)
    {
        for (j=0; j<n; j++)
        table[i][j] = 0;
    }

    printf("Enter the data points y: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &table[i][0]);
    }

    //Computing Divided Differences
    k=n;
    for (j=1; j<n; j++)
    {   l=j;
        for (i=0; i<k-1; i++)
        {
            table[i][j] = (table[i+1][j-1] - table[i][j-1])/(x[l]- x[i]);
        l++;
        }
        k--;
    }

    printf("\n\nPrinting the Table: \n\n");
    // k=max;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%.4f    ",table[i][j]);
        }
        printf("\n");
    }

    return 0;
}