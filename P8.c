// this is a program to print the inverted full pyramid of *
#include <stdio.h>
void pyramid8(int a )
{
    for(int i=a;i>0;i--)
    {
        for(int space=a;space>i;space--)
        {
            printf(" ");
        }
        for(int j=i;j>0;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void main()
{
    int i=0;
    printf("Enter the number of rows : ");
    scanf("%d",&i);
    pyramid8(i);
}