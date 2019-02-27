#include <windows.h>

int __stdcall entryFunc(void) {

      MessageBoxA(NULL, "Hello", "entryFunc", 0);
      return 42;

}
