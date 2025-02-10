//Wap to insert elements in an array.
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
void insert(int *arr, int *size){
    int pos,value,i;
    printf(" Enter position: ");
    scanf("%d", &pos);
     printf(" Enter value: "); 
    scanf("%d", &value);
    if(pos > *size || pos < *size)
    printf("Invalid position\n");
    else if( *size == pos)
        arr[size]= value;
    else{
        for(i = size; i>pos; i--){
            arr[i] = arr[i-1];
        }
        arr[i] = value;
    }
}
int main() {
  
    int arr[MAX_SIZE], size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf(" Enter Array Elements : ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
`    }

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
while(1){
printf( "1. Insert At End\n");
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
    printf("Invalid choice\n");
}
 }
   return 0;
}