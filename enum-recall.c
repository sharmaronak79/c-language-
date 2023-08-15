/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

enum process{start,running,stop};

int main()
{
    printf("Hello World");
    
    enum process engine_condition;
    engine_condition = stop;
    printf("\nCondition : %d",  engine_condition);
    
    while(1){
    
        char c;
        
        printf("\nDo you want to start the engine ?  (Y/N) : " );
        scanf("%c",&c);

        
        
        
        
        if(c == 'Y' | c== 'y'){
            printf("Enginee is started \n");
            engine_condition = running;
        }else if(c == 'N' | c== 'n'){
            printf("Enginee is Stopped \n");
            engine_condition = stop;
        }else{
            
            printf("\nWrong Entry\n");
        }
        
        switch(engine_condition){
            case running:
                printf(" Running....Running.....Running....\n");
                break;
            case stop:
                printf("Engine is STOP and Relaxing Ready to Satrt\n");
                break;
            case start:
             printf("Engine is starting Now.......\n");
             break;
            default:
            printf("something is wrong\n");
        }
  
    }
    return 0;
}
