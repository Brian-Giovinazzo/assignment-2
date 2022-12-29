#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int n;
  int sum = 0;
  unsigned long long int product = 1;
  int numArray[10];

  FILE *f = fopen(argv[1], "r");

  if(f == NULL) {
    perror("Unable to open file!");
    exit(1);
  }

  for(int i = 0; i < 10; i++) {
    fscanf(f, "%d", &n);
    numArray[i] = n;
    sum += n;
    product *= n;
  }

  fclose (f);

  printf("%d\n", sum);
  printf("%llu\n", product);

}
