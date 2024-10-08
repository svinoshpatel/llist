#include "list.h"
#include <stdio.h>

int main() {
  Node *list = NULL;
  Node *rear = NULL;
  Node *front = NULL;
  Node *first = NULL;
  Node *last = NULL;
  char answer;
  datatype value;
  datatype element;
  while (true) {
    printf("Stack\n");
    printf("[1] Add element\n");
    printf("[2] Delete element\n");

    printf("Queue\n");
    printf("[3] Add element\n");
    printf("[4] Delete element\n\n");

    printf("List\n");
    printf("[5] Add element from beginning\n");
    printf("[6] Add element from end\n");
    printf("[7] Delete element from beginning\n");
    printf("[8] Delete element from end\n");
    printf("[9] Add element after the given one\n");
    printf("[0] Delete the given element\n");

    printf("[E]xit\n\n");
    printf("Choose an option: ");
    scanf(" %c", &answer);
    if (answer == '1') {
      printf("\nElement: ");
      scanf("%d", &value);
      push(list, value);
      printf("\n[ ");
      show(list);
      printf("]\n\n");
    } else if (answer == '2') {
      pop(list);
      printf("\n[ ");
      show(list);
      printf("] \n\n");

    } else if (answer == '3') {
      printf("\nElement: ");
      scanf(" %d", &value);
      enqueue(front, rear, value);
      printf("\n[ ");
      show(front);
      printf("]\n\n");
    } else if (answer == '4') {
      dequeue(front);
      printf("\n[ ");
      show(front);
      printf("] \n\n");

    } else if (answer == '5') {
      printf("\nElement: ");
      scanf("%d", &value);
      add_begin(first, last, value);
      printf("\n[ ");
      show(first);
      printf("]\n\n");
    } else if (answer == '6') {
      printf("\nElement: ");
      scanf("%d", &value);
      add_end(first, last, value);
      printf("\n[ ");
      show(first);
      printf("]\n\n");
    } else if (answer == '7') {
      del_begin(first, last);
      printf("\n[ ");
      show(first);
      printf("] \n\n");
    } else if (answer == '8') {
      del_end(first, last);
      printf("\n[ ");
      show(first);
      printf("] \n\n");
    } else if (answer == '9') {
      printf("\nAdd new element after: ");
      scanf("%d", &element);
      printf("\nElement: ");
      scanf("%d", &value);
      add_mid(first, last, value, element);
      printf("\n[ ");
      show(first);
      printf("]\n\n");
    } else if (answer == '0') {
      printf("\nWhat element to delete: ");
      scanf("%d", &element);
      del_mid(first, last, element);
      printf("\n[ ");
      show(first);
      printf("] \n\n");
    }
    else {
      show(list);
      break;
    }
  }
}
