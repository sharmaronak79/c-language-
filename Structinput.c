#include <stdio.h>
#include<conio.h>
struct Employee
{
char name[50];
int emp_id;
long phone_no;
};

int main()
{
struct Employee e;
printf("Enter name : ");
scanf("%s", &e.name);
printf("Enter emp_id: ");
scanf("%d", &e.emp_id);
printf("Enter Phone Number: ");
scanf("%ld", &e.phone_no);

printf("\nName : %s", e.name);
printf("\nEmp Id     : %d", e.emp_id);
printf("\nPhone Number : %ld ", e.phone_no);

return 0;
}
