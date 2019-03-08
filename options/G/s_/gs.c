#include <windows.h>

void func() {

     char buf[BUFSIZE];

  //
  // Trying to write a byte at the end of the buf.
  //
  // If the size of buf is larger than the stack's guard page,
  // the OS (Windows) has no chance to realize that it had to
  // grow the commited size of the stack - thus, the instructino
  // will fail…
  // … except if /Gs inserts a call to chkstk in the beginning of
  // the function which will cause the necessary exception.
  //
     buf[BUFSIZE] = 0;

     MessageBoxA(NULL, "OK"                                     , "", 0);

}


int start() {
  func();
  ExitProcess(0);
}
