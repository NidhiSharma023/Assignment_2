#include<stdio.h>
#include<conio.h>
int main()
{
    int x,a,b;
    printf("Enter a number:");
    scanf("%d",&x);
    a=x%10;
    b=x/10;
    a=a*100;
    printf("Result after rotating by one position towards the right is %d",a+b);
    getch();
    return 0;
}

