#include <stdio.h>
#include <stdlib.h>
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
int main(){
    while(1){
        printf("1. Pop\n");
        printf("2. Push\n");
        printf("3. Peek\n");
        printf("4. Show\n");
        printf("5. Exit\n");  
    }
   
    int choice;
    printf("Enter choice : ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        break;
        case 2:
        break;
        case 3:
        break;
        case 4:
        break;
        case 5:
        break;
        default:
        printf("Invalid Choice !!!\n");
    }

    printf("\n");


}