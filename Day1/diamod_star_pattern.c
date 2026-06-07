#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<2*n-2*i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}