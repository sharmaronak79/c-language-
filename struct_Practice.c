/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

char cmd[10];
char arg1[10];
char arg2[10];

typedef struct dynamic_menu_cmd{
    char *opt;              //Command name
    void (*func)(char*);   //Function to execute the Command
    char* desc;            //Command description
    bool Public;            //Is command displayed by the ehelp?
    bool execute;            //Can the command be eexceuted?
    struct dynamic_menu_cmd *next;
}dynamic_menu_cmd_t;

static dynamic_menu_cmd_t addition_cmd={"add",NULL,"Makes Addition of Two numbers",true,true,NULL};

void add_fun(char *a, char *b){
    float result,af,bf;
    af=atof(a);
    bf=atof(b);
    
    printf("\n\rSum of two numbers is : %f",af+bf);
}

void process_data(char *input){
    
    
    char *token;
    token=strtok(input," ");
    strcpy(cmd,token);
    
    token = strtok(NULL," ");
	strcpy(arg1,token);

	token = strtok(NULL," ");
	strcpy(arg2,token);
    
    printf("\r\nCommand is : %s",cmd);
    
    if(strcmp(cmd,addition_cmd.opt) == 0){
        add_fun(arg1,arg2);
    }else{
        printf("\n\rError");
    }
    
}

int main()
{
    
    char input[100];
    
    printf("App> ");
    
    scanf("%[^\n]",input);
    //printf("\r\n%s",input);
    
    process_data(input);


    return 0;
}
