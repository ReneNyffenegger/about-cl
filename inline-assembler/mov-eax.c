#include <stdio.h>

int func() {

  //
  // In x86 calling convention, the return value
  // is passed using the eax register (in x64, it
  // is rax).
  // The return value of func is 42
  //
     __asm mov eax, 42;
}


int main() {
    printf("func returned %d\n", func());
}
