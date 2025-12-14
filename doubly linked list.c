#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insert(int x)
{
    struct node *n, *t;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = x;
    n->prev = NULL;
    n->next = NULL;

    if (head == NULL)
    {
        head = n;
    }
    else
    {
        t = head;
        while (t->next != NULL)
            t = t->next;

        t->next = n;
        n->prev = t;
    }
}

void display()
{
    struct node *t = head;
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    display();
    return 0;
}
