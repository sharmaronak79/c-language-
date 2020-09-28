
#include<stdio.h>
#include<stdlib.h>

#define capacity 5  // , it is a macro , capacity is name(identity) and 5 is value no ; 
//as well in macro

int stack[capacity];
int top= -1;

void push(int ele);
int pop(void);
int peek(void);
int traverse(void);
int main(){
    int ch, item;
while(1){
    printf("1.Push\n");
printf("2.Pop \n");
printf("3.Peek\n");
printf("4.Traverse\n");
printf("5.Quit\n");

printf("Enter your choice : ");
scanf("%d",&ch);

switch(ch){
    case 1: printf("Enter element to insert : ");
    scanf("%d",&item); 
    push(item);
    break;
    case 2:item= pop();
    if (item==0){
        printf("stack is underflow\n");
    }
    else{
        printf("poped item is %d \n",item);
    }
    break;

    case 3:peek();
    break;
    case 4:traverse();
    break;
    case 5: exit(0);
    default : printf("Invalid input: ");
}
}

return 0;
}


int isfull(){
    if(top==capacity-1){
        return 1;
    }
    else{
        return 0;
    }
}


int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }

}



void push(int element){
if(isfull()){
 printf("stack is full \n");
}
else{
    top++;
    stack[top]=element;
    printf("%d element is inserted \n",element);
}

}


int pop (){
    if(isempty()){
        return 0;
    }
    else{
        return stack[top--];
        
    }
}

int peek(){
    if(isempty()){
        printf("no element in stack");
    }
    else{
       int item=stack[top];
        printf("peek element is : %d ",item);
    }
return 0;
}

int traverse(){
    if(isempty()){
        printf("stack is empaty \n");
    }
    else{
        int i;
        for(i=0;i<=top;i++){
            printf("elements of stack are : %d \n",stack[i]);
        }
    }
return 0;
}
