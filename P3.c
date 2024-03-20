// this is a program to write the half pyramid alphabets
#include <stdio.h>
int pyramid3(int a)
{
    char k='A';
    for(int i =1;i<=a;i++)
    {
        k='A';
        for(int j=1;j<=i;j++)
        {
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }
}
void main()
{
    int i= 0;
    printf("Enter the number of rows : ");
    scanf("%d",&i);
    pyramid3(i);
}