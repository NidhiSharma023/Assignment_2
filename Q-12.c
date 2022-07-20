#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b;
    printf("Enter amount in INR = ");
    scanf("%f",&a);
    b=1/76.23*a;
    printf("%f INR = %f USD",a,b);
    getch();
    return 0;
}
