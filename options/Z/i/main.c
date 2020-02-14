#include <stdio.h>

#include "func.h"

int main(int argc, char* argv[]) {

  if (argc < 2) {
     printf("%s arg-1 arg-2\n", argv[0]);
     return;
  }
  
  int result = func(atoi(argv[1]), atoi(argv[2]));

  printf("%s + %s = %d\n", argv[1], argv[2], result);

}
