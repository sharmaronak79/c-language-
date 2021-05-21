#include <stdio.h>

int main()
{
    int a, rotation, final, choice;
    printf("Enter 1 for LEFT rtation and 2 for RIGHT rotation : ");
    scanf("%d",&choice);
    printf("Enter number : ");
    scanf("%d",&a);
    printf("Enter number of rotation: ");
    scanf("%d",&rotation);
    switch (choice)
    {
        case 1:
            final = a << rotation;
            printf("%d number and left rotation %d time, final value is %d",a,rotation,final);
            break;
        case 2:
            final = a >> rotation;
            printf("%d number and right rotation %d time, final value is %d",a,rotation,final);
            break;
    }
    return 0;
}