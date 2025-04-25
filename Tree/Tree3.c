// //program for binary search  tree implementation.

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #include <limits.h> // For INT_MAX and INT_MIN

// // Define the maximum size of the binary search tree (BST)
// #define MAX_SIZE 1000

// // Function to get the left child index
// int leftChild(int index) {
//     return (2 * index) + 1;
// }

// // Function to get the right child index
// int rightChild(int index) {
//     return (2 * index) + 2;
// }

// // Function to get the parent index
// int parent(int index) {
//     if (index == 0) return -1; // Root has no parent
//     return (index - 1) / 2;
// }

// // Function to insert a node into the BST
// void insertNode(int *tree, int value, int size) {
//     if (tree[0] == INT_MIN) {
//         tree[0] = value; // Insert at root if tree is empty
//         return;
//     }

//     int currentIndex = 0;
//     while (currentIndex < size) {
//         if (tree[currentIndex] == INT_MIN) {
//             tree[currentIndex] = value; // Insert at the empty slot
//             return;
//         } else if (value < tree[currentIndex]) {
//             currentIndex = leftChild(currentIndex);
//         } else if (value > tree[currentIndex]) {
//             currentIndex = rightChild(currentIndex);
//         } else {
//             // Value already exists; handle as needed (e.g., do nothing, update count, etc.)
//             printf("Value %d already exists in the tree.\n", value);
//             return; // For simplicity, we just return here
//         }
//         if(currentIndex >= size){
//              printf("The tree is full. Cannot insert %d\n", value);
//              return;
//         }
//     }
// }
// // Function to find the minimum value in the BST
// int findMinimum(int *tree, int size) {
//     int currentIndex = 0;
//     if (tree[currentIndex] == INT_MIN) {
//         return INT_MIN; // Tree is empty
//     }
//     while (currentIndex < size && tree[leftChild(currentIndex)] != INT_MIN) {
//         currentIndex = leftChild(currentIndex);
//     }
//     return tree[currentIndex];
// }

// // Function to find the maximum value in the BST
// int findMaximum(int *tree, int size) {
//     int currentIndex = 0;
//     if (tree[currentIndex] == INT_MIN) {
//         return INT_MIN; // Tree is empty
//     }
//     while (currentIndex < size && tree[rightChild(currentIndex)] != INT_MIN) {
//         currentIndex = rightChild(currentIndex);
//     }
//     return tree[currentIndex];
// }

// // Function to search for a value in the BST
// bool search(int *tree, int value, int size) {
//     int currentIndex = 0;
//     if (tree[0] == INT_MIN)
//     {
//         return false;
//     }
//     while (currentIndex < size && tree[currentIndex] != INT_MIN) {
//         if (value == tree[currentIndex]) {
//             return true;
//         } else if (value < tree[currentIndex]) {
//             currentIndex = leftChild(currentIndex);
//         } else {
//             currentIndex = rightChild(currentIndex);
//         }
//     }
//     return false;
// }

// // Function to perform an inorder traversal of the BST
// void inorderTraversal(int *tree, int index, int size) {
//     if (index < size && tree[index] != INT_MIN) {
//         inorderTraversal(tree, leftChild(index), size);
//         printf("%d ", tree[index]);
//         inorderTraversal(tree, rightChild(index), size);
//     }
// }

// // Function to perform a preorder traversal of the BST
// void preorderTraversal(int *tree, int index, int size) {
//     if (index < size && tree[index] != INT_MIN) {
//         printf("%d ", tree[index]);
//         preorderTraversal(tree, leftChild(index), size);
//         preorderTraversal(tree, rightChild(index), size);
//     }
// }

// // Function to perform a postorder traversal of the BST
// void postorderTraversal(int *tree, int index, int size) {
//     if (index < size && tree[index] != INT_MIN) {
//         postorderTraversal(tree, leftChild(index), size);
//         postorderTraversal(tree, rightChild(index), size);
//         printf("%d ", tree[index]);
//     }
// }

// // Function to display the BST (array representation)
// void displayTree(int *tree, int size) {
//     printf("Binary Search Tree (Array Representation):\n");
//     for (int i = 0; i < size; i++) {
//         if (tree[i] != INT_MIN) {
//             printf("Index %d: %d\n", i, tree[i]);
//         } else {
//             printf("Index %d: NULL\n", i);
//         }
//     }
// }

// int main() {
//     int tree[MAX_SIZE];
//     // Initialize the tree with a sentinel value (INT_MIN) to represent empty nodes
//     for (int i = 0; i < MAX_SIZE; i++) {
//         tree[i] = INT_MIN;
//     }

//     int choice, value;

//     do {
//         printf("\nBinary Search Tree Operations (Array Implementation)\n");
//         printf("1. Insert Node\n");
//         printf("2. Find Minimum\n");
//         printf("3. Find Maximum\n");
//         printf("4. Search\n");
//         printf("5. Inorder Traversal\n");
//         printf("6. Preorder Traversal\n");
//         printf("7. Postorder Traversal\n");
//         printf("8. Display Tree\n");
//         printf("0. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter the value to insert: ");
//                 scanf("%d", &value);
//                 insertNode(tree, value, MAX_SIZE);
//                 break;
//             case 2:
//                 value = findMinimum(tree, MAX_SIZE);
//                 if (value != INT_MIN)
//                     printf("Minimum value: %d\n", value);
//                 else
//                     printf("Tree is empty.\n");
//                 break;
//             case 3:
//                 value = findMaximum(tree, MAX_SIZE);
//                  if (value != INT_MIN)
//                     printf("Maximum value: %d\n", value);
//                 else
//                     printf("Tree is empty.\n");
//                 break;
//             case 4:
//                 printf("Enter the value to search: ");
//                 scanf("%d", &value);
//                 if (search(tree, value, MAX_SIZE))
//                     printf("%d found in the tree.\n", value);
//                 else
//                     printf("%d not found in the tree.\n", value);
//                 break;
//             case 5:
//                 printf("Inorder Traversal: ");
//                 inorderTraversal(tree, 0, MAX_SIZE);
//                 printf("\n");
//                 break;
//             case 6:
//                 printf("Preorder Traversal: ");
//                 preorderTraversal(tree, 0, MAX_SIZE);
//                 printf("\n");
//                 break;
//             case 7:
//                 printf("Postorder Traversal: ");
//                 postorderTraversal(tree, 0, MAX_SIZE);
//                 printf("\n");
//                 break;
//             case 8:
//                 displayTree(tree, MAX_SIZE);
//                 break;
//             case 0:
//                 printf("Exiting program.\n");
//                 break;
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     } while (choice != 0);

//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int tree[MAX];
int size = 0;

void init(){
    for(int i = 0; i < MAX ; i++){
        tree[i] = -1;
    }
}

void insert(int value,int root){
    if(tree[root] == -1)
    tree[root] = value;
    else if(value < tree[root])
    insert(value,2*root + 1);
    else if(value > tree[root])
    insert(value,2*root +2);
    }

    void preorder(int root){
        if(tree[root]==-1)
        return;
        printf("%d ",tree[root]);
        preorder(2*root+1);                                                                                                        
         preorder(2*root+2);
    }


    void inorder(int root){
        if(tree[root]==-1)
        return;
        inorder(2*root+1);//10 20 30 40 -1 60 70 80 90 -1 -1 -1 -1 100
        printf("%d ",tree[root]);
        inorder(2*root+2);
    }


    void postorder(int root){
    if(tree[root] ==  -1);
    return;
  postorder(2*root + 1);
  postorder(2*root + 2);
  printf("%d ",tree[root]);

  }


//   int search(int target){
//     int i = 0;
//     while(i < MAX && tree[i] != -1){
//         if(tree[i] == target)
//         return i;
//         else if(target < tree[i])
//         i = 2*i + 1;
//         else
//         i = 2*i + 2;
//     }

//    return -1;

  
//   }

int search(int i,int target){
    if(i >  MAX && tree[i] == -1)
    return -1;
    else if(tree[i] == target)
    return i;
    else if(target < tree[i])
    return search(2*i + 1,target);
    else
    return search(2*i + 2,target);




}
 void delete(int value){
    
 }

            

int main(){
    init();
   int n,choice,index;
   while(1){
    printf("----- Binary Tree!!!!!\n");
        printf("1. Insert \n");
        printf("2. Preorder Traversal\n");
        printf("3. Inorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Search Node\n");
        printf("6. Delete Node\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("Enter the value: ");
            scanf("%d", &value);
            insert(value,0);

            case 2:
            printf("Preorder traversal: ");
            preorder(0);

            
            case 3:
            printf("Inorder traversal: ");
            inorder(0);
            
            case 4:
            printf("Postorder traversal: ");
            postorder(0);
            
            case 5:
            printf("Enter the value to search:");
            scanf("%d", &value);


            case 6:
            printf("Enter the value to delete: ");
            scanf("%d", &value);

            case 7:
            case 8:
        }





































