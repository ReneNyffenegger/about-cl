#include <stdio.h>

//
//  Defined in get_eip.asm
//
uintptr_t get_eip(void);


void h(void);
void g(void);

void f() {

     uintptr_t *basePointer;
     uintptr_t *retAddr;

   __asm mov basePointer, ebp;
     retAddr = _ReturnAddress();

     printf("  f: _ReturnAddress = %x, ebp+1 = %x\n", retAddr, *(basePointer+1));

}


void g() {
     uintptr_t eip;
     printf("In f_3\n");

     f();

     eip = get_eip();

 // 
 //  get_eip() returned the address of the instruction
 //  that followed the get_eip() call.
 //  The x86 call instruction consists of 5 bytes. Thus,
 //  we have to subtract 5 bytes to get the address of the
 //  instruction that follows the call f() instruction.
 // 
     eip = eip - 5;

     printf("  eip following call of f = %x\n", eip);
}


int main() {
    g();
}
