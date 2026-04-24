#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;
void display(struct node* head) {
    struct node* temp = head;

    printf("Linked List: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {
    int n, i, num;
    struct node *temp, *newnode;

    printf("How many nodes: ");
    scanf("%d", &n);

    // create first node
    head = (struct node*) malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &num);

    head->data = num;
    head->next = 0;
    temp = head;

    // create remaining nodes
    for(i = 1; i < n; i++) {
        newnode = (struct node*) malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &num);

        newnode->data = num;
        newnode->next = 0;

        temp->next = newnode;
        temp = newnode;
    }

    display(head);
    return 0;

}