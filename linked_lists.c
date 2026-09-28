#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node *create_node(int data) {
  Node *new_node = (Node *)malloc(sizeof(Node));
  if (!new_node) {
    perror("malloc failed");
    exit(EXIT_FAILURE);
  }
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}

// Advance 'fast' by 2 and 'slow' by 1 until 'fast' hits the end.
Node *find_middle(Node *head) {
  if (head == NULL)
    return NULL;

  Node *slow = head;
  Node *fast = head;

  while (fast != NULL) {
    slow = slow->next;
    fast = fast->next->next;
  }

  return slow;
}

int main(void) {
  Node *head = create_node(10);
  head->next = create_node(20);
  head->next->next = create_node(30);

  Node *middle = find_middle(head);

  if (middle) {
    printf("Middle value: %d\n", middle->data);
  }

  return 0;
}
