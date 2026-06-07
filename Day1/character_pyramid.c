#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-1;j++) 
        {
            printf(" ");
        }
        for(int j=0;j<i;j++)
        {
            printf("%c",65+j);
        }
        for(int j=i;j>=0;j--)
        {
            printf("%c",65+j);
        }
        printf("\n");
    }
    return 0;
}