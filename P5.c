// this is a program to print inverted half pyramid of numbers
#include <stdio.h>
int pyramid5(int a)
{
    for(int i=a;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
void main()
{
    int i=0;
    printf("Enter the number of rows : ");
    scanf("%d",&i);
    pyramid5(i);
}