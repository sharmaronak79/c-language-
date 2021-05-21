#include <stdio.h>

int main()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    if (((a>>3) << 3) == a)
    printf("it is divisible by 8");
    else
    printf("not divisible by 8");
    return 0;
}