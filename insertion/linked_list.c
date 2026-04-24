#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};struct node*head;
void create(){
    int num;
    printf("enter num 1:");
    scanf("%d",&num);
    head->data=num;
    head->next=0;
}
int main(){
    int n;
    printf("how many nodes:");
    scanf("%d",&n);
    head=(struct node*)malloc(sizeof(struct node));
    printf("enter num 1:");
    scanf("%d",&num);
    head->data=num;
    head-> *next =0;
    struct node*temp=head;
    for(int i=2;i<=n;i++){
        structnode*newnode=structnode*malloc(sizeof(struct node));
        printf("enter num %d:",i);
        scanf("%d",&num);
        newnode->data=num;
        newnode->next=0;
        temp->next=newnode;
        temp=newnode;
    }

}



