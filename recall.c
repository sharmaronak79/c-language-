#include<stdio.h>
#include<stdlib.h>

void upper(char c){
    //char c;
    if(c>=97 && c<=122)
    {
        c= c-32;
        printf("%c\n",c);
    }
    else
    {
        printf("%c",c);
    };
}


int main(){

    upper('d');
    upper('M');
    
    /*
    for(int i = 65;i<=90;i++){
        printf("%c\t",i);
    }
    
    for(int i = 97;i<=122;i++){
        printf("%c\t",i);
    }
    */

    return 0;
}
