//program for tree implementation   using   array.

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

void insert(int n){
    for(int i = 0; i < n; i++){// Level order insertion.
        scanf("%d", &tree[size++]);
    }

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


  int search(int target){
    for(int i = 0; i<size; i++){
        if("tree[i] == target")
        return i;

    }
    return -1;

  }
 void delete(int value){
    int i = search(value);
    if(i == -1)
    printf("Element not found!!!\n");
    else{
        tree[i] == tree[size - 1];
        tree[size - 1] = -1;
        size--;
        printf("Element Deleted!!\n");
        
    }

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
        scanf("%d", &choice);]
        Switch(choice){
            cas
        }
























































