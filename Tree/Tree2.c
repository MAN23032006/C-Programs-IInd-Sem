// #include<stdio.h>
// #include<stdlib.h>
// #define MAX 100

// int tree[MAX];
//  int size=0;


//  void init(){
//     for(int i=0;i<size;i++)
//     tree[i]=-1;}
//     void insert(int root,int value){
//         for(int i=0;i<n;i++)
//      {   scanf("%d",&tree[i]);
//     }}


//     void preorder(int root){
//         if(tree[root]==-1)
//         return;
//         printf("%d ",tree[root]);
//         preorder(2*root+1);                                                                                                        
    
        
//         preorder(2*root+2);
//     }


//     void inorder(int root){
//         if(tree[root]==-1)
//         return;
//         inorder(2*root+1);//10 20 30 40 -1 60 70 80 90 -1 -1 -1 -1 100
//         printf("%d ",tree[root]);
//         inorder(2*root+2);
//     }


//     void preorder(int root){
//         if(tree[root]==-1)
//         return;
//         printf("%d ",tree[root]);
//         preorder(2*root+1);                                                                                                        
    
        
//         preorder(2*root+2);
//     }


//     void inorder(int root){
//         if(tree[root]==-1)
//         return;
//         inorder(2*root+1);//10 20 30 40 -1 60 70 80 90 -1 -1 -1 -1 100
//         printf("%d ",tree[root]);
//         inorder(2*root+2);
//     }
//     int search(int target, int root){
//        for(int i=0;i<size;i++)
//         {if(tree[i]==target)
//         return i;
//     }
//     return -1;}



//     void delete(int val, int root){
//         int i=search(val,0);
//         if(i!=-1)
//      {   tree[i]=tree[size-1];
//     tree[size-1]=-1;
//     size--;
//     printf("Element Deleted!!!!\n");
//     }
//     else{
//         printf("Element Not Found!!!!\n");
//     }
//     }



//     int main(){
//         int n;
//         printf("Enter the value of N:");
//         scanf("%d",&n);
//         init();
//         insert(n);
//         printf("Pre-Order:\n");
//         preorder(0);
//         printf("In-Order:\n");
//         inorder(0);
//         printf("Post-Order:\n");
//         postorder(0);
//         return 0;
//     }
    

#include <stdio.h>
#include <stdlib.h>

// Function to calculate the maximum size of the tree array
int calculateSize(int height) {
    return (1 << (height + 1)) - 1;
}

// Function to insert a node into the binary tree represented by an array
void insert(int *tree, int data, int index, int height) {
    if (index >= calculateSize(height)) {
        printf("Tree is full. Cannot insert %d\n", data);
        return;
    }
    if (tree[index] == 0) {
        tree[index] = data;
    } else {
        if (data < tree[index]) {
            insert(tree, data, 2 * index + 1, height); // Insert in left subtree
        } else {
            insert(tree, data, 2 * index + 2, height); // Insert in right subtree
        }
    }
}

// Function to perform inorder traversal of the binary tree represented by an array
void inorderTraversal(int *tree, int index, int height) {
    if (index < calculateSize(height) && tree[index] != 0) {
        inorderTraversal(tree, 2 * index + 1, height); // Left subtree
        printf("%d ", tree[index]);                   // Root
        inorderTraversal(tree, 2 * index + 2, height); // Right subtree
    }
}

// Function to perform preorder traversal of the binary tree represented by an array
void preorderTraversal(int *tree, int index, int height) {
    if (index < calculateSize(height) && tree[index] != 0) {
        printf("%d ", tree[index]);                   // Root
        preorderTraversal(tree, 2 * index + 1, height); // Left subtree
        preorderTraversal(tree, 2 * index + 2, height); // Right subtree
    }
}

// Function to perform postorder traversal of the binary tree represented by an array
void postorderTraversal(int *tree, int index, int height) {
    if (index < calculateSize(height) && tree[index] != 0) {
        postorderTraversal(tree, 2 * index + 1, height); // Left subtree
        postorderTraversal(tree, 2 * index + 2, height); // Right subtree
        printf("%d ", tree[index]);                   // Root
    }
}

// Function to search for a node with a given data in the array
int search(int *tree, int data, int height) {
    for (int i = 0; i < calculateSize(height); i++) {
        if (tree[i] == data) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

// Function to delete a node (replace with 0)
void deleteNode(int *tree, int data, int height) {
    int index = search(tree, data, height);
    if (index != -1) {
        tree[index] = 0; // Mark the node as deleted
        printf("Node with data %d deleted.\n", data);
    } else {
        printf("Node with data %d not found.\n", data);
    }
}

int main() {
    int height, maxNodes, choice, data, index;

    printf("Enter the height of the binary tree: ");
    scanf("%d", &height);

    maxNodes = calculateSize(height);
    int *tree = (int *)calloc(maxNodes, sizeof(int)); // Initialize all elements to 0

    if (tree == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
     for (int i = 0; i < maxNodes; i++) {
        tree[i] = 0; // Initialize the array to 0.
    }

    printf("Binary Tree Operations (Array Implementation)\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert Node\n");
        printf("2. Inorder Traversal\n");
        printf("3. Preorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Search Node\n");
        printf("6. Delete Node\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insert(tree, data, 0, height);
                break;
            case 2:
                printf("Inorder Traversal: ");
                inorderTraversal(tree, 0, height);
                printf("\n");
                break;
            case 3:
                printf("Preorder Traversal: ");
                preorderTraversal(tree, 0, height);
                printf("\n");
                break;
            case 4:
                printf("Postorder Traversal: ");
                postorderTraversal(tree, 0, height);
                printf("\n");
                break;
            case 5:
                printf("Enter data to search: ");
                scanf("%d", &data);
                index = search(tree, data, height);
                if (index != -1) {
                    printf("Node with data %d found at index %d.\n", data, index);
                } else {
                    printf("Node with data %d not found.\n", data);
                }
                break;
            case 6:
                printf("Enter data to delete: ");
                scanf("%d", &data);
                deleteNode(tree, data, height);
                break;
            case 7:
                printf("Exiting program.\n");
                free(tree);
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    free(tree); // free the allocated memory.
    return 0;
}

