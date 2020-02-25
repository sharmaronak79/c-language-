#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main()
{

FILE *fi=fopen("friends.txt","r");

// Declare the variable for the data to be read from file 
    char dataToBeRead[1000]; 
  
    // Open the existing file friends.txt using fopen() 
    // in read mode using "r" attribute 
    fi = fopen("friends.txt", "r") ; 
      
    // Check if this fi is null 
    // which maybe if the file does not exist 
    if ( fi == NULL ) 
    { 
        printf( "friends.txt file failed to open." ) ; 
    } 
    else
    { 
          
        printf("The file is now opened.\n") ; 
          
        // Read the dataToBeRead from the file 
        // using fgets() method 
        while( fgets ( dataToBeRead, 50, fi ) != NULL ) 
        { 
          
            // Print the dataToBeRead  
            printf( "%s" , dataToBeRead ) ; 
         } 
          
        // Closing the file using fclose() 
        fclose(fi) ; 
          
        printf("\nData successfully read from file friends.txt\n"); 
        printf("The file is now closed.") ; 
    } 

return 0;
}
