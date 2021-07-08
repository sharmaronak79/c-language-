
#include <stdio.h> 

  

int main() 
{ 

    int i = 0; //here is variable
begin: 

    i = i + 1; 

    printf("%d ,", i); 

  

    if (i < 100) 

        goto begin; 

    return 0; 
} 
