#include<stdio.h>
#include<conio.h>
int main()
{
    int a,w,x,y,z;
    printf("Enter a number:");
    scanf("%d",&a);
    x=a%10;
    y=a/10;
    z=y%10;
    w=y/10;
    printf("Sum of %d = %d+%d+%d\n=%d",a,w,z,x,w+z+x);
    getch();
    return 0;
}

