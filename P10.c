// this is a traingle to find the floyds triangle
#include <stdio.h>
void triangle2(int a)
{
    int constant =1;
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%d ",constant);
            constant++;
        }
        printf("\n");
    }
}
void main()
{
    int i=0;
    printf("Enter the number of rows : ");
    scanf("%d",&i);
    triangle2(i);
}