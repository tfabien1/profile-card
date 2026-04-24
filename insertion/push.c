#include<stdio.h>
#define max 5
int stack [max];
int top=-1;
void push(){
    int n;
if(top==-1){
    printf("the stack is empty:");
    top++;
    printf("enter number to display:");
    scanf("%d",&n);
}else if(top==max-1){
    printf("the stack is full");
    stack[top]=n;

}

}
    


    
