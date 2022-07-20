#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Unit digit of %d is %d",x,x%10);
    getch();
    return 0;
}
