// Linear queue


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
int queue[SIZE], rear = -1, front = -1;
int isEmpty(){
    return(front == -1) ? 1 : 0;

}

int isfull(){
    return(rear == SIZE - 1) ? 1 : 0;

}


void enqueue(int data){
    rear++;
    queue[++rear] = data;
    if(front == -1)
    front = rear;

    printf("Elment Inserted!!!\n");

}


int dequeue(){
    int data  = queue[front];
    if(front == rear)
    front = rear - 1;
    else 
    front ++;
    return data;

}


int peek(){
    return queue[front];
}



void display(){
    printf("Queue elements are : \n");
    for(int i = front; i <= rear; i++){
        printf("%d", queue[i]);

    }

}






int main(){
    while(1){
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4.  Display\n");
        printf("5.  Exit\n");

        int choice ,data;
        printf("Enter the choice");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            if(isfull())
               printf("Queue Overflow!!!\n");
               else{
                printf("Enter the element : ");
                scanf("%d",&data );
                enqueue(data);
               }
             break;

            case 2:
            if(isempty())
                printf("Queue Underflow!!!\n");
                else
                printf("%d dequeue from the queue\n", dequque());




             break;

            case 3:


            if(isempty())
            printf("Queue is empty!!!\n");
            else
            printf("Element available at front is %d\n", peek());

             break;

            case 4:


            if(isempty())
            printf("Queue is empty!!!\n");
            else
            display();



             break;


            case 5:


               exit(0);
            default :
            printf("Invalid choice !!!\n");
        }
        printf("\n");
    }

}

