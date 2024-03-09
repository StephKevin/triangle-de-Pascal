#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &n);
    int tab[n][n];

    for (j = 0; j <= n; j++)
        {
            tab[j][0]= 1;
            tab[j][j]= 1;
        }

    for (i = 2; i < n; i++)
    {
        for (j = 1; j < i; j++)
        {
            tab[i][j] = tab[i - 1][j - 1] + tab[i - 1][j];
        }
    }
    printf("Triangle de Pascal :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
