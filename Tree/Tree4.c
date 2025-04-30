// Binary tree using linked list.



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
    if(root == NULL)
    return createNode(value);
    else{
        struct TreeNode *queue[100];
        int front = 0;
        int rear = 0;
        queue[rear++] = root;
        while(front != rear){
           struct TreeNode* temp = queue[front++];
           if(temp -> right == NULL){
           temp -> right = createNode(value);
           break;
           }
           else if(temp -> left == NULL){
         temp -> left = createNode(value);
         break;
           }
           else{
            queue[rear++] == temp -> right;
            queue[rear++] == temp-> left;
           }
    }
}


void inorder(struct TreeNode*root) {
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

    

void levelorder(struct TreeNode*root,int value){
struct TreeNode *queue[100];
int front = 0;
int rear = 0;
queue[rear++] = root;
while(front != rear){
   struct TreeNode* temp = queue[front++];
   printf("%d", temp->data);
   if(temp -> right != NULL)
   queue[rear++] = temp -> right;
   if(temp -> left != NULL)
   queue[rear++] = temp -> left;
}
}

struct TreeNode* search(struct TreeNode* root , int value) {
    struct TreeNode *queue[100];
    int front = 0;
    int rear = 0;
    queue[rear++] = root;
    while(front != rear){
       struct TreeNode* temp = queue[front++];
     if(value = temp->data);
     return temp;
       if(temp -> right != NULL)
       queue[rear++] = temp -> right;
       if(temp -> left != NULL)
       queue[rear++] = temp -> left;
}
return NULL;
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


void delete(struct TreeNode* root , int value) {
  struct TreeNode* temp = search(root,value);
  if(temp == NULL)
  printf("Element Not Available!!!\n");
  else{
    struct TreeNode *last = findDeepest(root);
    temp-> data = last-> data;
    free(last);
    printf("Node deleted!!!!\n");
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

// // Structure for a node in the binary tree
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

// // Function to insert a node (level order insertion for simplicity)
// struct Node* insertLevelOrder(struct Node* root, int data) {
//     if (root == NULL) {
//         return createNode(data);
//     }

//     // Use a queue for level order traversal
//     struct Node** queue = (struct Node**)malloc(sizeof(struct Node*) * 100); // Assuming a reasonable max size
//     int front = 0, rear = 0;
//     queue[rear++] = root;

//     while (front < rear) {
//         struct Node* current = queue[front++];

//         if (current->left == NULL) {
//             current->left = createNode(data);
//             free(queue);
//             return root;
//         }
//         queue[rear++] = current->left;

//         if (current->right == NULL) {
//             current->right = createNode(data);
//             free(queue);
//             return root;
//         }
//         queue[rear++] = current->right;
//     }
//     free(queue);
//     return root; // Should ideally not reach here in a balanced insertion scenario
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

//     root = insertLevelOrder(root, 1);
//     root = insertLevelOrder(root, 2);
//     root = insertLevelOrder(root, 3);
//     root = insertLevelOrder(root, 4);
//     root = insertLevelOrder(root, 5);
//     root = insertLevelOrder(root, 6);
//     root = insertLevelOrder(root, 7);

//     printf("Inorder traversal: ");
//     inorderTraversal(root);
//     printf("\n");

//     printf("Preorder traversal: ");
//     preorderTraversal(root);
//     printf("\n");

//     printf("Postorder traversal: ");
//     postorderTraversal(root);
//     printf("\n");

//     return 0;
// }
