#include <stdio.h>

#define MAX 100   // Maximum size of stack

int stack[MAX];
int top = -1;

// ==============================
// Function to push elements
// ==============================
void push(int value) {
    if (top == MAX - 1) {
        printf("\nStack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("\n%d pushed into stack\n", value);
    }
}

// ==============================
// Function to pop elements
// ==============================
void pop() {
    if (top == -1) {
        printf("\nStack Underflow! Nothing to pop\n");
    } else {
        printf("\n%d popped from stack\n", stack[top]);
        top--;
    }
}

// ==============================
// Function to display stack
// ==============================
void display() {
    if (top == -1) {
        printf("\nStack is empty\n");
    } else {
        printf("\nStack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

// ==============================
// Function to show top element
// ==============================
void peek() {
    if (top == -1) {
        printf("\nStack is empty\n");
    } else {
        printf("\nTop element: %d\n", stack[top]);
    }
}

// ==============================
// Main Program (Menu Driven)
// ==============================
int main() {
    int choice, value;

    while (1) {
        printf("\n======= STACK MENU =======\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Peek (Top element)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;

            case 5:
                printf("\nExiting program...\n");
                return 0;

            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }
}