#include<stdio.h>
#define max 25
int enque( int arr[], int r) {
    if(r==max-1){
        printf("stack overflowww");
    }
    else{
        (r)++;
        printf("enter data: ");
        scanf("%d",&arr[r]);
    }
    return(r);
} 

int deque( int arr[], int l, int r) {
    if(l==-1 && r==-1){
        printf("stack underflowww");
    }
    else{
        printf("%d",arr[l]);
        if(l==r){
            l=-1;
        }
        else{
            l++;
        }
    }
    return(l);
} 

void display( int arr[], int l, int r) {
    if(l==-1){
        printf("stack underflowww");
    }
    else{
        while(l<=r){
        printf("%d\t\t",arr[l]);
        l++;
    }
    }
} 

void peek( int arr[], int l) {
    if(l==-1){
        printf("stack underflowww");
    }
    else{
        printf("%d\t\t",arr[l]);
   }
} 

int main(){
    int stack[max], l=-1,r=-1;
    int ch;
    do{
        printf("\n1.enque\t2.deque\t3.display\t4.peek:\t");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            r=enque(stack,r);
            if(l==-1){
                l=0;
            }
            break;
            case 2:
            l=deque(stack,l,r);
            if(l==-1){
                r=-1;
            }
            break;
            case 3:
            display(stack,l,r);
            break;
            case 4:
            peek(stack,l);
            break;
        }
    }while(ch<5);
}
