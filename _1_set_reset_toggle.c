/*1. Write a prorgram for the following one.
a) Set a bit b) Clear a bit c) Toggle a bit */

#include<stdio.h>
#include<conio.h>

int setbit(int,int);
int resetbit(int,int);
int togglebit(int,int);

int main()
{
    int a= 7 , k =2;
    printf("Value is : %d and %d bit want to operate \n ",a,k);

    printf("\nSet a bit\n");
    printf("%d value %d number of bit is set :  %d \n ",a,k,setbit(a,k));

    printf("\nReset a bit\n");
    printf("%d value %d number of bit is reset :  %d \n ",a,k,resetbit(a,k));

    printf("\nToggle a bit\n");
    printf("%d value %d number of bit is toggle :  %d \n ",a,k,togglebit(a,k));

    printf("Thank you"); 
    getch();
    return 0;
}

int setbit(int a,int k)
{
    return (a = a | (1<<(k-1)));

}

int resetbit(int a, int k)
{
    return (a = a & (~(1<<(k-1)))); 
}

int togglebit(int a, int k)
{
    return (a = a ^ (1<<(k-1)));
}