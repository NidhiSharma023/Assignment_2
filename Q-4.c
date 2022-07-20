#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter x and y respectively:");
    scanf("%d%d",&x,&y);
    printf("x=%d   y=%d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nAfter Swapping\nx=%d   y=%d",x,y);
    getch();
    return 0;
}
