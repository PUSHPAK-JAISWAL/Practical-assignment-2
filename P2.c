// this is a program to show the half pyramid of numbers
#include <stdio.h>
int pyramid2(int a)
{
    for(int i=1;i<=a;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
void main()
{
    int i= 0;
    printf("Enter the number of rows : ");
    scanf("%d",&i);
    pyramid2(i);
}