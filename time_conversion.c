#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int h, m;
  char *a = argv[1];
  int minutes = atoi(a);
  h = minutes / 60;
  m = minutes % 60;
  printf("%d hours %d minutes", h, m);
  return 0;
}
