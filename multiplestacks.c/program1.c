//program 1
#include <stdio.h>
#define MAX 100
int stack[MAX], top1= -1,top2= MAX;
int isStack1empty(){
    return(top1== -1)?1:0;
}
int isStack2empty(){
    return(top1== MAX)?1:0;
}
int isStack1full(){
    return(top1== top2-1)?1:0;
}
int isStack2full(){
    return(top2== top1+1)?1:0;
}
void push_stack1(int data){
    if(isStack1full()){
    printf("stack1 overflow\n");}
    else{
        stack[++top1]= data;
        printf("Element added:0\n");
    }
}
void push_stack2(int data){
    if(isStack2full())
    printf("stack2 overflow\n");
    else{
        stack[--top1]= data;
        printf("Element added:0\n");
    }
}
void pop_stack1(){
    if(top1==-1)
    printf("stack1 underflow\n");
    else{
        printf("%d", stack[top1]);
    }
}
void pop_stack2(){
    if(top2==MAX)
    printf("stack2 underflow\n");
    else{
        printf("%d", stack[top2]);
    }
}