#include <stdio.h>
#include <stdlib.h>

typedef struct mut_array{
  int val;
  struct mut_array * next;
} mut_array;

mut_array * sentinel;


mut_array * new() {
  mut_array * first = malloc(sizeof(mut_array));
  first->val = 0;
  first->next = sentinel; //sould link to a sentinel
  return first;
}

void  add(mut_array * first, int val) {
  mut_array * next;
  while((next = first->next) != sentinel) {
    printf("searching...\r\n");
    first = next;
  }
  next = malloc(sizeof(mut_array));
  next->val = val;
  next->next = sentinel;
}

void delete() {
  // should loop (while..) and free(..) every cell
  // is there a better way of freeing the resources? 
}

int main() {


  mut_array * myMutArray;
  myMutArray = new();
  //edit(<pointer to myMutArray>, <int position>, <int newValue>);


  return 0;
}
