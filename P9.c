// this is a program to show pascal's traingle
#include <stdio.h>
void triangle1(int a)
{
    int constant = 1;
    for(int i=0;i<a;i++)
    {
        for(int space =i;space<a;space++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            if(j==0||i==0)
            {
                constant =1;
            }
            else
            {
                constant = constant*(i-j+1)/j;
            }
            printf("%d ",constant);

        }
        printf("\n");
    }
}
void main()
{
    printf("Enter the number of rows : ");
    int i;
    scanf("%d",&i);
    triangle1(i);
}