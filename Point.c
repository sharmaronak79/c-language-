#include <stdio.h>
#include<conio.h>
int main() {
   int a = 10, *j, **k;
   j = &a;
   k = &j;
   
   printf("\nAddress  of  a = %u", &a);
   printf("\nAddress of a = %u", j);
   printf("\nAddress of a = %u", *k);
   printf("\nAddress of j = %u", &j);
   printf("\nAddress of j = %u", k);
   printf("\nAddress of k = %u", &k);
   printf("\nValue of j   = %u", j);
   printf("\nValue of k   = %u", k);
   printf("\nValue of a   = %d", a);
   printf("\nValue of a   = %d", *(&a));
   printf("\nValue of a   = %d", *j);
   printf("\nValue of a   = %d", **k);
   getch();
}
