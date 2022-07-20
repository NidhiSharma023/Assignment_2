#include<stdio.h>
#include<conio.h>
int main()
{
    int n,x,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=i+1;i++)
    {
        x=n&1;
        if(x==1)
        {
            printf("Position is %d",i);
            break;
        }
    n=n>>1;
    }
    getch();
    return 0;
}
