#include <stdio.h>
#include <stdlib.h>

typedef struct mut_array{
  int val;
  struct mut_array * next;
} mut_array;

mut_array * sentinel = malloc(sizeof(sentinel));


mut_array * new() {
  mut_array * first = malloc(sizeof(mut_array));
  first->val = 0;
  first->next = sentinel; //should link to a sentinel
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

void printMutArray(mut_array * first) {
  mut_array * next;
  printf("%d ", first->val);
  while((next = first->next) != sentinel) {
    printf("%d ", next->val);
  }
  printf("\r\n");
}

void delete() {
  // should loop (while..) and free(..) every cell
  // is there a better way of freeing the resources? 
}

int main() {


  mut_array * myMutArray;
  myMutArray = new();
  //edit(<pointer to myMutArray>, <int position>, <int newValue>);

  myMutArray->val = 1;
  add(myMutArray, 2);
  add(myMutArray, 3);

  printMutArray(myMutArray);

  //try to print second val (2):
  mut_array * second = myMutArray->next;
  printf("asd\r\n");
  printf("%d %d\r\n", sentinel, second);
  printf("second == sentinel? %d", second==sentinel);
  printf("second: %d\r\n", second->val);

  return 0;
}
