#include<stdio.h>
#include<conio.h>
 int main() 
    { char str[50], i=0; int str_len; printf("Please enter a word to check Palindrome : ");
     scanf("%s",str); printf("\nEntered word: %s", str);
     while(1)
     { str_len = strlen(str) - (i+1);
         if (str[i] == str[str_len])
         { if (i == str_len || i+1 == str_len) { printf("\nEntered word \"%s\" is a palindrome", str);
                 break; 
                } 
            i = i+1; } 
        
        else { printf("\nEntered word \"%s\" is not a palindrome", str); break; }
         } 
    return 0;
     }