#include <stdio.h>


unsigned char PC = 0; // the program counter . it stores 0 to 256
unsigned char memory[256]; // the memory.
unsigned char A = 0;

int running = 1;

int main() {
    printf("EMULATION STARTED. MAIN FUNCTION RUNNING.\n");
    memory[0] = 1;
    unsigned char opcode = memory[PC]; //setting the opcode to 1
    printf("%d\n",opcode);
    return 0;


}