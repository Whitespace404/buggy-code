#include <stdio.h>

typedef struct {
    int top;
    int nums[50];
} stack;

void stack_push(stack s, int value) {
    if (s.top > 50) {
        printf("Stack full\n");
        return;
    }
    s.nums[++s.top] = value;
    printf("Pushed %d to stack!\n", value);
}

int stack_pop(stack s) {
    if (s.top == -1) {
        printf("Stack empty!\n");
        return -1;
    }
    int last_element = s.nums[s.top];
    s.top--;
    printf("Popped %d from stack\n", last_element);
    return last_element;
}

int main(void) {
    stack st;
    st.top = -1;

    stack_push(st, 5);
    stack_push(st, 8);
    stack_pop(st);

}
