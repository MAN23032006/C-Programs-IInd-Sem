//program for Doubly Linked List.

#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} Node;
Node *head = NULL;
Node *prev = NULL;   
Node *createNode(int ele)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->prev = NULL;
    newNode->data = ele;
    newNode->next = NULL;
    return newNode;
}
void insertNodeatBeg(int ele)
{
    Node *newNode = createNode(ele);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    printf("Node inserted \n");
}
void insertNodeatEnd(int ele)
{
    Node *newNode = createNode(ele);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = NULL;
    }
    printf("Node Inserted !!\n");
}
void display()
{
    if (head == NULL)
        printf("List Empty !!\n");
    else
    {
        printf("Elements are : ");
        Node *temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
void insertNodeatPos(int pos, int ele){
    {
        if (head == NULL)
            printf("List Empty !!\n");
}

    if (pos == 1)
        insertNodeatBeg(ele);
    else
    {
        Node *newNode = createNode(ele);
        Node *temp = head;
        int i = 1;
        while (i < pos && temp != NULL)
        {
            temp = temp->next;
            i++;
        }
        if (i > 0 && temp != NULL)
        {
            temp->prev->next = newNode;
            newNode->prev = temp->prev;
            newNode->next = temp;
            temp->prev = newNode;
            printf("Node Inserted \n");
        }
        else
            printf("Invalid Position !!\n");
    }
}
void deleteNodeFromBegining()
{
   if(head == NULL)
   printf("List is Empty!!!\n");
    else if (head->next == NULL)
    {
        head = NULL;
        printf("Node Deleted successfully \n");
    }
    else
    {
        Node *temp = head;
        Node *t = temp;
        temp->next->prev = NULL;
        temp = temp->next;
        head = temp;
        free(t);
        printf("Node Deleted Successfully \n");
    }
}



void deleteNodeFromEnd()
{
    if (head == NULL)
        printf("List Empty \n");
    else if (head->next == NULL)
    {
        head = NULL;
        printf("Node Deleted successfully \n");
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        Node *t = temp;
        temp->prev->next = NULL;
        free(t);
        printf("Node Deleted Successfully \n");
    }
}
void deleteNodeFromPos(int pos)
{
    if (pos == 1)
        deleteNodeFromBegining();
    else if (head == NULL)
        printf("List is  Empty \n");
    else
    {
        Node *temp = head;
        int i = 1;
        while (i < pos && temp->next->next != NULL)
        {
            temp=temp->next;
            i++;
        }
        if(i>0 && temp->next->next!=NULL){
            Node*t=temp;
           
        }
    }
}
int main()
{
    while (1)
    {
        int choice, ele, pos;
        printf(".......Doubly Linked List .......\n");
        printf("Enter choice : \n");
        printf("1.Insert Node at Begining\n2.Insert Node at End\n3.Insert Node at any position\n4.Delete Node from Begining\n5.Delete from End\n6.Delete Node From Any Position\n8.sort\n9.Display\n10.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &ele);
            insertNodeatBeg(ele);
            break;
        case 2:
            printf("Enter element : ");
            scanf("%d", &ele);
            insertNodeatEnd(ele);
            break;
        case 3:
            printf("Enter position : ");
            scanf("%d", &pos);
            printf("Enter element : ");
            scanf("%d", &ele);
            insertNodeatPos(pos, ele);
            break;
        case 4:
            deleteNodeFromBegining();
            break;
        case 5:
            deleteNodeFromEnd();
            break;
        case 6:
            printf("Enter Position : ");
            scanf("%d", &pos);
            deleteNodeFromPos(pos);
            break;
        case 8:
            // sort();
            break;
        case 9:
            display();
            break;
        case 10:
            exit(0);
            break;
        default:
            printf("Invalid choice !!\n");
        }
        printf("\n");
    }
    return 0;
}