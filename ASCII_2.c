#include <stdio.h>
int main()
{
char ch; // variable declaration.
printf("Enter a character : ");
scanf("%c",&ch); // user input.
printf("\n The ascii value of the ch variable is : %d", ch);

printf("\n\nEnter any key to exit ");
while(getchar()!='\n'){

}
getchar();
return 0;
}
