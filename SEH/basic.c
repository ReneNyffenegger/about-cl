#include <stdio.h>
#include <excpt.h>


int divide_by_(int val) {

  int ret;

  __try {

      printf("I am going to divide by 42 by %d\n", val);
      ret = 42 / val;
      printf("After the division.\n");

    }
  __finally {

  //
  // The finally block is executed if or if not an exception
  // has occureed in the guarded block.
  //

      printf("In the finally section.\n");

    }

  return ret;

}


void func(int divide_by_zero) {

    printf("\n");

  __try {

                          printf("42 / 6 = %d\n", divide_by_(6));
      if (divide_by_zero) printf("42 / 0 = %d\n", divide_by_(0));
                          printf("42 / 3 = %d\n", divide_by_(3));

    }
  __except(EXCEPTION_EXECUTE_HANDLER)  {

  //
  // EXCEPTION_EXECUTE_HANDLER specifies that
  // we want to execute the statements in this
  // exception handler part.
  //

      printf("An exception occured\n");

    }

    printf("Leaving func\n");

}


int main(void) {

  func(0);
  func(1);

}
