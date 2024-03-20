// this is a program to print a full pyramid of numbers
#include <stdio.h>
int pyramid7(int a)
{
    for(int i=0;i<=a;i++)
    {
        for(int space =i;space<a;space++)
        {
            printf(" ");
        }
        for(int j=0;j<i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
void main()
{
    int i =0;
    printf("Enter the number of rows : ");
    scanf("%d",&i);
    pyramid7(i);
}