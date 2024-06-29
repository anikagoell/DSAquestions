#include<stdio.h>
#define max 25
int push( int arr[], int top) {
    if(top==max-1){
        printf("stack overflowww");
    }
    else{
        top++;
        printf("enter data: ");
        scanf("%d",&arr[top]);
    }
    return(top);
} 

int pop( int arr[], int top) {
    if(top==-1){
        printf("stack underflowww");
    }
    else{
        printf("%d",arr[top]);
        top--;
    }
    return(top);
} 

void display( int arr[], int top) {
    if(top==-1){
        printf("stack underflowww");
    }
    else{
        while(top>-1){
        printf("%d\t\t",arr[top]);
        top--;
    }
    }
} 

void peek( int arr[], int top) {
    if(top==-1){
        printf("stack underflowww");
    }
    else{
        printf("%d\t\t",arr[top]);
   }
} 

int main(){
    int stack[max], top=-1;
    int ch;
    do{
        printf("\n1.push\t2.pop\t3.display\t4.peek:\t");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            top=push(stack,top);
            break;
            case 2:
            top=pop(stack,top);
            break;
            case 3:
            display(stack,top);
            break;
            case 4:
            peek(stack,top);
            break;
        }
    }while(ch<5);
}   
