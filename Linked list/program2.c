// Doubly linked list


#include <stdio.h>
#include<stdlib.h>


struct Node{
struct Node* prev;
int data;
struct Node* next;
};

struct Node* CreateNode(int ele){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = ele;
    temp -> prev = temp -> next = NULL;
    return temp;
}

void insertNodeInBeg(int ele){
   struct  Node* newNode = createNode(ele);
   if(head == NULL)
   head = newnode;
   else{
    newNode -> next = head;
    head -> prev = newnode;
    head = newnode;
  }
}


void insertNodeAtEnd(int ele){
    struct  Node* newNode = createNode(ele);
    if(head == NULL)
     head = newNode;
     else{
        struct Node* temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;

        }
        temp -> next = newNode;
        newNode -> prev = temp;


     }

    Printf("Node Inserted!!!\n");

}

void insertNodeAtAnyPos(int pos, int ele){

    if(head == NULL){
        head = newNode;
    }

    else if(pos==1){
        insertNodeInBeg(ele);
       }
     else{
       struct  Node* newNode = createNode(ele);
       struct Node* p =head;
        int i=1;
        while(i<pos&& temp->next !=NULL){
           temp=temp->next;
           i++;
        }
        if(temp->next !=NULL && pos>0){
           newNode->next=temp->next;
           temp->next=newNode;
           printf("Node Inserted !!!!\n");
        }
        else{
            printf("Invalid Position !!!!\n");
        }
       }
     }
        
    
    


int main(){
   system("cls");
    while(1){
       printf("---- Singly Linked List ----\n");
        printf("1. Insert Node In Beginning\n");
        printf("2.Insert Node At End\n");
        printf("3.Insert Node At Any Position \n");
        printf("4. Delete Node From Beginning\n");
        printf("5. Delete Node From End\n");
        printf("6. Delete Node From Any Position \n");
        printf("7.Search Element In List\n");
  
        printf("8. Display List\n");
        printf("9. Exit\n\n");
         int choice,value,pos,target;
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
         case 1:
        // printf("Enter value: ");
        // scanf("%d",&value);
        // insertNodeInBeg(value);
        //  break;

          case 2:
        // printf("Enter value: ");
        //  scanf("%d",&value);
        // insertNodeAtEnd(value);
        //  break;

          case 3:
        //    printf("Enter value: ");
        // scanf("%d",&value);
        // printf("Enter Position: ");
        //   scanf("%d",&pos);
        // insertNodeAtAnyPos(value,pos);
        //  break;

          case 4:
        //  deleteNodefromBeg();
        //  break;
          case 5:
         
        // deleteNodefromEnd();
        //  break;
         case 6:
    //    printf("Enter position");
    //    scanf("%d",&pos);
    //     deleteNodeFromAnyPos(pos);
         break;
         case 7:
        //  search(target);
        //  break;
         case 8:
       //display()
         break;
         case 9:
      // exit(0);
         break;
         default:
      printf("Invalid Choice !!!!\n");
        }
        printf("\n");
        system("pause"); // without pressing system will not work
 }
return 0;
}

    
