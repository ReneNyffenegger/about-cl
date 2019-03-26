#include <stdio.h>

int num() {
  return 42;
}

#pragma warning(push)
#pragma warning(disable: 4100)
int main(int argc, char *argv[]) {
  printf("Hello world, the numer is %d\n", num());
}
#pragma warning(pop)
