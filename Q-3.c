#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,z;
    printf("Enter x and y respectively:");
    scanf("%d%d",&x,&y);
    printf("x=%d   y=%d",x,y);
    z=x;
    x=y;
    y=z;
    printf("\nAfter Swapping\nx=%d   y=%d",x,y);
    getch();
    return 0;
}
