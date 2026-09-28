#include <stdio.h>

typedef struct {
    int values[50];
    int top;
} stack;

void stack_push(stack s, int value) {
    s.top++:
    s.values[s.top] = value;
}

int stack_pop(stack s) {
    if (top == -1) {
        printf("Stack is empty, cannot pop!");
        return -1;
    }
    int last_element = s.values[s.top];
    s.top--;
}

int main(void) {
    stack numbers;
    stack_push(numbers, 5);
    stack_push(numbers, 8);
    stack_push(numbers, 3);
    stack_push(numbers, 4);

}
