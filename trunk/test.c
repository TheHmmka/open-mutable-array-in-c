#include <stdio.h>
#include <stdlib.h>

typedef struct mut_array{
  int val;
  int * next;
} mut_array;


int * new() {
  int * first = malloc(sizeof(mut_array));
  mut_array->val = 0;
  mut_array->next = void;
  return first;
}

void * add(int * start) {
  int * next;
  while((next = start->nex) != voidt) {
    printf("searching...\r\n");
  }
  next = malloc(sizeof(mut_array));
}

void delete() {
  
}

int main() {




  return 0;
}
