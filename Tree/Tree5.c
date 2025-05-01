// Binary Search  tree using linked list.



#include <stdio.h>
#include <stdlib.h>

struct TreeNode{
    struct TreeNode*left;
    int data;
    struct TreeNode*right;

};


struct TreeNode*createNode(int value){
    struct TreeNode* node = (struct  TreeNode*)malloc(sizeof(struct TreeNode));
    node -> data = value;
    node -> left  = node -> right = NULL;
    return node;
}



struct TreeNode*insert(struct TreeNode*  root,int value) {
    if(root!= NULL)
    return createNode(value);
    else if(value < root->data)
    root ->left = insert(root->right,value);
    else if(value > root->data)
    root-> right = insert(root->right,value);
}


void inorder(struct TreeNode*root){
    if(root != NULL)
    printf("%d", root->data);
    inorder(root -> left);
    inorder(root -> right);
}

void preorder(struct TreeNode*root) {
    if(root != NULL)
    preorder(root -> left);
    printf("%d", root->data);
    preorder(root -> right);
  
}


void postorder(struct TreeNode*root){
    if(root != NULL)
   
    postorder(root -> left);
   postorder(root -> right);
    printf("%d", root->data);
}

    



struct TreeNode* search(struct TreeNode*root,int value ){
    if(root == NULL)
    return NULL;
    else if(root->data == value)
    return root;
    else if(value < root -> data)
    return search(root->left,value);
    else 
    return search(root->right, value);
}

// Function to find the node with the minimum value in a subtree
struct TreeNode* findMin(struct TreeNode* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

struct TreeNode* findDeepest(struct TreeNode* root){
    struct TreeNode *queue[100];
int front = 0;
int rear = 0;
queue[rear++] = root;
struct TreeNode* temp;
while(front != rear){
   if(temp -> right != NULL)
   queue[rear++] = temp -> right;
   if(temp -> left != NULL)
   queue[rear++] = temp -> left;
}
int i = (rear-2)/2;
if(queue[i] -> left == temp)
queue[i]->left = NULL;
else
queue[i]->right = NULL;
return temp;
}


struct TreeNode* delete(struct TreeNode* root,int value){
    if(root == NULL)
    return NULL;
    else if(value < root -> data)
   root->left = delete(root->left,value);
    else if(value > root->data)
    root->right = delete(root->right, value);
    else{
        if(root->left == NULL && root->right == NULL){
        free(root);
        return NULL;
        }
    
    else if (root->left == NULL) {
      struct Node* temp = root->right;
         free(root);
         return temp;
      } 
      else if (root->right == NULL) {
     struct Node* temp = root->left;
      free(root);
    return temp;
  }

  else{               //two child
    struct TreeNode* temp = findMin(root->right);

            // Copy the inorder successor's data to this node
            root->data = temp->data;
    
            // Delete the inorder successor
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

  }


int main() {
    
int choice,value;
    struct  TreeNode* root = NULL;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert e\n");
        printf("2. Preorder\n");
        printf("3. Inorder \n");
        printf("3. Preorder \n");
        printf("4. Postorder \n");
        printf("5. Level Order\n");
        printf("5. Search \n");
        printf("6. Delete\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                
            case 2:
            case 3:
               
            case 4:
                
            case 5:
               
                break;
            case 6:
            
                break;
            case 7:
            
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    free(tree); // free the allocated memory.
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// // Structure for a node in the binary search tree
// struct Node {
//     int data;
//     struct Node *left;
//     struct Node *right;
// };

// // Function to create a new node
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }

// // Function to insert a new node into the binary search tree
// struct Node* insert(struct Node* root, int data) {
//     // If the tree is empty, create a new root node
//     if (root == NULL) {
//         return createNode(data);
//     }

//     // If the data is less than the root's data, insert in the left subtree
//     if (data < root->data) {
//         root->left = insert(root->left, data);
//     }
//     // If the data is greater than the root's data, insert in the right subtree
//     else if (data > root->data) {
//         root->right = insert(root->right, data);
//     }
//     // If the data is equal, do nothing (duplicates are not allowed in this implementation)
//     return root;
// }

// // Function to search for a value in the binary search tree
// struct Node* search(struct Node* root, int data) {
//     // If the tree is empty or the root's data matches the search data
//     if (root == NULL || root->data == data) {
//         return root;
//     }

//     // If the search data is less than the root's data, search in the left subtree
//     if (data < root->data) {
//         return search(root->left, data);
//     }
//     // If the search data is greater than the root's data, search in the right subtree
//     else {
//         return search(root->right, data);
//     }
// }

// // Function to find the node with the minimum value in a subtree
// struct Node* findMin(struct Node* root) {
//     struct Node* current = root;
//     while (current && current->left != NULL) {
//         current = current->left;
//     }
//     return current;
// }

// // Function to delete a node with a given value from the binary search tree
// struct Node* deleteNode(struct Node* root, int data) {
//     if (root == NULL) {
//         return root;
//     }

//     // If the data to be deleted is smaller than the root's data, then it lies in the left subtree
//     if (data < root->data) {
//         root->left = deleteNode(root->left, data);
//     }
//     // If the data to be deleted is greater than the root's data, then it lies in the right subtree
//     else if (data > root->data) {
//         root->right = deleteNode(root->right, data);
//     }
//     // If the data is equal to the root's data, then this is the node to be deleted
//     else {
//         // Case 1: Node with no children or only one child
//         if (root->left == NULL) {
//             struct Node* temp = root->right;
//             free(root);
//             return temp;
//         } else if (root->right == NULL) {
//             struct Node* temp = root->left;
//             free(root);
//             return temp;
//         }

//         // Case 2: Node with two children
//         // Find the inorder successor (smallest node in the right subtree)
//         struct Node* temp = findMin(root->right);

//         // Copy the inorder successor's data to this node
//         root->data = temp->data;

//         // Delete the inorder successor
//         root->right = deleteNode(root->right, temp->data);
//     }
//     return root;
// }

// // Function for inorder traversal (Left-Root-Right)
// void inorderTraversal(struct Node* root) {
//     if (root != NULL) {
//         inorderTraversal(root->left);
//         printf("%d ", root->data);
//         inorderTraversal(root->right);
//     }
// }

// // Function for preorder traversal (Root-Left-Right)
// void preorderTraversal(struct Node* root) {
//     if (root != NULL) {
//         printf("%d ", root->data);
//         preorderTraversal(root->left);
//         preorderTraversal(root->right);
//     }
// }

// // Function for postorder traversal (Left-Right-Root)
// void postorderTraversal(struct Node* root) {
//     if (root != NULL) {
//         postorderTraversal(root->left);
//         postorderTraversal(root->right);
//         printf("%d ", root->data);
//     }
// }

// int main() {
//     struct Node* root = NULL;
//     int choice, value;

//     printf("Binary Search Tree Operations (Linked List Implementation)\n");

//     do {
//         printf("\n1. Insert a node\n");
//         printf("2. Search for a node\n");
//         printf("3. Delete a node\n");
//         printf("4. Inorder Traversal\n");
//         printf("5. Preorder Traversal\n");
//         printf("6. Postorder Traversal\n");
//         printf("7. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter the value to insert: ");
//                 scanf("%d", &value);
//                 root = insert(root, value);
//                 break;
//             case 2:
//                 printf("Enter the value to search: ");
//                 scanf("%d", &value);
//                 if (search(root, value) != NULL) {
//                     printf("%d found in the tree.\n", value);
//                 } else {
//                     printf("%d not found in the tree.\n", value);
//                 }
//                 break;
//             case 3:
//                 printf("Enter the value to delete: ");
//                 scanf("%d", &value);
//                 root = deleteNode(root, value);
//                 break;
//             case 4:
//                 printf("Inorder Traversal: ");
//                 inorderTraversal(root);
//                 printf("\n");
//                 break;
//             case 5:
//                 printf("Preorder Traversal: ");
//                 preorderTraversal(root);
//                 printf("\n");
//                 break;
//             case 6:
//                 printf("Postorder Traversal: ");
//                 postorderTraversal(root);
//                 printf("\n");
//                 break;
//             case 7:
//                 printf("Exiting program.\n");
//                 break;
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     } while (choice != 7);

//     return 0;
// }
