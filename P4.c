// this is a program to make a inverted half pyramid of *
#include <stdio.h>
int pyramid4(int a)
{
    for(int i=a;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            printf("* ");
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
    pyramid4(i);
}