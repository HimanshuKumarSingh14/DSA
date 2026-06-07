#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*i;j++)
        { 
            printf(" ");
        }
        for(int j=n;j>i;j--)
        {
            printf("*");
        }

        printf("\n");
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n+2-2*i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i+2;j++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}