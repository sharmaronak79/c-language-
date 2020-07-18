
#include<stdio.h>
#include<stdlib.h>

#define capacity 5  // it is a macro , capacity is name(identity) and 5 is value no ; as well in macro

int stack[capacity];
int top= -1;
int isfull(){
    if(top==capacity-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int element){
if(isfull()){
 printf("stack is full");
}
else{
    top++;
    stack[top]=element;
    printf("%d element is inserted",element);
}

}

void isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }

}

int pop(){
    int element;
if(isempty()){
    printf("stack is empty");
}
else{
 element= stack[top];  
 top--;

}
return top;
}