/Wap to insert elements in an array.
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
void insert(int *arr, int *size){
    int pos,value,i;
    printf(" Enter position: ");
    scanf("%d", &pos);
     printf(" Enter value: ");
    scanf("%d", &value);
    if(pos > *size || pos <= 0)
    printf("Invalid position\n");
   
    else{
        for(i = *size; i>=pos; i--){
            arr[i] = arr[i-1];
        }
        arr[pos-1] = value;
         (*size)++;
         printf("Element Inserted !!!\n");
    }
}
void printList(int *arr, int n){
    if (n == 0)
    printf("Array is empty\n");
    else{
    int i;
    printf("Array elements are:");
    for(i = 0; i < n; i++){
    printf("%d ", arr[i]);
    printf("\n");
    }
  }
}
void delete(int *arr,int *size){
    int pos,i;
    printf(" Enter position: ");
    scanf("%d", &pos);
    if(pos <= 0 || pos > *size)
    printf("Invalid position !!!\n");
    else{
        for(i = pos-1; i <*size-1; i++){
            arr[i] = arr[i+1];
        }
    }
}
int main() {
  
    int arr[MAX_SIZE], size,i;
    printf("Enter list  size: ");
    scanf("%d", &size);
    printf(" Enter list Elements : ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
     }

//     int i;
//     for(i=0;i<size;i++)
//     {
//         printf("Enter Element %d : ",i+1);
//         scanf("%d",&arr[i]);
//         }
//         printf("\n Array Elements are :");
//         for(i=0;i<size;i++)
//         {
//             printf("%d ",arr[i]);
//             }
//             return 0;

// }
while(1) {
printf( "1.Insertion\n");
printf("2. Deletion\n");
printf("3. Traversing\n");
printf("4. Searching\n");
printf("5. Exit\n");
int choice;
printf("Enter your choice: ");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    insert(arr, &size);
    break;
    case 2:
    break;
    case 3:
    printList(arr, size);
    break;
    case 4:
    break;
    case 5:
    break;
    default:
    printf("Invalid choice\n");
    }
    printf("\n");

   }
   return 0;
}





   