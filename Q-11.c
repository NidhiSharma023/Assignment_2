#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    x=x*10;
    printf("Result after appending a digit is %d",x+y);
    getch();
    return 0;
}
