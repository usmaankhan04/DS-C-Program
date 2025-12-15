#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int x) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = x;
    if (head == NULL) {
        head = newnode;
        newnode->next = head;
    } else {
        struct node *temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = newnode;
        newnode->next = head;
    }
}

void display() {
    if (head == NULL)
        return;
    struct node *temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();
    return 0;
}
