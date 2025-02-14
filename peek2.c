#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX 100
int stack[MAX], top = -1;


int isEmpty(){
    return (top == -1)  ? 1 : 0;
}


int isFull(){
    return (top == MAX - 1) ? 1 : 0;
}



void push(){
    if (isFull()) {
    printf("Stack Overflow !!!\n");
}
 else{
    int value;
    printf("Enter the value to be pushed: ");
    scanf("%d", &value);
    top++;
    stack[top] = value;
    printf("Element added !!!\n");
 }
}

 int peek(){
    if (isEmpty()) {
        printf("Stack is Empty\n");
        return NULL;
 }
 else{
    return stack[top];
 }
}


void show(){
    if (isEmpty()) {
        printf("Stack is Empty!!\n");
}
else{
    int i;
    for(i = top; i >= 0; i--){
        printf("%d\n", stack[i]);
    }
  }
}



int main(){
    while(1){
        printf("1. Pop\n");
        printf("2. Push\n");
        printf("3. Peek\n");
        printf("4. Show\n");
        printf("5. Exit\n");  
    }
   
    int choice,res,res1;
    printf("Enter choice : ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        push();
        break;
        case 2:
        res = pop();
        if(res != INT_MIN)
        printf("%d is pop from the stack\n" , res);
        break;
        case 3:
        res1 =peek();
        if(res != INT_MIN)
        printf("Top element is %d\n" , res);

        break;
        case 4:
        show();
        break;
        case 5:
        break;
        default:
        printf("Invalid Choice !!!\n");
    }

    printf("\n");


}