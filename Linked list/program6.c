// Implement a Queue using linked list.


#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;
void push(int value)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    if (temp == NULL)
        printf("stack overflow !!!\n");
    else
    {
        temp->data = value;
        temp->next = top;
        top = temp;
        printf("Push %d into the stack\n", value);
    }
}
int pop()
{
    if (top == NULL) {
        printf("Stack Underflow !!!\n");
    return -1;
    }

    else
    {
        int val = top->data;
        struct Node *temp = top;
        top = top->next;
        free(temp);
        return val;
    }
}

void show()
{
    if (top == NULL)
    {
        printf("Stack is Empty!!!\n");
    }
    else
    {
        printf("Stack elements are:")
    }
}
int main()
{
    while (1)
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Show\n");
        printf("5. Exit\n");
        int choice, value;
        printf("Enter Choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value : ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            value = pop();
            if (value != -1)
                printf("%d pop from the Stack\n", value);
            break;
        case 3:
            value = peek();
            if (value != -1)
                printf("Top element in stack is %d\n", value);
            break;
        case 4:
            show();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Choice !!!!\n");
        }
    }
    return 0;
}