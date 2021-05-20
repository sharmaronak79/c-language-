#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter value of x : ");
    scanf("%d",&x);
    printf("Enter value of y : ");
    scanf("%d",&y);
    printf("Value of x is : %d\n Value of Y is : %d \n",x,y);
    x = x^y;
    y = x^y;
    x = x^y;
    printf("After Swapping : \n Value of x is : %d \n value of y is : %d",x,y);
    return 0;

}