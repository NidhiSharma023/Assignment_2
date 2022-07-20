#include<stdio.h>
#include<conio.h>
int main()
{
    int a,x,y;
    printf("Enter a number:");
    scanf("%d",&a);
    x=a/10;
    y=x*10;
    printf("If a=%d then make it y=%d",a,y);
    getch();
    return 0;
}
