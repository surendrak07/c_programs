#include<stdio.h>
#include<conio.h>
int main()
{
    int a=7,b=5;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d\n%d",a,b);
    return 0;
}