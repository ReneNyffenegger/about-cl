#include <stdio.h>

#define r(mac) #mac
#define s(txt) r(txt)

int main() {
  printf("_MSC_VER      = %s\n", s(_MSC_VER     ));
  printf("_MSC_FULL_VER = %s\n", s(_MSC_FULL_VER));
  printf("_MSC_BUILD    = %s\n", s(_MSC_BUILD   ));
}
