#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    //for spaces
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=(i*2)+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}