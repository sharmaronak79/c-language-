#include<stdio.h>

#define BITS sizeof(int) * 8

int check(int);

int main()
{
    int x;
    printf("Enter any number : ");
    scanf("%d",&x);
    if(x==0)
        printf("It is Zero \n");
    else
    check(x);

    return 0;
    
}

int check(int a)
{
    if ((a & (1<<(BITS-1))) == 0)
    printf("%d is Positive",a);
    else
    printf("%d is Negative",a);

    return 0;
}