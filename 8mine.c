#include <stdio.h>

int main()
{
    int a[10000], b[10000], c[10000], i, j, k, l, n1, n2;

    printf("Enter size of the first array : ");
    scanf("%d", &n1);

    printf("Enter elements in the first array : ");

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of the second array : ");
    scanf("%d", &n2);

    printf("Enter elements in the second array : ");

    for (j = 0; j < n2; j++)
    {
        scanf("%d", &b[j]);
    }

    for (k = 0; k < n2; k++)
    {
        c[k] = a[k];
        c[k+ n1] = b[k];
    }

    printf("Merged array is: ");
    for (l = 0; l < n1+n2; l++)
    {
        printf(" %d", c[l]);
    }

    printf("\n");
    printf("Ascending order: ");

    for ( l=0; l< n1+n2; l++){
        printf("%d ", c[l]);
    }

    printf("\n");
    printf("Descending order: ");

    for ( l=n1+n2-1 ; l>=0; l--){
        printf("%d ", c[l]);
    }

    return 0;
}