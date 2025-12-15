#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int x) {
    if (top < SIZE - 1)
        stack[++top] = x;
}

void pop() {
    if (top >= 0)
        top--;
}

void peek() {
    if (top >= 0)
        printf("%d\n", stack[top]);
}

void display() {
    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
}

int main() {
    push(5);
    push(10);
    push(15);
    peek();
    pop();
    display();
    return 0;
}
