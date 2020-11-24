#include<stdio.h>

void main()
{
    char sport[]="cricket";
    int x=1,y;
    y=x++ + ++x;
    printf("%c",sport[++y]);
    printf("\nx: %d",x);
}
