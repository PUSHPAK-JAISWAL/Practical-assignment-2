// this is to print half pyramid of *
#include <stdio.h>
int pyramid(int a)
{
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf(" \n");
    }
    return 0;
}
void main()
{
    int i =0;
    printf("Enter the number of rows : ");
    scanf("%d",&i);
    pyramid(i);
}